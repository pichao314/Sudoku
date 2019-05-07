#ifndef SUDOKUUI_H
#define SUDOKUUI_H

#include <QMainWindow>
#include <stdlib.h>
#include <stdio.h>
#include <string>

namespace Ui {
class sudokuUI;
}

class sudokuUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit sudokuUI(QWidget *parent = nullptr);
    ~sudokuUI();

private slots:
    void on_easyButton_clicked();

    void on_hardButton_clicked();

    void on_generateNew_clicked();

    void on_startSolving_clicked();

private:
    Ui::sudokuUI *ui;
    bool isGenerate;
    bool isEasy;
    char** puzzleMatrix;
    char** originMatrix;
};

#endif // SUDOKUUI_H
