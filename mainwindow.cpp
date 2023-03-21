#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ecs.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->EmergencyHelpButton, &QPushButton::released, this, &MainWindow::helpButtonPress);
    connect(ui->EmergencyFireButton, &QPushButton::released, this, &MainWindow::fireButtonPress);
    connect(ui->EmergencyOverloadButton, &QPushButton::released, this, &MainWindow::overloadButtonPress);
    connect(ui->EmergencyPowerOutageButton, &QPushButton::released, this, &MainWindow::powerOutagePress);
    connect(ui->EmergencydoorBlockButton, &QPushButton::released, this, &MainWindow::doorBlockPress);
    connect(ui->SettingsStartSimulationButton, &QPushButton::released, this, &MainWindow::runSimulation);
    connect(ui->floorPanelButton, &QPushButton::released, this, &MainWindow::floorPanelPress);

    this->panelOfButtons = Button("panel of buttons");
    this->upDownButtons = Button("updown buttons");

}
//i decided to make this randomly trigger because the ECS does not control when people decide to block the door
//but the ECS knows how to detect and react to these events
void MainWindow::doorBlockPress(){
    qInfo("the door block feature is built to randomly trigger throughout the functioning of this app");
}
void MainWindow::overloadButtonPress(){
    qInfo("the overload features is built in to randomly trigger throughout the functioning of this app");
}
void MainWindow::helpButtonPress(){
    this->ecs.helpButtonPress();
}
void MainWindow::powerOutagePress(){
    this->ecs.powerOutagePress();
}
void MainWindow::fireButtonPress(){
    this->ecs.fireButtonPress();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::press()
{
    qInfo("button press");
}

void MainWindow::presss()
{
    qInfo("the ecs is here");
}

void MainWindow::floorPanelPress(){
    QString currentFloor = ui->floorPanelComboBox->currentText();
    QString destFloor = ui->floorPanelDestFloorComboBox->currentText();
    this->ecs.assignRequestToCar(currentFloor,destFloor);
    QString log = destFloor + " is added to floor requests";
    qInfo("%s", log.toLocal8Bit().data());
    string strategy = "one";
    this->ecs.moveCars();
    this->upDownButtons.isLight = true;
    qInfo("the up or down button lit up");
    this->panelOfButtons.isLight = true;
    qInfo("the floor selection buttons lit up");

}

void MainWindow::runSimulation() {
    QString numFloors = "5";
    QString numElevators = "2";
    numElevators = ui->SettingsElevatorComboBox->currentText();
    numFloors = ui->SettingsFloorsComboBox->currentText();
    this->ecs = ECS(numElevators.toInt());

    for(int i=1; i<numFloors.toInt()+1;i++){
        ui->floorPanelComboBox->addItem(QString::number(i));
        ui->floorPanelDestFloorComboBox->addItem(QString::number(i));
    }

    qInfo("added floors to the simulator");

}
