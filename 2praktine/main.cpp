#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

bool isBalse(char raide) {
    char balses[6] = {'a','e','i', 'y', 'o', 'u'};
    raide = tolower(raide);
    for (int i = 0; i < 6; i++) {
        if (raide == balses[i]) {
            return true;
        }
    }
    return false;
}

int rastiDidziausiaDalikli(int skaicius1, int skaicius2) {
    while (skaicius2 != 0) {
        int temp = skaicius2;
        skaicius2 = skaicius1 % skaicius2;
        skaicius1 = temp;
    }
    return skaicius1;
}


int randomskaiciaussukurimas() {
    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    return randomNumber;
}


int main() {
    int meniu = 0;
    while (meniu != 5) {
        cout << "Pasirinkite norima funkcija:" << endl;
        cout << "1. Bales radimas" << endl;
        cout << "2. Didziausio bendro daliklio radimas" << endl;
        cout << "3. Mini zaidimas" << endl;
        cout << "4. Nuo iki n" << endl;
        cout << "5. Baigti programa" << endl;
        cin >> meniu;

        switch (meniu) {
            case 1: {
                char raide;
                cout << "Iveskite raide: ";
                cin >> raide;
                if (isBalse(raide)) {
                    cout << raide << " yra balse." << endl;
                } else {
                    cout << raide << " nėra balse." << endl;
                }
                break;
            }
            case 2: {
                int skaicius1, skaicius2;
                cout << "Iveskite du skaicius: ";
                cin >> skaicius1 >> skaicius2;
                cout << "Didziausias bendras daliklis: "
                     << rastiDidziausiaDalikli(skaicius1, skaicius2) << endl;
                break;
        }
            case 3:{
                int rndSkaicius = randomskaiciaussukurimas();
                cout << rndSkaicius << endl;
                bool answered = false;
                while (answered == false) {
                    int number;
                    cout<<"Spekite skaiciu: "<<endl;
                    cin>>number;
                    if (number == rndSkaicius) {
                        cout<<"Atspejote skaiciu! Skaicius buvo: "<<rndSkaicius<<endl;
                        answered = true;
                    }
                    else if(number > rndSkaicius) {
                        cout<<"Jusu skaicius didesnis uz random skaiciu"<<endl;
                    }
                    else {
                        cout<<"Jusu skaicius mazesnis uz random skaiciu"<<endl;
                    }
                }
                case 4: {

                }



            }
        }
    }
}
