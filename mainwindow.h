#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_Exit_application_triggered();
    void on_action_Preferences_triggered();
    void on_action_Install_Folder_triggered();
    void on_action_Install_triggered();

private:
    Ui::MainWindow *ui;

    QString         m_qsDirRelease;
};

#endif // MAINWINDOW_H
