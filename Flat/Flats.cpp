#include "Flats.h"

Flats::Flats(int area, int price)
{
    if (area < 0)
        this->area = 0;
    else
        this->area = area;

    if (price < 0)
        this->price = 0;
    else
        this->price = price;
}

bool Flats::operator==(const Flats& fl)
{
    return this->area == fl.area;
}

bool Flats::operator>(const Flats& fl)
{
    return this->price > fl.price;
}

Flats& Flats::operator=(const Flats& fl)
{
    this->area = fl.area;
    this->price = fl.price;
    return *this;
}