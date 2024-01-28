#ifndef YOURMANAGER_H
#define YOURMANAGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class YourManager;
}
QT_END_NAMESPACE

class YourManager : public QMainWindow
{
    Q_OBJECT

public:
    YourManager(QWidget *parent = nullptr);
    ~YourManager();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_timeEdit_userTimeChanged(const QTime &time);

private:
    Ui::YourManager *ui;
};
#endif // YOURMANAGER_H
