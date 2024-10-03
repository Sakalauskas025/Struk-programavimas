#include <iostream>
using namespace std;
//
int main()
{
    double EUR_I_GBP = 0.8593;
    double EUR_I_USD = 1.0713;
    double EUR_I_INR = 88.8260;
    double GBP_I_EUR = 1 / EUR_I_GBP;
    double USD_I_EUR = 1 / EUR_I_USD;
    double INR_I_EUR = 1 / EUR_I_INR;

    int pasirinkimas;
    double suma;

    cout << "Pasirinkite norima operacija \n";
    cout <<"1. EUR I GBP \n";
    cout <<"2. EUR I USD \n";
    cout <<"3. EUR I INR \n";
    cout <<"4. GBP I EUR \n";
    cout <<"5. USD I EUR \n";
    cout <<"6. INR I EUR \n";

    cin>>pasirinkimas;
    cout<<"Iveskite norimos valiutos kieki ";
    cin>>suma;

    switch (pasirinkimas) {
        case 1:cout<<suma<<" EUR = "<<suma * EUR_I_GBP<<" GBP" <<endl;break;
        case 2:cout<<suma<<" EUR = "<<suma * EUR_I_USD<<" USD" <<endl;break;
        case 3:cout<<suma<<" EUR = "<<suma * EUR_I_INR<<" INR" <<endl;break;
        case 4:cout<<suma<<" GBP = "<<suma * GBP_I_EUR<<" EUR" <<endl;break;
        case 5:cout<<suma<<" USD = "<<suma * USD_I_EUR<<" EUR" <<endl;break;
        case 6:cout<<suma<<" INR = "<<suma * INR_I_EUR<<" EUR" <<endl;break;
        default:cout<<"Neteisingas pasirinkimas"<<endl;break;
    }






    return 0;
}
