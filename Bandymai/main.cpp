#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
struct komanda {
    string pavadinimas;
    string miestas;
    bool zaidziaEurolygoj;
};
struct playerType{
    string firstname;
    string lastname;
    string position;
    double height;
    int gamesPlayed;
    int pointsScored;
    double avgPointsPerGame;
};

int main() {
    komanda komandos[18];
    komanda temp;
    int kiekis;
    string ieskomakomanda;

    cout<<"Kiek komandu norite ivesti, nedaugiau, kaip 10."<<endl;
    cin>>kiekis;

    for(int i=0; i<kiekis, i++;) {
        cout<<"Iveskite komanda:"<<endl;
        cin>>komandos[i].pavadinimas;
        cout<<endl;
        cout<<"Iveskite kokiame mieste isikurusi komanda:"<<endl;
        cin>>komandos[i].miestas;
        cout<<endl;
        cout<<"Ar zaidzia Eurolygoj? Jei taip spauskite 1, o jei ne -0."<<endl;
        cin>>komandos[i].zaidziaEurolygoj;
        cout<<"__________________________________"<<endl;
    }
    for(int i=0; i<kiekis, i++;) {
    }
    for(int i=0; i<kiekis, i++;)
        for(int j=1; j<i+1; j < kiekis, j++) {
            if (komandos[i].miestas > komandos[j].miestas) {
                temp = komandos[i];
                komandos[i] = komandos[j];
                komandos[j]= temp;
            }
            cout<<"Iveskite komanda:"<<endl;
            cin>>komandos[kiekis].pavadinimas;
            cout<<endl;
            cout<<"Kokiame mieste isikurus"<<endl;
            cin>>komandos[kiekis].miestas;
            cout<<endl;
            cout<<"Ar zaidzia Eurolygoje? Jei taip spauskite 1, jei ne - 0"<<endl;
            cin>>komandos[kiekis].zaidziaEurolygoj;
            kiekis++;
            for(int i=0; i<kiekis, i++;) {
                cout<<"komanda "<<komandos[i].pavadinimas<<" "<<komandos[i].miestas<<endl;

                cout<<"Iveskite ieskomos komandos pavadinima "<<endl;
                cin>>ieskomakomanda;
                for (int i = 1; i < kiekis; i++){
                    if (komandos[i].pavadinimas == ieskomakomanda){
                        string rez = komandos[i].zaidziaEurolygoj == 1 ? "zaidzia Eurolygoje" : "nezaidzia Eurolygoje";
                        cout<<"Informacija apie komanda "<<komandos[i].pavadinimas<<" "<<komandos[i].miestas<<" "<<rez<<endl;
                    }
                    playerType players[10];
                    ifstream  infile;
                    int counter;

                    infile.open("players_data.txt");
                    if(!infile){
                        cout<<"Cannot open the input file";
                        return 1;
                    }

                    for(counter = 0; counter < 4; counter++){
                        infile  >> players[counter].firstname
                                >> players[counter].lastname
                                >> players[counter].position
                                >> players[counter].height
                                >> players[counter].gamesPlayed
                                >> players[counter].pointsScored;
                        players[counter].avgPointsPerGame = (double)players[counter].pointsScored/players[counter].gamesPlayed;
                    }

                    infile.close();

                    for(counter = 0; counter < 4; counter++){
                        cout<<players[counter].lastname<<" "<<fixed<<setprecision(1)<<players[counter].avgPointsPerGame<<endl;
                    }
                    return 0;
                }
            }
        }
}
