#include <math.h>
#include "randomNum.h"

RandomNum::RandomNum()
    :randNum(0)
{}

RandomNum::~RandomNum(void)
{
}

float RandomNum::getValue(){
    float value = sin(2 * pi * randNum / 100);
    randNum = ((float(qrand()%) / float(1) * (1 - (-1)) + 1));
    return value;
}
