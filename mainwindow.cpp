#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    connect(ui->floorPanelDownButton, &QPushButton::released, this, &MainWindow::press);
    connect(ui->floorPanelUpButton, &QPushButton::released, this, &MainWindow::press);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::press()
{
    ui->SystemLogListWidget->addItem("aple");
}
