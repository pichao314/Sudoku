/********************************************************************************
** Form generated from reading UI file 'sudokuui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKUUI_H
#define UI_SUDOKUUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sudokuUI
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_19;
    QFrame *line_20;
    QPushButton *generateNew;
    QPushButton *startSolving;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_btTime;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_btMem;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLabel *label_sT;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_sM;
    QLabel *label_13;
    QLabel *label00;
    QLabel *label01;
    QLabel *label02;
    QLabel *label03;
    QLabel *label04;
    QLabel *label05;
    QLabel *label06;
    QLabel *label07;
    QLabel *label08;
    QLabel *label15;
    QLabel *label22;
    QLabel *label14;
    QLabel *label21;
    QLabel *label13;
    QLabel *label20;
    QLabel *label12;
    QLabel *label25;
    QLabel *label24;
    QLabel *label23;
    QLabel *label28;
    QLabel *label27;
    QLabel *label11;
    QLabel *label26;
    QLabel *label10;
    QLabel *label18;
    QLabel *label17;
    QLabel *label16;
    QLabel *label30;
    QLabel *label31;
    QLabel *label32;
    QLabel *label35;
    QLabel *label33;
    QLabel *label34;
    QLabel *label38;
    QLabel *label36;
    QLabel *label37;
    QLabel *label55;
    QLabel *label48;
    QLabel *label54;
    QLabel *label47;
    QLabel *label53;
    QLabel *label46;
    QLabel *label62;
    QLabel *label60;
    QLabel *label61;
    QLabel *label65;
    QLabel *label63;
    QLabel *label64;
    QLabel *label67;
    QLabel *label66;
    QLabel *label68;
    QLabel *label84;
    QLabel *label77;
    QLabel *label85;
    QLabel *label78;
    QLabel *label83;
    QLabel *label76;
    QLabel *label40;
    QLabel *label56;
    QLabel *label88;
    QLabel *label72;
    QLabel *label41;
    QLabel *label57;
    QLabel *label86;
    QLabel *label70;
    QLabel *label58;
    QLabel *label87;
    QLabel *label71;
    QLabel *label42;
    QLabel *label45;
    QLabel *label52;
    QLabel *label74;
    QLabel *label81;
    QLabel *label50;
    QLabel *label82;
    QLabel *label43;
    QLabel *label75;
    QLabel *label51;
    QLabel *label44;
    QLabel *label80;
    QLabel *label73;
    QRadioButton *easyButton;
    QRadioButton *hardButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sudokuUI)
    {
        if (sudokuUI->objectName().isEmpty())
            sudokuUI->setObjectName(QString::fromUtf8("sudokuUI"));
        sudokuUI->resize(595, 685);
        centralWidget = new QWidget(sudokuUI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(260, 80, 271, 20));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        line->setFont(font);
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(250, 90, 20, 271));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(260, 110, 271, 20));
        line_3->setFrameShadow(QFrame::Sunken);
        line_3->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(260, 140, 271, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(260, 170, 271, 20));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(3);
        line_5->setFrameShape(QFrame::HLine);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(260, 200, 271, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(260, 230, 271, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(260, 260, 271, 20));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setLineWidth(3);
        line_8->setFrameShape(QFrame::HLine);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(260, 290, 271, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(260, 320, 271, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(260, 350, 271, 20));
        line_11->setFrameShadow(QFrame::Plain);
        line_11->setLineWidth(3);
        line_11->setFrameShape(QFrame::HLine);
        line_12 = new QFrame(centralWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(280, 90, 20, 271));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralWidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(310, 90, 20, 271));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralWidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(340, 90, 20, 271));
        line_14->setFrameShadow(QFrame::Plain);
        line_14->setLineWidth(3);
        line_14->setFrameShape(QFrame::VLine);
        line_15 = new QFrame(centralWidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(370, 90, 20, 271));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(centralWidget);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(400, 90, 20, 271));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(centralWidget);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(430, 90, 20, 271));
        line_17->setFrameShadow(QFrame::Plain);
        line_17->setLineWidth(3);
        line_17->setFrameShape(QFrame::VLine);
        line_18 = new QFrame(centralWidget);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(460, 90, 20, 271));
        line_18->setFrameShape(QFrame::VLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(centralWidget);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(490, 90, 20, 271));
        line_19->setFrameShape(QFrame::VLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(centralWidget);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setGeometry(QRect(520, 90, 20, 271));
        line_20->setFrameShadow(QFrame::Plain);
        line_20->setLineWidth(3);
        line_20->setFrameShape(QFrame::VLine);
        generateNew = new QPushButton(centralWidget);
        generateNew->setObjectName(QString::fromUtf8("generateNew"));
        generateNew->setGeometry(QRect(50, 120, 141, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(18);
        generateNew->setFont(font1);
        generateNew->setAutoDefault(false);
        generateNew->setFlat(false);
        startSolving = new QPushButton(centralWidget);
        startSolving->setObjectName(QString::fromUtf8("startSolving"));
        startSolving->setGeometry(QRect(50, 260, 141, 61));
        startSolving->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 40, 131, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(false);
        label->setFont(font2);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Plain);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 390, 181, 201));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(18);
        font3.setItalic(true);
        groupBox->setFont(font3);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 81, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Times New Roman"));
        font4.setPointSize(16);
        label_2->setFont(font4);
        label_btTime = new QLabel(groupBox);
        label_btTime->setObjectName(QString::fromUtf8("label_btTime"));
        label_btTime->setGeometry(QRect(88, 80, 41, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 80, 31, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 130, 101, 20));
        label_5->setFont(font4);
        label_btMem = new QLabel(groupBox);
        label_btMem->setObjectName(QString::fromUtf8("label_btMem"));
        label_btMem->setGeometry(QRect(88, 160, 41, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 160, 31, 16));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(340, 390, 181, 201));
        groupBox_2->setFont(font3);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 50, 91, 16));
        label_8->setFont(font4);
        label_sT = new QLabel(groupBox_2);
        label_sT->setObjectName(QString::fromUtf8("label_sT"));
        label_sT->setGeometry(QRect(88, 80, 41, 20));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(140, 80, 59, 16));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 130, 111, 16));
        label_11->setFont(font4);
        label_sM = new QLabel(groupBox_2);
        label_sM->setObjectName(QString::fromUtf8("label_sM"));
        label_sM->setGeometry(QRect(88, 160, 41, 20));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(140, 160, 59, 16));
        label00 = new QLabel(centralWidget);
        label00->setObjectName(QString::fromUtf8("label00"));
        label00->setGeometry(QRect(270, 100, 16, 16));
        QFont font5;
        font5.setPointSize(15);
        label00->setFont(font5);
        label01 = new QLabel(centralWidget);
        label01->setObjectName(QString::fromUtf8("label01"));
        label01->setGeometry(QRect(300, 100, 16, 16));
        label01->setFont(font5);
        label02 = new QLabel(centralWidget);
        label02->setObjectName(QString::fromUtf8("label02"));
        label02->setGeometry(QRect(330, 100, 16, 16));
        label02->setFont(font5);
        label03 = new QLabel(centralWidget);
        label03->setObjectName(QString::fromUtf8("label03"));
        label03->setGeometry(QRect(360, 100, 16, 16));
        label03->setFont(font5);
        label04 = new QLabel(centralWidget);
        label04->setObjectName(QString::fromUtf8("label04"));
        label04->setGeometry(QRect(390, 100, 16, 16));
        label04->setFont(font5);
        label05 = new QLabel(centralWidget);
        label05->setObjectName(QString::fromUtf8("label05"));
        label05->setGeometry(QRect(420, 100, 16, 16));
        label05->setFont(font5);
        label06 = new QLabel(centralWidget);
        label06->setObjectName(QString::fromUtf8("label06"));
        label06->setGeometry(QRect(450, 100, 16, 16));
        label06->setFont(font5);
        label07 = new QLabel(centralWidget);
        label07->setObjectName(QString::fromUtf8("label07"));
        label07->setGeometry(QRect(480, 100, 16, 16));
        label07->setFont(font5);
        label08 = new QLabel(centralWidget);
        label08->setObjectName(QString::fromUtf8("label08"));
        label08->setGeometry(QRect(510, 100, 16, 16));
        label08->setFont(font5);
        label15 = new QLabel(centralWidget);
        label15->setObjectName(QString::fromUtf8("label15"));
        label15->setGeometry(QRect(420, 130, 16, 16));
        label15->setFont(font5);
        label22 = new QLabel(centralWidget);
        label22->setObjectName(QString::fromUtf8("label22"));
        label22->setGeometry(QRect(330, 160, 16, 16));
        label22->setFont(font5);
        label14 = new QLabel(centralWidget);
        label14->setObjectName(QString::fromUtf8("label14"));
        label14->setGeometry(QRect(390, 130, 16, 16));
        label14->setFont(font5);
        label21 = new QLabel(centralWidget);
        label21->setObjectName(QString::fromUtf8("label21"));
        label21->setGeometry(QRect(300, 160, 16, 16));
        label21->setFont(font5);
        label13 = new QLabel(centralWidget);
        label13->setObjectName(QString::fromUtf8("label13"));
        label13->setGeometry(QRect(360, 130, 16, 16));
        label13->setFont(font5);
        label20 = new QLabel(centralWidget);
        label20->setObjectName(QString::fromUtf8("label20"));
        label20->setGeometry(QRect(270, 160, 16, 16));
        label20->setFont(font5);
        label12 = new QLabel(centralWidget);
        label12->setObjectName(QString::fromUtf8("label12"));
        label12->setGeometry(QRect(330, 130, 16, 16));
        label12->setFont(font5);
        label25 = new QLabel(centralWidget);
        label25->setObjectName(QString::fromUtf8("label25"));
        label25->setGeometry(QRect(420, 160, 16, 16));
        label25->setFont(font5);
        label24 = new QLabel(centralWidget);
        label24->setObjectName(QString::fromUtf8("label24"));
        label24->setGeometry(QRect(390, 160, 16, 16));
        label24->setFont(font5);
        label23 = new QLabel(centralWidget);
        label23->setObjectName(QString::fromUtf8("label23"));
        label23->setGeometry(QRect(360, 160, 16, 16));
        label23->setFont(font5);
        label28 = new QLabel(centralWidget);
        label28->setObjectName(QString::fromUtf8("label28"));
        label28->setGeometry(QRect(510, 160, 16, 16));
        label28->setFont(font5);
        label27 = new QLabel(centralWidget);
        label27->setObjectName(QString::fromUtf8("label27"));
        label27->setGeometry(QRect(480, 160, 16, 16));
        label27->setFont(font5);
        label11 = new QLabel(centralWidget);
        label11->setObjectName(QString::fromUtf8("label11"));
        label11->setGeometry(QRect(300, 130, 16, 16));
        label11->setFont(font5);
        label26 = new QLabel(centralWidget);
        label26->setObjectName(QString::fromUtf8("label26"));
        label26->setGeometry(QRect(450, 160, 16, 16));
        label26->setFont(font5);
        label10 = new QLabel(centralWidget);
        label10->setObjectName(QString::fromUtf8("label10"));
        label10->setGeometry(QRect(270, 130, 16, 16));
        label10->setFont(font5);
        label18 = new QLabel(centralWidget);
        label18->setObjectName(QString::fromUtf8("label18"));
        label18->setGeometry(QRect(510, 130, 16, 16));
        label18->setFont(font5);
        label17 = new QLabel(centralWidget);
        label17->setObjectName(QString::fromUtf8("label17"));
        label17->setGeometry(QRect(480, 130, 16, 16));
        label17->setFont(font5);
        label16 = new QLabel(centralWidget);
        label16->setObjectName(QString::fromUtf8("label16"));
        label16->setGeometry(QRect(450, 130, 16, 16));
        label16->setFont(font5);
        label30 = new QLabel(centralWidget);
        label30->setObjectName(QString::fromUtf8("label30"));
        label30->setGeometry(QRect(270, 190, 16, 16));
        label30->setFont(font5);
        label31 = new QLabel(centralWidget);
        label31->setObjectName(QString::fromUtf8("label31"));
        label31->setGeometry(QRect(300, 190, 16, 16));
        label31->setFont(font5);
        label32 = new QLabel(centralWidget);
        label32->setObjectName(QString::fromUtf8("label32"));
        label32->setGeometry(QRect(330, 190, 16, 16));
        label32->setFont(font5);
        label35 = new QLabel(centralWidget);
        label35->setObjectName(QString::fromUtf8("label35"));
        label35->setGeometry(QRect(420, 190, 16, 16));
        label35->setFont(font5);
        label33 = new QLabel(centralWidget);
        label33->setObjectName(QString::fromUtf8("label33"));
        label33->setGeometry(QRect(360, 190, 16, 16));
        label33->setFont(font5);
        label34 = new QLabel(centralWidget);
        label34->setObjectName(QString::fromUtf8("label34"));
        label34->setGeometry(QRect(390, 190, 16, 16));
        label34->setFont(font5);
        label38 = new QLabel(centralWidget);
        label38->setObjectName(QString::fromUtf8("label38"));
        label38->setGeometry(QRect(510, 190, 16, 16));
        label38->setFont(font5);
        label36 = new QLabel(centralWidget);
        label36->setObjectName(QString::fromUtf8("label36"));
        label36->setGeometry(QRect(450, 190, 16, 16));
        label36->setFont(font5);
        label37 = new QLabel(centralWidget);
        label37->setObjectName(QString::fromUtf8("label37"));
        label37->setGeometry(QRect(480, 190, 16, 16));
        label37->setFont(font5);
        label55 = new QLabel(centralWidget);
        label55->setObjectName(QString::fromUtf8("label55"));
        label55->setGeometry(QRect(420, 250, 16, 16));
        label55->setFont(font5);
        label48 = new QLabel(centralWidget);
        label48->setObjectName(QString::fromUtf8("label48"));
        label48->setGeometry(QRect(510, 220, 16, 16));
        label48->setFont(font5);
        label54 = new QLabel(centralWidget);
        label54->setObjectName(QString::fromUtf8("label54"));
        label54->setGeometry(QRect(390, 250, 16, 16));
        label54->setFont(font5);
        label47 = new QLabel(centralWidget);
        label47->setObjectName(QString::fromUtf8("label47"));
        label47->setGeometry(QRect(480, 220, 16, 16));
        label47->setFont(font5);
        label53 = new QLabel(centralWidget);
        label53->setObjectName(QString::fromUtf8("label53"));
        label53->setGeometry(QRect(360, 250, 16, 16));
        label53->setFont(font5);
        label46 = new QLabel(centralWidget);
        label46->setObjectName(QString::fromUtf8("label46"));
        label46->setGeometry(QRect(450, 220, 16, 16));
        label46->setFont(font5);
        label62 = new QLabel(centralWidget);
        label62->setObjectName(QString::fromUtf8("label62"));
        label62->setGeometry(QRect(330, 280, 16, 16));
        label62->setFont(font5);
        label60 = new QLabel(centralWidget);
        label60->setObjectName(QString::fromUtf8("label60"));
        label60->setGeometry(QRect(270, 280, 16, 16));
        label60->setFont(font5);
        label61 = new QLabel(centralWidget);
        label61->setObjectName(QString::fromUtf8("label61"));
        label61->setGeometry(QRect(300, 280, 16, 16));
        label61->setFont(font5);
        label65 = new QLabel(centralWidget);
        label65->setObjectName(QString::fromUtf8("label65"));
        label65->setGeometry(QRect(420, 280, 16, 16));
        label65->setFont(font5);
        label63 = new QLabel(centralWidget);
        label63->setObjectName(QString::fromUtf8("label63"));
        label63->setGeometry(QRect(360, 280, 16, 16));
        label63->setFont(font5);
        label64 = new QLabel(centralWidget);
        label64->setObjectName(QString::fromUtf8("label64"));
        label64->setGeometry(QRect(390, 280, 16, 16));
        label64->setFont(font5);
        label67 = new QLabel(centralWidget);
        label67->setObjectName(QString::fromUtf8("label67"));
        label67->setGeometry(QRect(480, 280, 16, 16));
        label67->setFont(font5);
        label66 = new QLabel(centralWidget);
        label66->setObjectName(QString::fromUtf8("label66"));
        label66->setGeometry(QRect(450, 280, 16, 16));
        label66->setFont(font5);
        label68 = new QLabel(centralWidget);
        label68->setObjectName(QString::fromUtf8("label68"));
        label68->setGeometry(QRect(510, 280, 16, 16));
        label68->setFont(font5);
        label84 = new QLabel(centralWidget);
        label84->setObjectName(QString::fromUtf8("label84"));
        label84->setGeometry(QRect(390, 340, 16, 16));
        label84->setFont(font5);
        label77 = new QLabel(centralWidget);
        label77->setObjectName(QString::fromUtf8("label77"));
        label77->setGeometry(QRect(480, 310, 16, 16));
        label77->setFont(font5);
        label85 = new QLabel(centralWidget);
        label85->setObjectName(QString::fromUtf8("label85"));
        label85->setGeometry(QRect(420, 340, 16, 16));
        label85->setFont(font5);
        label78 = new QLabel(centralWidget);
        label78->setObjectName(QString::fromUtf8("label78"));
        label78->setGeometry(QRect(510, 310, 16, 16));
        label78->setFont(font5);
        label83 = new QLabel(centralWidget);
        label83->setObjectName(QString::fromUtf8("label83"));
        label83->setGeometry(QRect(360, 340, 16, 16));
        label83->setFont(font5);
        label76 = new QLabel(centralWidget);
        label76->setObjectName(QString::fromUtf8("label76"));
        label76->setGeometry(QRect(450, 310, 16, 16));
        label76->setFont(font5);
        label40 = new QLabel(centralWidget);
        label40->setObjectName(QString::fromUtf8("label40"));
        label40->setGeometry(QRect(270, 220, 16, 16));
        label40->setFont(font5);
        label56 = new QLabel(centralWidget);
        label56->setObjectName(QString::fromUtf8("label56"));
        label56->setGeometry(QRect(450, 250, 16, 16));
        label56->setFont(font5);
        label88 = new QLabel(centralWidget);
        label88->setObjectName(QString::fromUtf8("label88"));
        label88->setGeometry(QRect(510, 340, 16, 16));
        label88->setFont(font5);
        label72 = new QLabel(centralWidget);
        label72->setObjectName(QString::fromUtf8("label72"));
        label72->setGeometry(QRect(330, 310, 16, 16));
        label72->setFont(font5);
        label41 = new QLabel(centralWidget);
        label41->setObjectName(QString::fromUtf8("label41"));
        label41->setGeometry(QRect(300, 220, 16, 16));
        label41->setFont(font5);
        label57 = new QLabel(centralWidget);
        label57->setObjectName(QString::fromUtf8("label57"));
        label57->setGeometry(QRect(480, 250, 16, 16));
        label57->setFont(font5);
        label86 = new QLabel(centralWidget);
        label86->setObjectName(QString::fromUtf8("label86"));
        label86->setGeometry(QRect(450, 340, 16, 16));
        label86->setFont(font5);
        label70 = new QLabel(centralWidget);
        label70->setObjectName(QString::fromUtf8("label70"));
        label70->setGeometry(QRect(270, 310, 16, 16));
        label70->setFont(font5);
        label58 = new QLabel(centralWidget);
        label58->setObjectName(QString::fromUtf8("label58"));
        label58->setGeometry(QRect(510, 250, 16, 16));
        label58->setFont(font5);
        label87 = new QLabel(centralWidget);
        label87->setObjectName(QString::fromUtf8("label87"));
        label87->setGeometry(QRect(480, 340, 16, 16));
        label87->setFont(font5);
        label71 = new QLabel(centralWidget);
        label71->setObjectName(QString::fromUtf8("label71"));
        label71->setGeometry(QRect(300, 310, 16, 16));
        label71->setFont(font5);
        label42 = new QLabel(centralWidget);
        label42->setObjectName(QString::fromUtf8("label42"));
        label42->setGeometry(QRect(330, 220, 16, 16));
        label42->setFont(font5);
        label45 = new QLabel(centralWidget);
        label45->setObjectName(QString::fromUtf8("label45"));
        label45->setGeometry(QRect(420, 220, 16, 16));
        label45->setFont(font5);
        label52 = new QLabel(centralWidget);
        label52->setObjectName(QString::fromUtf8("label52"));
        label52->setGeometry(QRect(330, 250, 16, 16));
        label52->setFont(font5);
        label74 = new QLabel(centralWidget);
        label74->setObjectName(QString::fromUtf8("label74"));
        label74->setGeometry(QRect(390, 310, 16, 16));
        label74->setFont(font5);
        label81 = new QLabel(centralWidget);
        label81->setObjectName(QString::fromUtf8("label81"));
        label81->setGeometry(QRect(300, 340, 16, 16));
        label81->setFont(font5);
        label50 = new QLabel(centralWidget);
        label50->setObjectName(QString::fromUtf8("label50"));
        label50->setGeometry(QRect(270, 250, 16, 16));
        label50->setFont(font5);
        label82 = new QLabel(centralWidget);
        label82->setObjectName(QString::fromUtf8("label82"));
        label82->setGeometry(QRect(330, 340, 16, 16));
        label82->setFont(font5);
        label43 = new QLabel(centralWidget);
        label43->setObjectName(QString::fromUtf8("label43"));
        label43->setGeometry(QRect(360, 220, 16, 16));
        label43->setFont(font5);
        label75 = new QLabel(centralWidget);
        label75->setObjectName(QString::fromUtf8("label75"));
        label75->setGeometry(QRect(420, 310, 16, 16));
        label75->setFont(font5);
        label51 = new QLabel(centralWidget);
        label51->setObjectName(QString::fromUtf8("label51"));
        label51->setGeometry(QRect(300, 250, 16, 16));
        label51->setFont(font5);
        label44 = new QLabel(centralWidget);
        label44->setObjectName(QString::fromUtf8("label44"));
        label44->setGeometry(QRect(390, 220, 16, 16));
        label44->setFont(font5);
        label80 = new QLabel(centralWidget);
        label80->setObjectName(QString::fromUtf8("label80"));
        label80->setGeometry(QRect(270, 340, 16, 16));
        label80->setFont(font5);
        label73 = new QLabel(centralWidget);
        label73->setObjectName(QString::fromUtf8("label73"));
        label73->setGeometry(QRect(360, 310, 16, 16));
        label73->setFont(font5);
        easyButton = new QRadioButton(centralWidget);
        easyButton->setObjectName(QString::fromUtf8("easyButton"));
        easyButton->setGeometry(QRect(60, 190, 61, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Times New Roman"));
        font6.setPointSize(15);
        easyButton->setFont(font6);
        easyButton->setChecked(true);
        hardButton = new QRadioButton(centralWidget);
        hardButton->setObjectName(QString::fromUtf8("hardButton"));
        hardButton->setGeometry(QRect(130, 190, 71, 20));
        hardButton->setFont(font6);
        sudokuUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sudokuUI);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 595, 22));
        sudokuUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sudokuUI);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sudokuUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sudokuUI);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        sudokuUI->setStatusBar(statusBar);

        retranslateUi(sudokuUI);

        generateNew->setDefault(false);


        QMetaObject::connectSlotsByName(sudokuUI);
    } // setupUi

    void retranslateUi(QMainWindow *sudokuUI)
    {
        sudokuUI->setWindowTitle(QApplication::translate("sudokuUI", "sudokuUI", nullptr));
        generateNew->setText(QApplication::translate("sudokuUI", "Generate New", nullptr));
        startSolving->setText(QApplication::translate("sudokuUI", "Start Solving", nullptr));
        label->setText(QApplication::translate("sudokuUI", "Sudoku Puzzle", nullptr));
        groupBox->setTitle(QApplication::translate("sudokuUI", "Backtracking", nullptr));
        label_2->setText(QApplication::translate("sudokuUI", "Time Used:", nullptr));
        label_btTime->setText(QString());
        label_4->setText(QApplication::translate("sudokuUI", "ms", nullptr));
        label_5->setText(QApplication::translate("sudokuUI", "Memory Used:", nullptr));
        label_btMem->setText(QString());
        label_7->setText(QApplication::translate("sudokuUI", "MB", nullptr));
        groupBox_2->setTitle(QApplication::translate("sudokuUI", "Stochastic", nullptr));
        label_8->setText(QApplication::translate("sudokuUI", "Time Used:", nullptr));
        label_sT->setText(QString());
        label_10->setText(QApplication::translate("sudokuUI", "ms", nullptr));
        label_11->setText(QApplication::translate("sudokuUI", "Memory Used:", nullptr));
        label_sM->setText(QString());
        label_13->setText(QApplication::translate("sudokuUI", "MB", nullptr));
        label00->setText(QString());
        label01->setText(QString());
        label02->setText(QString());
        label03->setText(QString());
        label04->setText(QString());
        label05->setText(QString());
        label06->setText(QString());
        label07->setText(QString());
        label08->setText(QString());
        label15->setText(QString());
        label22->setText(QString());
        label14->setText(QString());
        label21->setText(QString());
        label13->setText(QString());
        label20->setText(QString());
        label12->setText(QString());
        label25->setText(QString());
        label24->setText(QString());
        label23->setText(QString());
        label28->setText(QString());
        label27->setText(QString());
        label11->setText(QString());
        label26->setText(QString());
        label10->setText(QString());
        label18->setText(QString());
        label17->setText(QString());
        label16->setText(QString());
        label30->setText(QString());
        label31->setText(QString());
        label32->setText(QString());
        label35->setText(QString());
        label33->setText(QString());
        label34->setText(QString());
        label38->setText(QString());
        label36->setText(QString());
        label37->setText(QString());
        label55->setText(QString());
        label48->setText(QString());
        label54->setText(QString());
        label47->setText(QString());
        label53->setText(QString());
        label46->setText(QString());
        label62->setText(QString());
        label60->setText(QString());
        label61->setText(QString());
        label65->setText(QString());
        label63->setText(QString());
        label64->setText(QString());
        label67->setText(QString());
        label66->setText(QString());
        label68->setText(QString());
        label84->setText(QString());
        label77->setText(QString());
        label85->setText(QString());
        label78->setText(QString());
        label83->setText(QString());
        label76->setText(QString());
        label40->setText(QString());
        label56->setText(QString());
        label88->setText(QString());
        label72->setText(QString());
        label41->setText(QString());
        label57->setText(QString());
        label86->setText(QString());
        label70->setText(QString());
        label58->setText(QString());
        label87->setText(QString());
        label71->setText(QString());
        label42->setText(QString());
        label45->setText(QString());
        label52->setText(QString());
        label74->setText(QString());
        label81->setText(QString());
        label50->setText(QString());
        label82->setText(QString());
        label43->setText(QString());
        label75->setText(QString());
        label51->setText(QString());
        label44->setText(QString());
        label80->setText(QString());
        label73->setText(QString());
        easyButton->setText(QApplication::translate("sudokuUI", "Easy", nullptr));
        hardButton->setText(QApplication::translate("sudokuUI", "Hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sudokuUI: public Ui_sudokuUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKUUI_H
