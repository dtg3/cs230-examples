#include "datawriter.hpp"
#include <QDebug>
#include <QDir>

QString DataWriter::open(const QString& inputPath)
{
    // Sets the path for the file we want to open
    outputFile.setFileName(inputPath + QDir::separator().toLatin1() + "output.txt");

    // This attempts to open the file.
    //  The QIODevice can open a file in a variety of
    //  modes based on how you need to interact with the
    //  file.
    if (!outputFile.open(QIODevice::WriteOnly))
    {
        qDebug() << "FILE NOT OPENED!";
    }
    return outputFile.fileName();
}

void DataWriter::writeData(const QString &outputData)
{
    if (outputFile.isOpen())
    {
        QTextStream stream(&outputFile);
        stream << outputData << "\n";
    }
}

DataWriter::~DataWriter()
{
    if (outputFile.isOpen())
    {
        outputFile.close();
    }
}
