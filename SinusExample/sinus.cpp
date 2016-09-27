#include <math.h>
#include "sinus.h"

const float pi = 3.1415926f;

Sinus::Sinus()
: index(0)
{}

Sinus::~Sinus(void)
{
}
void Sinus::calculateSinus(){
    float value = sin(2 * pi * index / 100);
    getValue();
}

float Sinus::getValue(){
    index++;
    return value;
}
