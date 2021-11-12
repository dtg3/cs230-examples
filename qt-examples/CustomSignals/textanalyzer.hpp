#ifndef TEXTANALYZER_HPP
#define TEXTANALYZER_HPP

#include <QObject>
#include <QString>

class TextAnalyzer: public QObject
{
    Q_OBJECT

public:
    TextAnalyzer() {};
    void process(const QString&);

// This is how we can define a signal
//  Signals don't have a private or public option since Qt 5+
signals:
    void convertText(const QString&);

private:
    QString convertTextToNumbers(const QString&);
};

#endif // TEXTANALYZER_HPP
