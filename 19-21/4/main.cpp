#include <iostream>
using namespace std;
int main() {
    int skaiciai = 1;
    int suma = 0;
    while (skaiciai <=20) {
        if (skaiciai % 2==1) {
            suma += skaiciai;
        }
        skaiciai = skaiciai + 1;
    }
    cout<<"suma = "<<suma;

    return 0;
}
