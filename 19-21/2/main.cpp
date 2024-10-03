#include <iostream>
using namespace std;
int main() {
    int ivertinimas = 2;

    if(ivertinimas==10) {
        cout<< "Puiku" << endl;
    }
    else if(ivertinimas == 9 || ivertinimas == 8) {
        cout<< "Labai gerai" << endl;
    }
    else if(ivertinimas == 7) {
        cout<< "Gerai" << endl;
    }
    else if(ivertinimas == 6 || ivertinimas == 5) {
        cout<< "Patenkinamai" << endl;
    }
    else if(ivertinimas <=4) {
        cout<< "Egzaminas neislaikytas" << endl;
    }
    return 0;
}
