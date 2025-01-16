#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int skaicius, skaicius2;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        skaicius = rand() % 50; // [0 - 50)
        skaicius2 = rand() % 3 +2; // [2 - 5)
        cout << skaicius <<" " <<skaicius2 << endl;
    }
    return 0;
}
