// Где-то в коде:
// void draw_car(int x, int y){ ... }
// void draw_man(int x, int y){ ... }

int car_x_coord = 100; // Координаты машины
int man_x_coord = 500; // Координаты человека

const int car_speed = 5; // Скорость в единицах в секунду
const int man_speed = 1;
const int car_y_coord = 50;
const int car_y_coord = 50;

while (car_x_coord < man_x_coord) { // Пока машина не доехала до челоека
    txClear(); // Чистим перед отрисовкой нового кадра

    car_x_coord += car_speed; // Машина едет со скоростью 1 пиксель в 2 милисекунды
    man_x_coord += man_speed; // Человек бежит со скоростью 1 пиксель в 10 милисекунд

    draw_car(car_x_coord, car_y_coord); // Рисуем машину
    draw_man(man_x_coord, man_y_coord); // Риусем человека

    txSleep(10); // Задержка на десять милисекунд
}
