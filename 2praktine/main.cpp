#include <iostream>
using namespace std;
bool isBalse(char raide) {
    char balses[6] = {'a','e','i', 'y', 'o', 'u',};
    char a;
    cin>>a;
    raide = tolower(raide);
    for (int i = 0; i < 6; i++) {
        if ( a == balses[i] ) {
            return true;
        }
    }

    return false;
}
int rastiDidziausiaDalikli(int skaicius1, int skaicius2) {
    while (skaicius2 != 0) {
        int temp = skaicius2;
        skaicius2 = skaicius1 % skaicius2;
        skaicius2 = temp;{
            return skaicius1;
        }
        int main(); {


        }
    }
}

