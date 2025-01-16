#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double skaicius1;
    double skaicius2;
    int pasirinkimas=0 ;
    while (pasirinkimas != 5) {
        cout<<"1.Sudetis."<<endl;
        cout<<"2.Atimtis."<<endl;
        cout<<"3.Daugyba."<<endl;
        cout<<"4.Dalyba."<<endl;
        cout<<"5.Baigti."<<endl;
        cout<<"Pasirinkite veiksma: "<<endl;
        cin>>pasirinkimas;

        if (pasirinkimas == 1) {
            cout<<"Iveskite pirma skaiciu:"<<endl;
            cin>>skaicius1;
            cout<<"Iveskite antra skaiciu:"<<endl;
            cin>>skaicius2;
            cout<<"Rezultatas: "<<skaicius1+skaicius2<<endl;
        }
        else if (pasirinkimas == 2) {
            cout<<"Iveskite pirma skaiciu:"<<endl;
            cin>>skaicius1;
            cout<<"Iveskite antra skaiciu:"<<endl;
            cin>>skaicius2;
            cout<<skaicius1-skaicius2<<endl;
        }
        else if (pasirinkimas == 3) {
            cout<<"Iveskite pirma skaiciu:"<<endl;
            cin>>skaicius1;
            cout<<"Iveskite antra skaiciu:"<<endl;
            cin>>skaicius2;
            cout<<skaicius1*skaicius2<<endl;
        }
        else if (pasirinkimas == 4) {
            cout<<"Iveskite pirma skaiciu:"<<endl;
            cin>>skaicius1;
            cout<<"Iveskite antra skaiciu:"<<endl;
            cin>>skaicius2;
            if (skaicius2 == 0) {
                cout << "Klaida: dalyba is nulio negalima!" << endl;
            } else {
                cout << "Rezultatas: " << skaicius1 / skaicius2 << endl;
            }

        }
        else if (pasirinkimas == 5) {
            cout<<"Baigiama programa."<<endl;
        }
        else cout<<"Pasirinmkimas netinkamas"<<endl;

    }
    return 0;
}