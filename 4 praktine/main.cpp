#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream ifile;
    ofstream ofile;

    ifile.open("Meniu.txt");
    if (!ifile.is_open()) {
        cerr << "Failo negalaima atidaryti." << endl;
        return 0;
    }
    ofile.open("Saskaita.txt");
    if (!ofile.is_open()) {
        cerr << "Failo negalaima atidaryti." << endl;
        return 0;
    }
    string i_fromFile;
    while (getline(ifile, i_fromFile)) {
        ofile << i_fromFile << endl;
    }
    ofile.close();
    ifile.close();




    return 0;
}
