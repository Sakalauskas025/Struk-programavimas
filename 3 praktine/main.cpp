#include <iostream>
#include <fstream>
using namespace std;
const char ABECELE[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
int main() {
    char tekstas[50];
    char rezultatas[50];
    char uzsifruotasTekstas[50];
    char desifruotasTekstas[50];
    int poslinkis, tekstoIlgis, rezultatoIndeksas, k = 0, l = 0;
    int uzsifruotoTekstoIlgis;
int pasirinkimas =0;
    while(pasirinkimas != 3) {
        cout<<"Pasirinkite norima operacija: "<<endl;
        cout<<"1. Uzsifruoti teksta."<<endl;
        cout<<"2. Disifruoti teksta."<<endl;
        cout<<"3. Baigti programa."<<endl;
        cout<<"Pasirinkite norima operacija: "<<endl;
        cin>>pasirinkimas;
    }
    switch (pasirinkimas) {
        case 1:
            cout<<"Iveskite zodi: "<<endl;
        cin>>tekstas;
        cout<<"Iveskite norima paslinki(1-26): "<<endl;
        cin>>poslinkis;
        for(int i = 0; i < tekstoIlgis; i++) {
            for(int j=0; j < sizeof(ABECELE); j++) {
                if(toupper(tekstas[i]) == ABECELE[j]) {
                    rezultatoIndeksas = (j + poslinkis) % sizeof(ABECELE);
                    rezultatas[k] = ABECELE[rezultatoIndeksas];
                    k++;
                }
            }
        }



    }
    return 0;
}