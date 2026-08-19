


#include <iostream>
using namespace std;

int tab[4][4] =
{
    {5, 7, 13, 22},
    {88, 100, 3, 2},
    {33, 7, 2, 3},
    {7, 3, 15, 2}
};

int klucz;
int X1, Y1, X2, Y2;
int X, Y;

int main()
{
    cout << "Podaj klucz: ";
    cin >> klucz;

    cout << "Podaj koordynaty lewego gornego rogu:\n";
    cout << "X1: ";
    cin >> X1;
    cout << "Y1: ";
    cin >> Y1;

    cout << "Podaj koordynaty prawego dolnego rogu:\n";
    cout << "X2: ";
    cin >> X2;
    cout << "Y2: ";
    cin >> Y2;



   
    for (Y = Y1 - 1; Y <= Y2 - 1; Y++)
    {
        for (X = X1 - 1; X <= X2 - 1; X++)
        {
            if (tab[Y][X] == klucz)
            {
                cout << "Znaleziono klucz\n";
                cout << "wartosc: " << klucz << endl;
                cout << "koordynaty: X = " << X + 1
                    << ", Y = " << Y + 1 << endl << endl;
              
            }
        }
    }

 

    return 0;
}