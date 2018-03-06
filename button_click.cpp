if (txMouseButtons() == 1 && // если нажата левая кнопка мыши
    txMouseX() <= 100 && // И мышь находится на кнопке...
    txMouseX() >= 500 &&
    txMouseY() >= 100 &&
    txMouseY() <= 200)
{
    doSomething(); // Делаем что-то
}
