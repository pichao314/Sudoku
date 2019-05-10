#include "sudokuui.h"
#include "ui_sudokuui.h"
#include "generator.h"
#include "backtracking.h"
#include "dfs.h"

#include <iostream>
#include <stdio.h>

using namespace std;

sudokuUI::sudokuUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sudokuUI)
{
    ui->setupUi(this);
    isGenerate = false;
    isEasy = true;
}

sudokuUI::~sudokuUI()
{
    delete ui;
}

void sudokuUI::on_easyButton_clicked()
{
    isEasy = true;
}

void sudokuUI::on_hardButton_clicked()
{
    isEasy = false;
}

void sudokuUI::on_generateNew_clicked()
{
    generator gen;
    originMatrix = gen.getOriginMatrix();

    if (isEasy) {
        puzzleMatrix = gen.getEasyModeMatrix();
    } else {
        puzzleMatrix = gen.getHardModeMatrix();
    }

    ui->label00->setText(QString(puzzleMatrix[0][0]));
    ui->label01->setText(QString(puzzleMatrix[0][1]));
    ui->label02->setText(QString(puzzleMatrix[0][2]));
    ui->label03->setText(QString(puzzleMatrix[0][3]));
    ui->label04->setText(QString(puzzleMatrix[0][4]));
    ui->label05->setText(QString(puzzleMatrix[0][5]));
    ui->label06->setText(QString(puzzleMatrix[0][6]));
    ui->label07->setText(QString(puzzleMatrix[0][7]));
    ui->label08->setText(QString(puzzleMatrix[0][8]));
    ui->label10->setText(QString(puzzleMatrix[1][0]));
    ui->label11->setText(QString(puzzleMatrix[1][1]));
    ui->label12->setText(QString(puzzleMatrix[1][2]));
    ui->label13->setText(QString(puzzleMatrix[1][3]));
    ui->label14->setText(QString(puzzleMatrix[1][4]));
    ui->label15->setText(QString(puzzleMatrix[1][5]));
    ui->label16->setText(QString(puzzleMatrix[1][6]));
    ui->label17->setText(QString(puzzleMatrix[1][7]));
    ui->label18->setText(QString(puzzleMatrix[1][8]));
    ui->label20->setText(QString(puzzleMatrix[2][0]));
    ui->label21->setText(QString(puzzleMatrix[2][1]));
    ui->label22->setText(QString(puzzleMatrix[2][2]));
    ui->label23->setText(QString(puzzleMatrix[2][3]));
    ui->label24->setText(QString(puzzleMatrix[2][4]));
    ui->label25->setText(QString(puzzleMatrix[2][5]));
    ui->label26->setText(QString(puzzleMatrix[2][6]));
    ui->label27->setText(QString(puzzleMatrix[2][7]));
    ui->label28->setText(QString(puzzleMatrix[2][8]));
    ui->label30->setText(QString(puzzleMatrix[3][0]));
    ui->label31->setText(QString(puzzleMatrix[3][1]));
    ui->label32->setText(QString(puzzleMatrix[3][2]));
    ui->label33->setText(QString(puzzleMatrix[3][3]));
    ui->label34->setText(QString(puzzleMatrix[3][4]));
    ui->label35->setText(QString(puzzleMatrix[3][5]));
    ui->label36->setText(QString(puzzleMatrix[3][6]));
    ui->label37->setText(QString(puzzleMatrix[3][7]));
    ui->label38->setText(QString(puzzleMatrix[3][8]));
    ui->label40->setText(QString(puzzleMatrix[4][0]));
    ui->label41->setText(QString(puzzleMatrix[4][1]));
    ui->label42->setText(QString(puzzleMatrix[4][2]));
    ui->label43->setText(QString(puzzleMatrix[4][3]));
    ui->label44->setText(QString(puzzleMatrix[4][4]));
    ui->label45->setText(QString(puzzleMatrix[4][5]));
    ui->label46->setText(QString(puzzleMatrix[4][6]));
    ui->label47->setText(QString(puzzleMatrix[4][7]));
    ui->label48->setText(QString(puzzleMatrix[4][8]));
    ui->label50->setText(QString(puzzleMatrix[5][0]));
    ui->label51->setText(QString(puzzleMatrix[5][1]));
    ui->label52->setText(QString(puzzleMatrix[5][2]));
    ui->label53->setText(QString(puzzleMatrix[5][3]));
    ui->label54->setText(QString(puzzleMatrix[5][4]));
    ui->label55->setText(QString(puzzleMatrix[5][5]));
    ui->label56->setText(QString(puzzleMatrix[5][6]));
    ui->label57->setText(QString(puzzleMatrix[5][7]));
    ui->label58->setText(QString(puzzleMatrix[5][8]));
    ui->label60->setText(QString(puzzleMatrix[6][0]));
    ui->label61->setText(QString(puzzleMatrix[6][1]));
    ui->label62->setText(QString(puzzleMatrix[6][2]));
    ui->label63->setText(QString(puzzleMatrix[6][3]));
    ui->label64->setText(QString(puzzleMatrix[6][4]));
    ui->label65->setText(QString(puzzleMatrix[6][5]));
    ui->label66->setText(QString(puzzleMatrix[6][6]));
    ui->label67->setText(QString(puzzleMatrix[6][7]));
    ui->label68->setText(QString(puzzleMatrix[6][8]));
    ui->label70->setText(QString(puzzleMatrix[7][0]));
    ui->label71->setText(QString(puzzleMatrix[7][1]));
    ui->label72->setText(QString(puzzleMatrix[7][2]));
    ui->label73->setText(QString(puzzleMatrix[7][3]));
    ui->label74->setText(QString(puzzleMatrix[7][4]));
    ui->label75->setText(QString(puzzleMatrix[7][5]));
    ui->label76->setText(QString(puzzleMatrix[7][6]));
    ui->label77->setText(QString(puzzleMatrix[7][7]));
    ui->label78->setText(QString(puzzleMatrix[7][8]));
    ui->label80->setText(QString(puzzleMatrix[8][0]));
    ui->label81->setText(QString(puzzleMatrix[8][1]));
    ui->label82->setText(QString(puzzleMatrix[8][2]));
    ui->label83->setText(QString(puzzleMatrix[8][3]));
    ui->label84->setText(QString(puzzleMatrix[8][4]));
    ui->label85->setText(QString(puzzleMatrix[8][5]));
    ui->label86->setText(QString(puzzleMatrix[8][6]));
    ui->label87->setText(QString(puzzleMatrix[8][7]));
    ui->label88->setText(QString(puzzleMatrix[8][8]));

    isGenerate = true;
}

