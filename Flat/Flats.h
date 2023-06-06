#pragma once
class Flats
{
private:
	int area;
	int price;
public:
	Flats(int area, int price);

	bool operator==(const Flats& fl);
	bool operator>(const Flats& fl);
	Flats& operator=(const Flats& fl);
};
