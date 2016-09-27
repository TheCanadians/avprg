#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QAudioInput>
#include <QAudioDecoder>
#include <QAudioFormat>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , audioPlayer(this)

{
    initializeAudio();

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initializeAudio(){
    audioPlayer.setAudioSource(&oscillatorSource);
    audioPlayer.start();
}




void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{

}

void MainWindow::on_amplitude_valueChanged(int value)
{

}
