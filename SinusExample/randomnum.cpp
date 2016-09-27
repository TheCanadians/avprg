#include <math.h>
#include "randomnum.h"

const float pi = 3.1415926f;

randomNum::randomNum()
: num(0)
{}

randomNum::~randomNum(void)
{
}

float randomNum::getValue(){
    float value = sin(2 * pi * num / 100);
    num = qrand()% 100;
    return value;
}

