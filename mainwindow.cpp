#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ecs.h"

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
    connect(ui->SettingsStartSimulationButton, &QPushButton::released, this, &MainWindow::press);
//    connect(ui->floorPanelComboBox, &QPushButton::released, this, &MainWindow::press);
//    connect(ui->floorPanelDestFloorComboBox, &QPushButton::released, this, &MainWindow::press);
    connect(ui->floorPanelButton, &QPushButton::released, this, &MainWindow::floorPanelPress);

    ECS ecs = ECS();
    if(ecs.strategy=="default") presss();

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

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::press()
{
    ui->SystemLogListWidget->addItem("aple");
}

void MainWindow::presss()
{
    ui->SystemLogListWidget->addItem("the ecs is here");
}

void MainWindow::floorPanelPress(){
    QString currentFloor = ui->floorPanelComboBox->currentText();
    QString destFloor = ui->floorPanelDestFloorComboBox->currentText();
    ui->SystemLogListWidget->addItem(currentFloor + "is added to floor requests");
}

void MainWindow::runSimulation() {

}
