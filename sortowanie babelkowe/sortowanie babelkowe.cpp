
#include <iostream>
using namespace std;

int tablica[10] = { 28,17,3,15,22,28,5,13,18,1 };


int main()
{
    int i;
    int zamiana = 0;
    int temp = 0;
   do  {
       zamiana = 0;
        for (i = 0; i < 9; i++) {
            
            if (tablica[i] > tablica[i + 1]) {
                temp = tablica[i];
                tablica[i] = tablica[i + 1];
                tablica[i + 1] = temp;
                zamiana = zamiana + 1;
            }
        }

    } while (zamiana != 0);

        for (int k = 0;k < 10;k++) {
            cout << tablica[k] << " | ";
        }
}


