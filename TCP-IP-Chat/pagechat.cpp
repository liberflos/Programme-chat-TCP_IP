#include "pagechat.h"
#include "ui_pagechat.h"

PageChat::PageChat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageChat)
{
    ui->setupUi(this);
}

PageChat::~PageChat()
{
    delete ui;
}
