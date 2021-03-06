﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "aboutdialog.h"
#include "addbookdialog.h"
#include "addreaderdialog.h"
#include "lendbookdialog.h"
#include "returnbookdialog.h"

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

  bool insertBook(const QString name,QString number);
  bool deleteBook(const QString id);
  bool insertReader(const QString code,const QString name);
  bool backBook(const QString readerCode,const QString bookCode);
  bool lendBook(const QString readerCode,const QString bookCode);

private slots:

  void on_action_triggered();

  void on_action_2_triggered();

  void on_action_5_triggered();

  void on_action_8_triggered();

  void on_action_9_triggered();

  void on_action_3_triggered();

  void on_action_4_triggered();

  void on_action_6_triggered();

  void on_action_7_triggered();

private:
  Ui::MainWindow *ui;
  AboutDialog* dlgAbout;
  AddBookDialog* dlgAddBook;
  AddReaderDialog* dlgAddReader;
  LendBookDialog* dlgLendBook;
  ReturnBookDialog* dlgReturnBook;

  void sumRepertory();
  void sumLend();

  bool connectDatabase();
  void initTableView();
};

#endif // MAINWINDOW_H
