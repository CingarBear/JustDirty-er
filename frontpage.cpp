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


void FrontPage::on_actionHelp_triggered()
{
    QMessageBox::information(this, "About Us",
                             "Here at Just Dirtier Cyber Security, we love to keep our\n"
                             "clients in a pile of dirt.  We treat of our individual customers \n"
                             "like trash, but that is okay because we want them to feel like \n"
                             "complete Dirt.  Our application will keep you safe in the dirtiest \n"
                             "way possible.  Think about it, no hacker wants to hack somebody’s \n"
                             "information if the information is a mess.  We will degrade your \n"
                             "information so much that no hackers would ever want to come near \n"
                             "to your information.  The origin of our product was inspired by \n"
                             "stranger we found outside of our local swap meet.  Lets just name \n"
                             "the stranger’s name was “Chaz.”  Chaz’s state of hygiene was \n"
                             "absolutely appalling.  A stench of French fry grease and a moldy \n"
                             "shoe was emitted from “Chaz’s” beard.  Nobody wanted to come \n"
                             "close to this abomination.  In fact, everybody who passed by \n"
                             "the horrid person was rushed to the local hospital.  Our security\n"
                             " program is metaphorical to the atrocity we found at the swap meet.  \n"
                             "We want our customers to feel that no threats will come by their \n"
                             "business and we will do this by making your business “Just Dirtier.\n");
}

void FrontPage::on_actionHelp_Using_Our_Program_triggered()
{
    QMessageBox::information(this, "Help Using Our Program",
                             "Start with the mouse. The cursor will move.  Move the cursor to your \n"
                             "desired destination.  To choose an option, click on the mouse.   Not \n"
                             "the right button, the left one.  After that, play with our program to\n"
                             "get familiar with it you dirty piece of filth.");
}
