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

int main() {}

