#ifndef DATAHANDLER_HPP
#define DATAHANDLER_HPP

#include <QString>
#include <QFile>
#include <QStandardItemModel>

class DataHandler
{
public:
    DataHandler() {};
    ~DataHandler() {delete model;}
    void open(const QString&);
    QStandardItemModel* load();
    void write(const QString&, const QString&, const QString&);

private:
    QFile inputFile;
    QStandardItemModel *model;
};

#endif // DATAHANDLER_H
