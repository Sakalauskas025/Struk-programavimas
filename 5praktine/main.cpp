#include <iostream>
#include <limits>
using namespace std;
int main() {
    int rows, cols;

    cout << "Iveskite lenteles eiluciu skaiciu: ";
    cin >> rows;
    cout << "Iveskite lenteles stulpeliu skaiciu: ";
    cin >> cols;

    int** table = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        table[i] = new int[cols];
    }

    cout << "Iveskite lenteles reiksmes:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Reiksme [" << i << "][" << j << "]: ";
            cin >> table[i][j];
        }
    }

    cout << "\nLentele:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nEiluciu sumos:\n";
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += table[i][j];
        }
        cout << "Eilute " << i << ": " << rowSum << endl;
    }

    cout << "\nStulpeliu sumos:\n";
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += table[i][j];
        }
        cout << "Stulpelis " << j << ": " << colSum << endl;
    }

    int maxVal = numeric_limits<int>::min();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (table[i][j] > maxVal) {
                maxVal = table[i][j];
            }
        }
    }
    cout << "\nDidziausia reiksme lenteleje: " << maxVal << endl;

    for (int i = 0; i < rows; ++i) {
        delete[] table[i];
    }
    delete[] table;

    return 0;
}
