#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("duomenys.txt");
    ofstream fout("rezultatas.txt");
    int sum=0,x,y;
    file>>x;
    file>>y;
    sum=x+y;
    fout<<sum;


    return 0;
}
