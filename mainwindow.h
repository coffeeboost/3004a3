#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ecs.h>
#include <button.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void press();
    void presss();
    void floorPanelPress();
    void runSimulation();
    void fireButtonPress();
    void powerOutagePress();
    void helpButtonPress();
    void overloadButtonPress();
    void doorBlockPress();
    ECS ecs;
    Button panelOfButtons;
    Button upDownButtons;
};
#endif // MAINWINDOW_H
