#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ecs.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->EmergencyHelpButton, &QPushButton::released, this, &MainWindow::press);
    connect(ui->EmergencyFireButton, &QPushButton::released, this, &MainWindow::press);
    connect(ui->EmergencyOverloadButton, &QPushButton::released, this, &MainWindow::press);
    connect(ui->EmergencyPowerOutageButton, &QPushButton::released, this, &MainWindow::press);
    connect(ui->EmergencydoorBlockButton, &QPushButton::released, this, &MainWindow::press);
//    connect(ui->SettingsElevatorComboBox, &QPushButton::released, this, &MainWindow::press);
//    connect(ui->SettingsFloorsComboBox, &QPushButton::released, this, &MainWindow::press);
    connect(ui->SettingsStartSimulationButton, &QPushButton::released, this, &MainWindow::runSimulation);
//    connect(ui->floorPanelComboBox, &QPushButton::released, this, &MainWindow::press);
//    connect(ui->floorPanelDestFloorComboBox, &QPushButton::released, this, &MainWindow::press);
    connect(ui->floorPanelButton, &QPushButton::released, this, &MainWindow::floorPanelPress);

    this->ecs = ECS();
    if(ecs.strategy=="default") presss();

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
    QString log = currentFloor + "is added to floor requests";
    qInfo(log.toLocal8Bit().data());

}

void MainWindow::runSimulation() {

    ui->floorPanelComboBox->addItem("1");
    ui->floorPanelComboBox->addItem("2");
    ui->floorPanelComboBox->addItem("3");
    ui->floorPanelComboBox->addItem("4");
    ui->floorPanelComboBox->addItem("5");
    ui->floorPanelDestFloorComboBox->addItem("1");
    ui->floorPanelDestFloorComboBox->addItem("2");
    ui->floorPanelDestFloorComboBox->addItem("3");
    ui->floorPanelDestFloorComboBox->addItem("4");
    ui->floorPanelDestFloorComboBox->addItem("5");

    qInfo("testing");

}
