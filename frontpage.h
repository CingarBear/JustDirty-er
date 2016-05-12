#ifndef FRONTPAGE_H
#define FRONTPAGE_H

#include <QMainWindow>

namespace Ui {
class FrontPage;
}

class FrontPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrontPage(QWidget *parent = 0);
    ~FrontPage();

private slots:

    void on_actionContact_Us_3_triggered();

    void on_pushButton_2_clicked();

private:
    Ui::FrontPage *ui;
};

#endif // FRONTPAGE_H
