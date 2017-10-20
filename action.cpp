int car_x_coord = 100;
int man_x_coord = 500;

while (car_x_coord < man_x_coord)
{
  txClear();
  
  car_x_coord = car_x_coord + 5;
  man_x_coord = man_x_coord + 1;
  
  draw_car(car_x_coord);
  draw_man(man_x_coord);  
  
  txSleep(10);
}
