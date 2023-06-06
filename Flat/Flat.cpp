#include <iostream>
#include "Flats.h"

using namespace std;
int main()
{
    Flats fl1(65, 100000);
    Flats fl2(32, 45000);
    Flats fl3(1,1);
    fl3 = fl1;
    cout << (fl1 == fl3) << endl;
    cout << (fl1 > fl2);
}
