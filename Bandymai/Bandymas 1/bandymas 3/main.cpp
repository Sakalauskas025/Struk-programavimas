#include <iostream>
using namespace std;
int main()
{
    int numbersArray[5];
    for (int i = 0; i < 5; i++) {
        cout<<"Iveskite "<<i+1<<"elemento reiksme"<<endl;
        cin >>numbersArray [i];
    }
    for (int i = 0; i < 5; i++) {
        cout<<numbersArray[i]<<endl;
    }
    return 0;
}
