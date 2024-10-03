#include <iostream>
using namespace std;
int main()

{
    int ivertinimas;
    cout << "Jei gavote 10 spauskite 1 \n" << endl;
    cout << "Jei gavote 9 arba 8 spauskite 2 \n"<< endl;
    cout << "Jei gavote 7 spauskite 3 \n" << endl;
    cout << "Jei gavote 6 arba 5 spauskite 4 \n" << endl;
    cout << "Jei gavote 4 ir maziau spauskite 5 \n" << endl;
    cin >> ivertinimas;
    switch (ivertinimas)
        {
        case 1: cout << "Puiku" << endl; break;
        case 2: cout << "Labai gerai" << endl; break;
        case 3: cout << "Gerai" << endl; break;
        case 4: cout << "Petenkinamai" << endl; break;
        default: cout << "Egzaminas neislaikytas" << endl; break;
    }
    return 0;
}