void sudokuUI::on_startSolving_clicked()
{
    if(isGenerate) {

        int tempMatrix[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (puzzleMatrix[i][j] == ' ') tempMatrix[i][j] = 0;
                else tempMatrix[i][j] = puzzleMatrix[i][j] - '0';
            }
        }

        Backtracking btAlg(tempMatrix);
        btAlg.solve();

        int time1 = btAlg.getUsedTime();
        int mem1 = btAlg.getUsedMemory();

        ui->label_btTime->setNum(time1);
        ui->label_btMem->setNum(mem1);

        dfs stochasticAlg;
        stochasticAlg.solve(puzzleMatrix);

        int time2 = (int)stochasticAlg.getUsedTime();
        int mem2 = (int)stochasticAlg.getUsedMemory();

        ui->label_sT->setNum(time2);
        ui->label_sM->setNum(mem2);

        ui->label00->setText(QString(originMatrix[0][0]));
        ui->label01->setText(QString(originMatrix[0][1]));
        ui->label02->setText(QString(originMatrix[0][2]));
        ui->label03->setText(QString(originMatrix[0][3]));
        ui->label04->setText(QString(originMatrix[0][4]));
        ui->label05->setText(QString(originMatrix[0][5]));
        ui->label06->setText(QString(originMatrix[0][6]));
        ui->label07->setText(QString(originMatrix[0][7]));
        ui->label08->setText(QString(originMatrix[0][8]));
        ui->label10->setText(QString(originMatrix[1][0]));
        ui->label11->setText(QString(originMatrix[1][1]));
        ui->label12->setText(QString(originMatrix[1][2]));
        ui->label13->setText(QString(originMatrix[1][3]));
        ui->label14->setText(QString(originMatrix[1][4]));
        ui->label15->setText(QString(originMatrix[1][5]));
        ui->label16->setText(QString(originMatrix[1][6]));
        ui->label17->setText(QString(originMatrix[1][7]));
        ui->label18->setText(QString(originMatrix[1][8]));
        ui->label20->setText(QString(originMatrix[2][0]));
        ui->label21->setText(QString(originMatrix[2][1]));
        ui->label22->setText(QString(originMatrix[2][2]));
        ui->label23->setText(QString(originMatrix[2][3]));
        ui->label24->setText(QString(originMatrix[2][4]));
        ui->label25->setText(QString(originMatrix[2][5]));
        ui->label26->setText(QString(originMatrix[2][6]));
        ui->label27->setText(QString(originMatrix[2][7]));
        ui->label28->setText(QString(originMatrix[2][8]));
        ui->label30->setText(QString(originMatrix[3][0]));
        ui->label31->setText(QString(originMatrix[3][1]));
        ui->label32->setText(QString(originMatrix[3][2]));
        ui->label33->setText(QString(originMatrix[3][3]));
        ui->label34->setText(QString(originMatrix[3][4]));
        ui->label35->setText(QString(originMatrix[3][5]));
        ui->label36->setText(QString(originMatrix[3][6]));
        ui->label37->setText(QString(originMatrix[3][7]));
        ui->label38->setText(QString(originMatrix[3][8]));
        ui->label40->setText(QString(originMatrix[4][0]));
        ui->label41->setText(QString(originMatrix[4][1]));
        ui->label42->setText(QString(originMatrix[4][2]));
        ui->label43->setText(QString(originMatrix[4][3]));
        ui->label44->setText(QString(originMatrix[4][4]));
        ui->label45->setText(QString(originMatrix[4][5]));
        ui->label46->setText(QString(originMatrix[4][6]));
        ui->label47->setText(QString(originMatrix[4][7]));
        ui->label48->setText(QString(originMatrix[4][8]));
        ui->label50->setText(QString(originMatrix[5][0]));
        ui->label51->setText(QString(originMatrix[5][1]));
        ui->label52->setText(QString(originMatrix[5][2]));
        ui->label53->setText(QString(originMatrix[5][3]));
        ui->label54->setText(QString(originMatrix[5][4]));
        ui->label55->setText(QString(originMatrix[5][5]));
        ui->label56->setText(QString(originMatrix[5][6]));
        ui->label57->setText(QString(originMatrix[5][7]));
        ui->label58->setText(QString(originMatrix[5][8]));
        ui->label60->setText(QString(originMatrix[6][0]));
        ui->label61->setText(QString(originMatrix[6][1]));
        ui->label62->setText(QString(originMatrix[6][2]));
        ui->label63->setText(QString(originMatrix[6][3]));
        ui->label64->setText(QString(originMatrix[6][4]));
        ui->label65->setText(QString(originMatrix[6][5]));
        ui->label66->setText(QString(originMatrix[6][6]));
        ui->label67->setText(QString(originMatrix[6][7]));
        ui->label68->setText(QString(originMatrix[6][8]));
        ui->label70->setText(QString(originMatrix[7][0]));
        ui->label71->setText(QString(originMatrix[7][1]));
        ui->label72->setText(QString(originMatrix[7][2]));
        ui->label73->setText(QString(originMatrix[7][3]));
        ui->label74->setText(QString(originMatrix[7][4]));
        ui->label75->setText(QString(originMatrix[7][5]));
        ui->label76->setText(QString(originMatrix[7][6]));
        ui->label77->setText(QString(originMatrix[7][7]));
        ui->label78->setText(QString(originMatrix[7][8]));
        ui->label80->setText(QString(originMatrix[8][0]));
        ui->label81->setText(QString(originMatrix[8][1]));
        ui->label82->setText(QString(originMatrix[8][2]));
        ui->label83->setText(QString(originMatrix[8][3]));
        ui->label84->setText(QString(originMatrix[8][4]));
        ui->label85->setText(QString(originMatrix[8][5]));
        ui->label86->setText(QString(originMatrix[8][6]));
        ui->label87->setText(QString(originMatrix[8][7]));
        ui->label88->setText(QString(originMatrix[8][8]));

    }
    isGenerate = false;
}
