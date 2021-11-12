#include "datahandler.hpp"
#include <QTextStream>
#include <QStandardItemModel>
#include <QDir>

QStandardItemModel* DataHandler::load() {

    // Setup the Item model for the table
    model = new QStandardItemModel();

    // Open the file as a text stream so we can read the data
    QTextStream qtsIn(&inputFile);

    // Since the TSV (tab separated file) has a row
    //  that shows the header labels we want to display
    //  those on the table (like Excel).
    QStringList horizontalHeader;

    // We'll use a boolean flag to indicate this is our
    //  first read of the file in the loop.
    bool firstRow = true;

    // When we read in data from the file, we'll store it in
    //  a QString using a reference. A QString is QT's version
    //  of a string with some extra features. Most of the
    //  framework expects QStrings instead of standard strings.
    QString s;
    while (qtsIn.readLineInto(&s))
    {
        QString item;
        QList<QStandardItem*> list;

        // The for each works like Python's except
        //  we need to know the type of data we will get
        //  from the collection.
        foreach (item, s.split('\t')) {
            if (!firstRow) {
                list.push_back(new QStandardItem(item));
            }
            else {
                // Add the labels for each column of data
                horizontalHeader.append(item);
            }
        }
        firstRow = false;
        if (!list.empty())
            // This adds a row of actual data to the table
            model->appendRow(list);
    }

    if (!horizontalHeader.empty())
        // Set the labels for the table
        model->setHorizontalHeaderLabels(horizontalHeader);

    return model;
}

void DataHandler::open(const QString& csvInput) {
    // If you don't use the constructor to provide a QFile object
    //  with a path to the input file, you will need to do so with
    //  the setFileName function.
    inputFile.setFileName(csvInput);

    // Open takes flags to determine how the file should be opened.
    //  The pipe character "|" is a bitwise or operation. Since
    //  ReadOnly and Text are just numbers the bitwise or combines
    //  them into one setting. Bitwise flags are a fairly common way
    //  to handle simple state flags in C and C++.
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);
}

// We want to get all the data from the table so we can write it out to a file
void DataHandler::write(const QString& outputFile, const QString& separator, const QString& outputFileName) {
    QString textData;

    // Get the row and column size of the table
    int rows = model->rowCount();
    int columns = model->columnCount();

    // Loop over the data in the model (the table data) and
    //  assemble the data into one big QString to write to a file.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            textData += model->data(model->index(i,j)).toString();
            textData +=  separator + " ";
        }
        textData += "\n";
    }

    // In this instance we use the constructor of QFile to set the filename
    QFile csvFile(outputFile + QDir::separator().toLatin1() + outputFileName);

    // The if statement here checks if the open operation was successful before
    //  attempting the write and close operations.
    if(csvFile.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        QTextStream out(&csvFile);
        out << textData;
        csvFile.close();
    }
}

