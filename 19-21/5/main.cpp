#include <iostream>
using namespace std;
int main()
{
     double pinigai = 1000;
    double palukanos = 0.05;
    for (int i = 0; i < 10; i++) {
        pinigai = pinigai*palukanos+pinigai;

    }
    cout << pinigai << endl;
    return 0;
}
