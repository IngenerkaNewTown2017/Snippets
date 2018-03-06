/* Где-то в коде:
 *  void draw_man(int x, int y)
 */

const int speed = 10; // сокорсть: 1 пиксель в 1 милисекунду
const int y_coord = 50;

for (int x_coord = 100; x_coord <= 500; x_coord += speed)
{
    txClear(); // чистим сцену
    draw_man(x_coord, y_coord); // рисуем человека
    txSleep(10); // задержка в 10 милисекунд
}
