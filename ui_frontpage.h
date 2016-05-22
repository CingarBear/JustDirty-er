/********************************************************************************
** Form generated from reading UI file 'frontpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRONTPAGE_H
#define UI_FRONTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrontPage
{
public:
    QAction *actionContact_Us;
    QAction *actionContact_Us_3;
    QAction *actionHelp;
    QAction *actionHelp_Using_Our_Program;
    QAction *actionAdmin_Login;
    QWidget *centralWidget;
    QToolBox *toolBox;
    QWidget *Home;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_3;
    QLabel *label;
    QLabel *label_10;
    QWidget *page_5;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QPushButton *pushButton_2;
    QWidget *toolBoxPage2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_6;
    QLabel *label_2;
    QWidget *Home1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuHelp;

    void setupUi(QMainWindow *FrontPage)
    {
        if (FrontPage->objectName().isEmpty())
            FrontPage->setObjectName(QStringLiteral("FrontPage"));
        FrontPage->resize(825, 896);
        FrontPage->setIconSize(QSize(40, 40));
        actionContact_Us = new QAction(FrontPage);
        actionContact_Us->setObjectName(QStringLiteral("actionContact_Us"));
        actionContact_Us_3 = new QAction(FrontPage);
        actionContact_Us_3->setObjectName(QStringLiteral("actionContact_Us_3"));
        actionHelp = new QAction(FrontPage);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionHelp_Using_Our_Program = new QAction(FrontPage);
        actionHelp_Using_Our_Program->setObjectName(QStringLiteral("actionHelp_Using_Our_Program"));
        actionAdmin_Login = new QAction(FrontPage);
        actionAdmin_Login->setObjectName(QStringLiteral("actionAdmin_Login"));
        centralWidget = new QWidget(FrontPage);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(0, 0, 831, 841));
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Sunken);
        Home = new QWidget();
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(0, 0, 831, 733));
        textEdit_2 = new QTextEdit(Home);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 400, 431, 51));
        textEdit_2->setAutoFillBackground(false);
        textEdit_2->setReadOnly(true);
        textEdit = new QTextEdit(Home);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(480, 410, 321, 311));
        textEdit->setReadOnly(true);
        textEdit_3 = new QTextEdit(Home);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(50, 450, 371, 271));
        textEdit_3->setReadOnly(true);
        label = new QLabel(Home);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 130, 141, 171));
        label_10 = new QLabel(Home);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, -10, 831, 411));
        label_10->setPixmap(QPixmap(QString::fromUtf8("Assets/21991-science-raptor-raptors-meme-memes.png")));
        toolBox->addItem(Home, QStringLiteral(""));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 831, 733));
        textEdit_4 = new QTextEdit(page_5);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(190, 470, 421, 70));
        textEdit_5 = new QTextEdit(page_5);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(160, 20, 501, 431));
        textEdit_5->setReadOnly(true);
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 610, 111, 51));
        toolBox->addItem(page_5, QStringLiteral("Page"));
        toolBoxPage2 = new QWidget();
        toolBoxPage2->setObjectName(QStringLiteral("toolBoxPage2"));
        toolBoxPage2->setGeometry(QRect(0, 0, 831, 733));
        lineEdit = new QLineEdit(toolBoxPage2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 470, 311, 101));
        pushButton_3 = new QPushButton(toolBoxPage2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(640, 540, 91, 31));
        textEdit_6 = new QTextEdit(toolBoxPage2);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(40, 80, 751, 321));
        textEdit_6->setReadOnly(true);
        label_2 = new QLabel(toolBoxPage2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 460, 191, 31));
        toolBox->addItem(toolBoxPage2, QStringLiteral(""));
        Home1 = new QWidget();
        Home1->setObjectName(QStringLiteral("Home1"));
        Home1->setGeometry(QRect(0, 0, 831, 733));
        radioButton_2 = new QRadioButton(Home1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(280, 220, 121, 41));
        radioButton = new QRadioButton(Home1);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(280, 190, 121, 41));
        pushButton = new QPushButton(Home1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 70, 80, 41));
        layoutWidget = new QWidget(Home1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 360, 191, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        label_3 = new QLabel(Home1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 160, 221, 16));
        radioButton_3 = new QRadioButton(Home1);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(280, 250, 141, 41));
        pushButton_4 = new QPushButton(Home1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 70, 80, 41));
        label_4 = new QLabel(Home1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 40, 201, 16));
        label_5 = new QLabel(Home1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 330, 161, 16));
        layoutWidget_2 = new QWidget(Home1);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(240, 360, 81, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        pushButton_5 = new QPushButton(Home1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(510, 510, 75, 23));
        toolBox->addItem(Home1, QStringLiteral("Page"));
        FrontPage->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FrontPage);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FrontPage->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FrontPage);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FrontPage->setStatusBar(statusBar);
        menuBar = new QMenuBar(FrontPage);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 825, 21));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        FrontPage->setMenuBar(menuBar);

        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionContact_Us_3);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelp_Using_Our_Program);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAdmin_Login);

        retranslateUi(FrontPage);
        QObject::connect(pushButton_3, SIGNAL(clicked()), lineEdit, SLOT(clear()));
        QObject::connect(lineEdit, SIGNAL(textEdited(QString)), textEdit_6, SLOT(append(QString)));

        QMetaObject::connectSlotsByName(FrontPage);
    } // setupUi

    void retranslateUi(QMainWindow *FrontPage)
    {
        FrontPage->setWindowTitle(QApplication::translate("FrontPage", "FrontPage", 0));
        actionContact_Us->setText(QApplication::translate("FrontPage", "Contact Us", 0));
        actionContact_Us_3->setText(QApplication::translate("FrontPage", "Contact Us", 0));
        actionHelp->setText(QApplication::translate("FrontPage", "About Us", 0));
        actionHelp_Using_Our_Program->setText(QApplication::translate("FrontPage", "Help Using Our Program", 0));
        actionAdmin_Login->setText(QApplication::translate("FrontPage", "Admin Login", 0));
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QApplication::translate("FrontPage", "<html><head/><body><p>Dirty Page</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        textEdit_2->setHtml(QApplication::translate("FrontPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Are YOU tired of being clean? Well if you are, then the Just Dirtier Team is here to help!</span></p></body></html>", 0));
        textEdit->setHtml(QApplication::translate("FrontPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">**************************************************</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">*                       Our Concept of Operations                             *</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">*_________________________________________________</span></p>"
                        "\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">                                                         </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">We see more, analyze more and stop more online threats.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">How long does it take for malware to infect your         </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">brand-new computer? If you use free or other inferior    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x;\"><span style=\" font-size:8pt;\">security software, maybe not long at all.                </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">                                                         </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Cybercriminals are more sophisticated than ever before,  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">and they use a diverse arsenal of tools to gain access to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">your information. Other security products just don\342\200\231t have</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">the resources to keep up with new threats as they emerge.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">                                                         </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">But JustDirtier products do. As the threats get worse,   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">our products just keep getting better. Our teams of      </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "<span style=\" font-size:8pt;\">security experts are constantly analyzing new threats and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">devising new ways to protect your devices from them.     </span></p></body></html>", 0));
        textEdit_3->setHtml(QApplication::translate("FrontPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">***********************************************************</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">*                               </span><span style=\" font-size:7.875pt; font-weight:600; text-decoration: underline;\"> Supported Environments </span><span style=\" font-size:7.875pt;\">                                  *</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">*_________________________________________________________*</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\"> We Support any </span><span style=\" font-size:7.875pt; font-weight:600;\">WINDOWS</span><span style=\" font-size:7.875pt;\"> Platforms:   (After Windows XP)   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">----------------------------------                        </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                              Windows (32-bit version)    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; marg"
                        "in-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                              Windows (64-bit version)    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">__________________________________________________________                   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\"> We Support </span><span style=\" font-size:7.875pt; font-weight:600;\">MAC OS X</span><span style=\" font-size:7.875pt;\"> Platform: (Version 10.7.3 and Above) </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">------------------------------                            </span></p>\n"
"<p style=\" margin-top:0px; ma"
                        "rgin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                              Mac OS X                    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">__________________________________________________________</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\"> We Support </span><span style=\" font-size:7.875pt; font-weight:600;\">LINUX</span><span style=\" font-size:7.875pt;\"> Platforms:                              </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">----------------------------                              </span></p>\n"
"<p style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                              Linux RPM                   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                              Linux                       </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                              Linux RPM (64-bit version)  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                              Linux     (64-bit version) </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px; font-size:7.875pt;\"><br /></p></body></html>", 0));
        label->setText(QString());
        label_10->setText(QString());
        toolBox->setItemText(toolBox->indexOf(Home), QString());
        textEdit_4->setHtml(QApplication::translate("FrontPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt; font-weight:600;\">MAINTANCE PLAN</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">We will be able to offer 24/7 maintenance on any product of ours. We can communicate over the phone, Email, or even by one of our Dirty Technicians. </span></p></body></html>", 0));
        textEdit_5->setHtml(QApplication::translate("FrontPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">*****************************************************************************</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                                     </span><span style=\" font-size:7.875pt; font-weight:600; text-decoration: underline;\">Three Service Options                                                   </span><span style=\" font-size:7.875pt;\"> _________________________________"
                        "____________________________________________</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\"> The </span><span style=\" font-size:7.875pt; font-weight:600;\">Dirty</span><span style=\" font-size:7.875pt;\"> Package</span><span style=\" font-size:8pt;\"> ( 1 Month: $50 / 1 Year: $75 ) </span><span style=\" font-size:7.875pt;\">:                                                                         </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">--------------------------------------------------------------                                                                              </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8p"
                        "t;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt;\">Defends against viruses, spyware, malware and other online threats 		            using dust. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt;\">Cloaks your identity and online transactions with soil. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt;\">\302\240\302\240\302\240\302"
                        "\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt;\">Protects better and faster than the competition </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt;\">Includes our 100% guarantee: We\342\200\231ll help keep your device virus-free or 		            give you a dust </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">_____________________________________________________________________________</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-si"
                        "ze:7.875pt;\"> The </span><span style=\" font-size:7.875pt; font-weight:600;\">Just Dirtier</span><span style=\" font-size:7.875pt;\"> Package </span><span style=\" font-size:8pt;\">( 1 Month: $75 / 1 Year: $100 ) :</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">-------------------------------------------------------------------------</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">     \342\200\242\302\240\302\240\302\240 Secures multiple PCs, Macs, smartphones and tablets with a single subscription. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7p"
                        "t;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt;\">Helps you manage protection for all your devices with an easy-to-use Web portal </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt;\">Safeguards your identity and online transactions </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt;\">Protects better and faster "
                        "than the competition </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt;\">Includes our 100% guarantee : We\342\200\231ll help keep your devises virus-free or give you some         </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">             more dirt </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">     \342\200\242\302\240\302\240\302\240 Defends against viruses, spyware, malware and other online threats </span><span style=\" font-size:7.875pt;\"> "
                        "                                                     </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                                                          </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">_____________________________________________________________________________</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\"> The </span><span style=\" font-size:7.875pt; font-weight:600;\">Absolutly Filthy</span><span style=\" font-size:7.875pt;\"> Package </span><span style=\" font-size:8pt;\">( 1 Month: $100 / 2 Months: $150 ) :</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-in"
                        "dent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">-----------------------------------------------------------------------------------</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:8pt; color:#191919;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#191919;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt; color:#191919;\">Offers you 25 GB of secure online PC storage, with the ability to add more as your needs</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-size:8pt; color:#191919;\">             change.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:8pt; color:#191919;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#191919;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt; color:#191919;\">Provides premium family safety features so your kids can explore their connected world</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-size:8pt; color:#191919;\">             safely.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:8pt; color:#191919;\">     \302\267</span><span style=\" font-family:'Ti"
                        "mes New Roman'; font-size:7pt; color:#191919;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt; color:#191919;\">Secures multiple PCs, Macs, smartphones and tablets with a single subscription.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:8pt; color:#191919;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#191919;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt; color:#191919;\">Helps you manage protection for all your devices with an easy-to-use Web portal.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><sp"
                        "an style=\" font-family:'Symbol'; font-size:8pt; color:#191919;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#191919;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt; color:#191919;\">Defends against viruses, spyware, malware and other online threats.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:8pt; color:#191919;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#191919;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt; color:#191919;\">Safeguards your identity and online transactions.</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:8pt; color:#191919;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#191919;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt; color:#191919;\">Protects better and faster than the competition.</span><span style=\" font-size:8pt; color:#191919; vertical-align:super;\">1</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Symbol'; font-size:8pt; color:#191919;\">     \302\267</span><span style=\" font-family:'Times New Roman'; font-size:7pt; color:#191919;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-size:8pt; color:#191919;\">Includes our 100% guarantee: We\342\200\231ll help ke"
                        "ep your devices virus-free or give you a</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-size:8pt; color:#191919;\">             refund.</span><span style=\" font-size:7.875pt;\">                        </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                        </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                                                          </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.875pt;\">                                                                                     "
                        "                              </span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("FrontPage", "Dirty Guarantee", 0));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("FrontPage", "Page", 0));
        pushButton_3->setText(QApplication::translate("FrontPage", "Submit", 0));
        textEdit_6->setHtml(QApplication::translate("FrontPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Testimonials</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\302\240\342\200\234We love \342\200\234Just Dirtier.\342\200\235\302\240 My family has not been hacked for centuries.\302\240 \342\200\234Just Dirtier\342\200\235 shooed away the hackers and we want to keep it that way. \342\200\234 8/10 </span></p>\n"
"<p style=\" ma"
                        "rgin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- Janet from Jacksonville Florida </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\302\240 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\342\200\234First thing I did when I bought \342\200\234Just Dirtier\342\200\235 was take a shower.\342\200\235 10/10 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- Lamar from Burbank California </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\302\240"
                        " </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\342\200\234This product is absolutely disgusting.\302\240 It was so dirty I didn\342\200\231t even want to come close to my business\342\200\231 information\342\200\235 10/10 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- Stacey from Ferguson Missouri </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\302\240 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\342\200\234I Love Dirt &lt;3\342\200\235 7/10 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- Phil from Collinsville Illinois </span></p></body></html>", 0));
        label_2->setText(QApplication::translate("FrontPage", "Would you like to add a Testimonal?", 0));
        toolBox->setItemText(toolBox->indexOf(toolBoxPage2), QString());
        radioButton_2->setText(QApplication::translate("FrontPage", "Just Dirtier Package", 0));
        radioButton->setText(QApplication::translate("FrontPage", "Dirty Package", 0));
        pushButton->setText(QApplication::translate("FrontPage", "Yes!", 0));
        label_3->setText(QApplication::translate("FrontPage", "Choose the Sevice Package you would like:", 0));
        radioButton_3->setText(QApplication::translate("FrontPage", "Absolutly Filthy Package", 0));
        pushButton_4->setText(QApplication::translate("FrontPage", "No", 0));
        label_4->setText(QApplication::translate("FrontPage", "Would you like to Use our services?", 0));
        label_5->setText(QApplication::translate("FrontPage", "Please Enter Your Information:", 0));
        label_6->setText(QApplication::translate("FrontPage", "Name:", 0));
        label_7->setText(QApplication::translate("FrontPage", "Address:", 0));
        label_8->setText(QApplication::translate("FrontPage", "City/State/Zip:", 0));
        label_9->setText(QApplication::translate("FrontPage", "Interest", 0));
        pushButton_5->setText(QApplication::translate("FrontPage", "Submit", 0));
        toolBox->setItemText(toolBox->indexOf(Home1), QApplication::translate("FrontPage", "Page", 0));
        menuHelp->setTitle(QApplication::translate("FrontPage", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class FrontPage: public Ui_FrontPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRONTPAGE_H
