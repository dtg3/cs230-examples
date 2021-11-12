#include "textanalyzer.hpp"
#include <QDebug>

void TextAnalyzer::process(const QString& data)
{
    // The emit keyword is how we can force a signal to occcur/
    //  You can even pass data from a signal to a slot, but the
    //  number or parameters and data types must match. Here we
    //  are passing a QString.
    emit convertText(convertTextToNumbers(data));
}

// This is a function to convert each character from the
//  string to it's ascii value except for spaces.
QString TextAnalyzer::convertTextToNumbers(const QString& data)
{
    QString textNumbers;

    for (int i = 0; i < data.length(); ++i)
    {
        if (data[i] == ' ')
        {
            textNumbers += "[SPACE] ";
        }
        else
        {
            qDebug() << QString::number(data.toStdString()[i]);
            textNumbers += QString::number(data.toStdString()[i]) + " ";
        }
    }

    return textNumbers;
}


