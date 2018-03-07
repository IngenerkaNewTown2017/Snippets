#include <cmath> // важно!

//Координаты неподвижного конца отрезка, длина линии, угол поворота
void draw_line(int x, int y, int length, double angle)
{
    txLine(x, y, x + length * cos(angle), y + length * sin(angle));
}

double angle = 0;
for (int ugol = 0; ugol < 360; ugol++)
{
    txClear();
    //Из градусов в радианы
    angle = M_PI / 180 * ugol;

    draw_line(100, 200, 100, angle);
    txSleep(10);
}
