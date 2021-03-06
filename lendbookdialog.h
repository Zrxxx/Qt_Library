﻿#ifndef LENDBOOKDIALOG_H
#define LENDBOOKDIALOG_H

#include <QDialog>

namespace Ui {
  class LendBookDialog;
}

class LendBookDialog : public QDialog
{
  Q_OBJECT

public:
  explicit LendBookDialog(QWidget *parent = 0);
  ~LendBookDialog();

  void accept();

signals:
  void lendBook(const QString readerCode,const QString bookCode);

private:
  Ui::LendBookDialog *ui;
};

#endif // LENDBOOKDIALOG_H
