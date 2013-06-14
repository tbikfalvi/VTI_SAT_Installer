//============================================================================================================
//
//  VTI SAT Installer application
//
//  File            : mainwindow.cpp
//  File version    : 1.0
//
//============================================================================================================

#include <QDir>
#include <QFileDialog>
#include <QMessageBox>

//============================================================================================================

#include "mainwindow.h"
#include "ui_mainwindow.h"

//============================================================================================================

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_qsDirRelease = QDir::currentPath();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Exit_application_triggered()
{
    close();
}

void MainWindow::on_action_Preferences_triggered()
{
}

void MainWindow::on_action_Install_Folder_triggered()
{
    QString qsDirectory = QFileDialog::getExistingDirectory(this, tr("Select the desired directory"), m_qsDirRelease );

    if (!qsDirectory.isEmpty())
    {
        m_qsDirRelease = qsDirectory;
}

void MainWindow::on_action_Install_triggered()
{
}
