#ifndef DATAWRITER_HPP
#define DATAWRITER_HPP

#include <QObject>
#include <QString>
#include <QFile>

class DataWriter: public QObject
{
    Q_OBJECT
public:
    DataWriter() {};
    ~DataWriter();

public slots:
    QString open(const QString&);
    void writeData(const QString&);

private:
    QFile outputFile;
};

#endif // DATAWRITER_HPP
