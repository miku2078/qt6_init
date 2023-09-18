#include "include/mainwindow.h"
#include "../ui/ui_mainwindow.h"
#include <qmainwindow.h>

MainWindow::MainWindow(QMainWindow *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  show();
}

MainWindow::~MainWindow() {
  delete ui;
}