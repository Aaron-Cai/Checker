#ifndef CHECKER_H
#define CHECKER_H

#include <QPainter>
#include <QMouseEvent>
#include <QWidget>

void iniGame()
{
}

void judge()
{
}
void Draw(QPaintDevice *device)
{
    QPainter painter(device);
    painter.setBrush(Qt::yellow);
    painter.drawRect(100,100,100,100);
    painter.setBrush(Qt::red);
    painter.drawEllipse(100,100,100,100);
}

void GameLogic(QMouseEvent *ev, QWidget *window)
{
}

#endif // CHECKER_H

