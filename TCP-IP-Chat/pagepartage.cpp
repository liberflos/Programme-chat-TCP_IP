#include "pagepartage.h"
#include "ui_pagepartage.h"

PagePartage::PagePartage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PagePartage)
{
    ui->setupUi(this);
}

PagePartage::~PagePartage()
{
    delete ui;
}
