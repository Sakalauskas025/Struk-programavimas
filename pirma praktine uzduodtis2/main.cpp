#include <iostream>
using namespace std;
int main() {
    double EUR_I_GBP = 0.8593;
    double EUR_I_USD = 1.0713;
    double EUR_I_INR = 88.8260;

    double GBP_Parduoti = 0.9060;
    double USD_Parduoti = 1.1309;
    double INR_Parduoti = 92.8334;

    double GBP_Pirkti = 0.8450;
    double USD_Pirkti = 1.0547;
    double INR_Pirkti = 85.2614;



    int operacija = -1;
    while (operacija != 0) {
        cout<<"Pasirinkite norima operacija\n";
        cout<<"1.Valiutos lyginimas\n";
        cout<<"2.Pirkti/parduoti norima valiuta\n";
        int operacija;
        cin>>operacija;
        if (operacija == 0) {
            cout<<"Neteisingas pasirinkimas\n";break;
        }


        switch (operacija) {
            case 1: cout<<"Pasirinkite norima keitimo buda\n";
            cout<<"1.EUR_SU_GBP\n";
            cout<<"2.EUR_SU_USD\n";
            cout<<"3.EUR_SU_INR\n";
            cout<<"4.GBP_SU_EUR\n";
            cout<<"5.USD_SU_EUR\n";
            cout<<"6.INR_SU_EUR\n";
            int operacija2;
            cin>>operacija2;
            double kiekis;
            cout<<"Iveskite norima valiutos kieki";
            cin>>kiekis;
            if (operacija2 == 1) {
                cout<<"1.EUR_SU_GBP = "<<kiekis*EUR_I_GBP<<endl;
            }else if(operacija2 == 2) {
                cout<<"2.EUR_SU_USD = "<<kiekis*EUR_I_USD<<endl;
            }else if(operacija2 == 3) {
                cout<<"3.EUR_SU_INR = "<<kiekis*EUR_I_INR<<endl;
            }else if(operacija2 == 4) {
                cout<<"4.GBP_SU_EUR = "<<kiekis*GBP_Parduoti<<endl;
            }else if(operacija2 == 5) {
                cout<<"5.USD_SU_EUR = "<<kiekis*USD_Parduoti<<endl;
            }else if(operacija2 == 6) {
                cout<<"6.INR_SU_EUR = "<<kiekis*INR_Parduoti<<endl;
            }default:
                cout << "Neteisinga operacija.\n";
            case 2:cout<<"Pasirinkite norima prekiaujamos valiutos pardavimo buda\n";
            cout<<"1.EUR_SU_GBP(Pirkimas)\n";
            cout<<"2.EUR_SU_USD(Pirkimas)\n";
            cout<<"3.EUR_SU_INR(Pirkimas)\n";
            cout<<"4.GBP_SU_EUR(Pardavimas)\n";
            cout<<"5.USD_SU_EUR(Pardavimas)\n";
            cout<<"6.INR_SU_EUR(Pardavimas)\n";
            int operacija3;
            cin>>operacija3;
            double kiekis2;
            cout<<"Iveskite norima valiutos kieki\n";
            cin>>kiekis2;
            if (operacija3 == 1) {
                cout<<"1.EUR_I_GBP = "<<kiekis2*GBP_Pirkti<<endl;

            }else if(operacija3 == 2) {
                cout<<"2.EUR_I_USD = "<<kiekis2*USD_Pirkti<<endl;
            }
            else if(operacija3 == 3) {
                cout<<"EUR_I_INR = "<<kiekis2*INR_Pirkti<<endl;

            }else if(operacija3 == 4) {
                cout<<"GBP_I_EUR = "<<kiekis2*GBP_Parduoti<<endl;
            }
            else if(operacija3 == 5) {
                cout<<"USD_I_EUR = "<<kiekis2*USD_Parduoti<<endl;

            }
            else if(operacija3 == 6) {
                cout<<"INR_I_EUR = "<<kiekis2*INR_Parduoti<<endl;
            }
            return 0;
        }
    }
}

