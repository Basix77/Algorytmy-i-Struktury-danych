#include <iostream>
using namespace std;

int main() {
    int IW, IK;
    cout << "ile wierszy ma miec tablica: ";
    cin >> IW;
    cout << "ile kolumn ma miec tablica: ";
    cin >> IK;

  
    int** tab = new int* [IW + 1];
    for (int i = 1; i <= IW; i++) {
        tab[i] = new int[IK + 1];
    }

    int wiersz = 1;
    int kolumna = 1;
    int suma = 0;

   
    while (wiersz <= IW) {

        if (kolumna <= IK) {
            cout << "wprowadz elementy wiersza nr " << wiersz << ": ";
            cin >> tab[wiersz][kolumna];

            suma = suma + tab[wiersz][kolumna];

            kolumna = kolumna + 1;   // przejœcie do nastêpnej kolumny
        }
        else {
            wiersz = wiersz + 1;     // przejœcie do nastêpnego wiersza
            kolumna = 1;
        }
    }

 
    cout << "\nTablica:\n";
    for (int w = 1; w <= IW; w++) {
        for (int k = 1; k <= IK; k++) {
            cout << tab[w][k] << " ";
        }
        cout << endl;
    }


    cout << "\nSuma: " << suma << endl;


    cout << "jaki element chcesz wyswietlic?\n";
    cout << "wiersz: ";
    cin >> wiersz;
    cout << "kolumna: ";
    cin >> kolumna;

    cout << "twoj element: " << tab[wiersz][kolumna] << endl;

    
   

    
  

    return 0;
}
