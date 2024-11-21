#include <iostream>
#include <cstring>
using namespace std;

const char ALFABETAS[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

string Kodavimas(char tekstas[], char raktas[]) {
    int pozicijaTekste = -1, pozicijaRakte = -1, koduotaPozicija;
    int ilgisTeksto = strlen(tekstas);
    string laikinasRaktas = raktas;

    while (laikinasRaktas.size() < ilgisTeksto) {
        laikinasRaktas += raktas;
    }

    strcpy(raktas, laikinasRaktas.c_str());
    char koduotas[100];

    for (int i = 0; i < ilgisTeksto; i++) {
        for (int j = 0; j < sizeof(ALFABETAS); j++) {
            if (toupper(tekstas[i]) == ALFABETAS[j]) pozicijaTekste = j;
            if (toupper(raktas[i]) == ALFABETAS[j]) pozicijaRakte = j;

            if (pozicijaTekste != -1 && pozicijaRakte != -1) {
                koduotaPozicija = (pozicijaTekste + pozicijaRakte) % sizeof(ALFABETAS);
                koduotas[i] = ALFABETAS[koduotaPozicija];
                pozicijaTekste = pozicijaRakte = -1;
            }
        }
    }

    return string(koduotas, ilgisTeksto);
}

string Dekodavimas(char tekstas[], char raktas[]) {
    int pozicijaTekste = -1, pozicijaRakte = -1, originaliPozicija;
    int ilgisTeksto = strlen(tekstas);
    string laikinasRaktas = raktas;

    while (laikinasRaktas.size() < ilgisTeksto) {
        laikinasRaktas += raktas;
    }

    strcpy(raktas, laikinasRaktas.c_str());
    char dekoduotas[100];

    for (int i = 0; i < ilgisTeksto; i++) {
        for (int j = 0; j < sizeof(ALFABETAS); j++) {
            if (toupper(tekstas[i]) == ALFABETAS[j]) pozicijaTekste = j;
            if (toupper(raktas[i]) == ALFABETAS[j]) pozicijaRakte = j;

            if (pozicijaTekste != -1 && pozicijaRakte != -1) {
                originaliPozicija = (pozicijaTekste - pozicijaRakte + sizeof(ALFABETAS)) % sizeof(ALFABETAS);
                dekoduotas[i] = ALFABETAS[originaliPozicija];
                pozicijaTekste = pozicijaRakte = -1;
            }
        }
    }

    return string(dekoduotas, ilgisTeksto);
}

string KodavimasASCII(char tekstas[], char raktas[]) {
    const int ASCII_MIN = 33, ASCII_MAX = 126;
    const int ASCII_RANGE = ASCII_MAX - ASCII_MIN + 1;
    int pozicijaTekste = -1, pozicijaRakte = -1, koduotaPozicija;
    int ilgisTeksto = strlen(tekstas);
    string laikinasRaktas = raktas;

    while (laikinasRaktas.size() < ilgisTeksto) {
        laikinasRaktas += raktas;
    }

    strcpy(raktas, laikinasRaktas.c_str());
    char koduotas[100];

    for (int i = 0; i < ilgisTeksto; i++) {
        for (int j = ASCII_MIN; j <= ASCII_MAX; j++) {
            if (tekstas[i] == j) pozicijaTekste = j;
            if (raktas[i] == j) pozicijaRakte = j;

            if (pozicijaTekste != -1 && pozicijaRakte != -1) {
                koduotaPozicija = ((pozicijaTekste - ASCII_MIN) + (pozicijaRakte - ASCII_MIN)) % ASCII_RANGE + ASCII_MIN;
                koduotas[i] = koduotaPozicija;
                pozicijaTekste = pozicijaRakte = -1;
            }
        }
    }

    return string(koduotas, ilgisTeksto);
}

string DekodavimasASCII(char tekstas[], char raktas[]) {
    const int ASCII_MIN = 33, ASCII_MAX = 126;
    const int ASCII_RANGE = ASCII_MAX - ASCII_MIN + 1;
    int pozicijaTekste = -1, pozicijaRakte = -1, originaliPozicija;
    int ilgisTeksto = strlen(tekstas);
    string laikinasRaktas = raktas;

    while (laikinasRaktas.size() < ilgisTeksto) {
        laikinasRaktas += raktas;
    }

    strcpy(raktas, laikinasRaktas.c_str());
    char dekoduotas[100];

    for (int i = 0; i < ilgisTeksto; i++) {
        for (int j = ASCII_MIN; j <= ASCII_MAX; j++) {
            if (tekstas[i] == j) pozicijaTekste = j;
            if (raktas[i] == j) pozicijaRakte = j;

            if (pozicijaTekste != -1 && pozicijaRakte != -1) {
                originaliPozicija = ((pozicijaTekste - ASCII_MIN) - (pozicijaRakte - ASCII_MIN) + ASCII_RANGE) % ASCII_RANGE + ASCII_MIN;
                dekoduotas[i] = originaliPozicija;
                pozicijaTekste = pozicijaRakte = -1;
            }
        }
    }

    return string(dekoduotas, ilgisTeksto);
}

int main() {
    int pasirinkimas;
    char tekstas[100], raktas[100];
    string rezultatas;

    do {
        cout << "Pasirinkite operacija:\n"
             << "1. Kodavimas/Dekodavimas su abecele\n"
             << "2. Kodavimas/Dekodavimas su ASCII\n"
             << "3. Iseiti\n";
        cin >> pasirinkimas;

        if (pasirinkimas == 1 || pasirinkimas == 2) {
            int veiksmas;
            cout << "Pasirinkite:\n1. Kodavimas\n2. Dekodavimas\n";
            cin >> veiksmas;

            cout << "Irasykite teksta: ";
            cin >> tekstas;
            cout << "Irasykite rakta: ";
            cin >> raktas;

            if (pasirinkimas == 1) {
                rezultatas = (veiksmas == 1) ? Kodavimas(tekstas, raktas) : Dekodavimas(tekstas, raktas);
            } else {
                rezultatas = (veiksmas == 1) ? KodavimasASCII(tekstas, raktas) : DekodavimasASCII(tekstas, raktas);
            }
            cout << "Rezultatas: " << rezultatas << endl;
        }
    } while (pasirinkimas != 3);

    return 0;
}
