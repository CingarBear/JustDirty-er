#include "frontpage.h"
#include "ui_frontpage.h"
#include <QtCore>
#include <QtGui>
#include <qmessagebox.h>

FrontPage::FrontPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrontPage)
{
    ui->setupUi(this);
}

FrontPage::~FrontPage()
{
    delete ui;
}


void FrontPage::on_actionContact_Us_3_triggered()
{
    QMessageBox::information(this, "Contact Us",
                             "***********************************************************\n"
                             "*                       CONTACT US                         \n"
                             "*__________________________________________________________\n"
                             "* Business hours: Sunday    - CLOSED                       \n"
                             "*----------------  Monday    - 2:35am  - 7:33am            \n"
                             "*                         Tuesday   - 2:36pm  - 3:36pm     \n"
                             "*                         Wednesday - 5:12am  - 5:12pm     \n"
                             "*                         Thursday  - 6:06pm  - 3:33am     \n"
                             "*                         Friday    - 12:00pm - 11:59a     \n"
                             "*                         Saturday  - 10:31am - 10:35a     \n"
                             "*__________________________________________________________\n"
                             "* PHONE SUPPORT |                                          \n"
                             "*----------------                                          \n"
                             "*             Toll-Free: 1-800-347-8437                    \n"
                             "*                      ( 1-800-DIRTIER )                   \n"
                             "*__________________________________________________________\n"
                             "* E-MAIL SUPPORT |                                         \n"
                             "*-----------------                                         \n"
                             "*                E-Mail Address: TeamDirt@JustDirtier.org  \n"
                             "*                                                          \n"
                             "***********************************************************\n");
}

void FrontPage::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Guarantee Policy",
                             "***********************************************************\n"
                             "*                    Guarantee Policy                      \n"
                             "*__________________________________________________________\n"
                             "*                                                          \n"
                             "* We include a protection promise only a Team of Dirt can  \n"
                             "* make.                                                    \n"
                             "* We’re so confident in our ability to keep you secure, we \n"
                             "* offer a 100% guarantee: From the moment you subscribe, a \n"
                             "* Team Dirt expert will help keep your devices virus-free  \n"
                             "* or give you a refund. You won’t find a better promise    \n"
                             "* than this from free or paid competitors.                 \n"
                             "*                                                          \n"
                             "***********************************************************\n");
}
