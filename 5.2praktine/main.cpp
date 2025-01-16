#include <iostream>
#include <string>
using namespace std;

struct Kontaktas {
    int id;
    string vardas;
    string pavarde;
    string telefonas;
};


void pridetiKontakta(Kontaktas*& kontaktai, int& kiekis);
void spausdintiKontaktus(Kontaktas* kontaktai, int kiekis);
void redaguotiKontakta(Kontaktas* kontaktai, int kiekis);
void istrintiKontakta(Kontaktas*& kontaktai, int& kiekis);

int main() {
    Kontaktas* kontaktai = nullptr;
    int kiekis = 0;
    int pasirinkimas;

    do {
        cout << "\n=== Kontaktu tvarkykle ===\n";
        cout << "1. Prideti kontakta\n";
        cout << "2. Spausdinti kontaktus\n";
        cout << "3. Redaguoti kontakta\n";
        cout << "4. Istrinti kontakta\n";
        cout << "0. Baigti\n";
        cout << "Pasirinkite veiksma: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                pridetiKontakta(kontaktai, kiekis);
                break;
            case 2:
                spausdintiKontaktus(kontaktai, kiekis);
                break;
            case 3:
                redaguotiKontakta(kontaktai, kiekis);
                break;
            case 4:
                istrintiKontakta(kontaktai, kiekis);
                break;
            case 0:
                cout << "Programa baigiama.\n";
                break;
            default:
                cout << "Neteisingas pasirinkimas. Bandykite dar karta.\n";
        }
    } while (pasirinkimas != 0);

    delete[] kontaktai;

    return 0;
}


void pridetiKontakta(Kontaktas*& kontaktai, int& kiekis) {
    Kontaktas* naujiKontaktai = new Kontaktas[kiekis + 1];
    for (int i = 0; i < kiekis; ++i) {
        naujiKontaktai[i] = kontaktai[i];
    }
    delete[] kontaktai;
    kontaktai = naujiKontaktai;


    kontaktai[kiekis].id = kiekis + 1;
    cout << "Iveskite varda: ";
    cin >> kontaktai[kiekis].vardas;
    cout << "Iveskite pavarde: ";
    cin >> kontaktai[kiekis].pavarde;
    cout << "Iveskite telefono numeri: ";
    cin >> kontaktai[kiekis].telefonas;

    ++kiekis;
    cout << "Kontaktas sekmingai pridetas.\n";
}


void spausdintiKontaktus(Kontaktas* kontaktai, int kiekis) {
    if (kiekis == 0) {
        cout << "Kontaktų nera.\n";
        return;
    }
    cout << "\n=== Kontaktu sarasas ===\n";
    for (int i = 0; i < kiekis; ++i) {
        cout << "ID: " << kontaktai[i].id
             << ", Vardas: " << kontaktai[i].vardas
             << ", Pavarde: " << kontaktai[i].pavarde
             << ", Telefonas: " << kontaktai[i].telefonas << "\n";
    }
}


void redaguotiKontakta(Kontaktas* kontaktai, int kiekis) {
    if (kiekis == 0) {
        cout << "Kontaktu nera ka redaguoti.\n";
        return;
    }

    int id;
    cout << "Iveskite kontakto ID, kuri norite redaguoti: ";
    cin >> id;

    for (int i = 0; i < kiekis; ++i) {
        if (kontaktai[i].id == id) {
            cout << "Redaguojamas kontaktas (ID: " << id << ").\n";
            cout << "Iveskite nauja varda: ";
            cin >> kontaktai[i].vardas;
            cout << "Iveskite nauja pavarde: ";
            cin >> kontaktai[i].pavarde;
            cout << "Iveskite nauja telefono numeri: ";
            cin >> kontaktai[i].telefonas;
            cout << "Kontaktas sekmingai atnaujintas.\n";
            return;
        }
    }
    cout << "Kontaktas su ID " << id << " nerastas.\n";
}


void istrintiKontakta(Kontaktas*& kontaktai, int& kiekis) {
    if (kiekis == 0) {
        cout << "Kontaktų nera ka istrinti.\n";
        return;
    }

    int id;
    cout << "Iveskite kontakto ID, kuri norite istrinti: ";
    cin >> id;

    int index = -1;
    for (int i = 0; i < kiekis; ++i) {
        if (kontaktai[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Kontaktas su ID " << id << " nerastas.\n";
        return;
    }

    Kontaktas* naujiKontaktai = new Kontaktas[kiekis - 1];
    for (int i = 0, j = 0; i < kiekis; ++i) {
        if (i != index) {
            naujiKontaktai[j++] = kontaktai[i];
        }
    }

    delete[] kontaktai;
    kontaktai = naujiKontaktai;
    --kiekis;

    cout << "Kontaktas sekmingai istrintas.\n";
}
