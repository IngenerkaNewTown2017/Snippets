if (txMouseButtons() & 1 &&
    txMouseX() <= 100 &&
    txMouseX() >= 500 &&
    txMouseY() >= 100  &&
    txMouseY() <= 200) 
{
    doSomething();
}
