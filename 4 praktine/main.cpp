#include <iostream>
#include <fstream>
#include <iomanip>
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
   cout << "Meniu:" << endl;
    string meniu[8];
    float kainos[8];
    int indeksas = 0;
    string line;

    while (getline(ifile, line)) {
        meniu[indeksas] = line;

        size_t pos = line.find_last_of(" ");
        if (pos != string::npos) {
            string kainaStr = line.substr(pos + 1);
            kainos[indeksas] = stof(kainaStr);
        } else {
            kainos[indeksas] = 0.0;
        }

        cout << (indeksas + 1) << ". " << line << endl;
        indeksas++;
    }
    ifile.close();

    cout << "Pasirinkite norimus patiekalus ivesdami ju numerius (iveskite 0, kai baigsite):" << endl;
    int pasirinkimas;
    float bendraSuma = 0.0;

    while (true) {
        cin >> pasirinkimas;
        if (pasirinkimas == 0) {
            break;
        }
        if (pasirinkimas > 0 && pasirinkimas <= indeksas) {
            cout << "Pasirinkote: " << meniu[pasirinkimas - 1] << endl;
            ofile << meniu[pasirinkimas - 1] << endl;
            bendraSuma += kainos[pasirinkimas - 1];
        } else {
            cout << "Tokio patiekalo nera, bandykite dar karta." << endl;
        }
    }


    float PVM = 0.21f;
    float sumaSuMokesciais = bendraSuma * (1 + PVM);

    cout << fixed << setprecision(2);
    ofile << sumaSuMokesciais << endl;

    ofile << "Bendra suma: " << bendraSuma << " Eur" << endl;
    ofile << "Bendra suma su PVM (21%): " << sumaSuMokesciais << " Eur" << endl;

    ofile.close();
    return 0;


}
