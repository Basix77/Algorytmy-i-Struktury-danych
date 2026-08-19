

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int kartyGracz[10];
    int kartyKomputer[3];
    int sumaGracz = 0;
    int sumaKomputer = 0;
    int decyzja = 0;
    int ileGracz = 0;
    int wygraneGracz = 0;
    int wygraneKomputer = 0;
    int remisy = 0;
    int licznikGier = 0;
    int talia [52] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 2, 3, 4, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 2, 3, 4, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 2, 3, 4, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 2, 3, 4};
    int ileKart = 52;
   

    do {
        
  
        sumaGracz = 0;
        sumaKomputer = 0;
        ileGracz = 0;
        licznikGier++;
        ileKart = 52;
        

        do {
            cout << "Wpisz 1, aby dobrac karte, 0 aby spasowac: ";
            cin >> decyzja;
        
            if (decyzja == 1) {
                kartyGracz[ileGracz] = rand() % 11 + 1;
                sumaGracz += kartyGracz[ileGracz];
                ileGracz++;

                


                cout << "Wylosowana karta: " << kartyGracz[ileGracz - 1] << endl;
                cout << "Twoje karty: ";
                for (int i = 0; i < ileGracz; i++)
                    cout << kartyGracz[i] << " | ";
                cout << endl;

                cout << "Suma kart gracza: " << sumaGracz << endl;
            }
           
       }while (decyzja == 1 && sumaGracz < 21);
        
        if (sumaGracz == 21) {
            cout << "Masz dokladnie 21!\n";
            wygraneGracz++;
        }
        
        if (sumaGracz > 21) {
            cout << "Przekroczyles 21 - przegrywasz\n";
            wygraneKomputer++;
        }
        else if ((decyzja == 0) && (sumaGracz <21)) {
            
           


            kartyKomputer[0] = rand() % 11 + 1;
            kartyKomputer[1] = rand() % 11 + 1;
            kartyKomputer[2] = rand() % 11 + 1;

            sumaKomputer = kartyKomputer[0] + kartyKomputer[1] + kartyKomputer[2];

            cout << "Karty komputera: ";
            for (int i = 0; i < 3; i++)
                cout << kartyKomputer[i] << " | ";
            cout << endl;

            cout << "Suma kart komputera: " << sumaKomputer << endl;

            if (sumaKomputer > 21) {
                cout << "komputer przekroczyl 21 - wygrywasz!" << endl;
                wygraneGracz++;
            }
            else if (sumaGracz > sumaKomputer) {
                wygraneGracz++;
                cout << "Wygrales!" << endl;
            } 
            else if (sumaGracz == sumaKomputer) {
                remisy++;
                cout << "Macie remis!" << endl;
            }
            else {
                wygraneKomputer++;
                cout << "Komputer wygrywa!" << endl;
            }
        }

       
        cout << "\nIlosc gier: " << licznikGier << endl;
        cout << "Wygrane gracza: " << wygraneGracz << endl;
        cout << "Wygrane komputera: " << wygraneKomputer << endl;
        cout << "Remisy: " << remisy << endl;

        cout << "\nWpisz 1, aby zagrac ponownie, 0 aby zakonczyc: ";
        cin >> decyzja;

    } while (decyzja == 1);

    return 0;
}



