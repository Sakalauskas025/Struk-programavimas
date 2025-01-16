#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Atidarome failus
    ifstream file("duomenys.txt");  // Failas skaitomam duomenų nuskaitymui
    ofstream fout("rezultatas.txt");  // Failas rezultatui įrašyti

    // Patikriname, ar failai buvo atidaryti sėkmingai
    if (!file.is_open()) {
        cerr << "Nepavyko atidaryti duomenys.txt failo." << endl;
        return 1;  // Užbaigiame programą, jei failas neatsidarė
    }

    if (!fout.is_open()) {
        cerr << "Nepavyko atidaryti rezultatas.txt failo." << endl;
        return 1;  // Užbaigiame programą, jei failas neatsidarė
    }

    int sum = 0, num;

    // Nuskaityti visus skaičius ir susumuoti juos
    while (file >> num) {
        sum += num;
    }

    // Įrašome sumą į rezultatai.txt failą
    fout << "Sumos rezultatas: " << sum << endl;

    // Uždaryti failus
    file.close();
    fout.close();

    cout << "Operacija baigta. Rezultatas įrašytas į rezultatas.txt." << endl;

    return 0;
}
