

#include <iostream>

using namespace std;

int a=0;
int b=0;
int opcja=0;
float suma = 0;
float srednia=0;
int wyrazy = 0;
int i;

int main()
{


	do {
		cout << "Podaj wartosc a i b, zachowaj warunek a<b.\n";
		cout << "a: "; cin >> a;
		cout << "b: "; cin >> b;
		if (a >= b) {
			cout << "a musi byc mniejsze od b!\n";
		}
	} while (a >= b);


	while (opcja != 4) // to samo mozna zrobic z funkcja switch zamiast petli while
	{
		i = a;
		suma = 0;
		srednia = 0;



		cout << "wybierz opcje: \n1. Suma kolejnych liczb calkowitych\n2. Suma kwadratow kolejnych liczb calkowitych\n3. Srednia arytmetyczna kolejnych liczb calkowitych\n4. Zakoncz\n";
		cout << "Wybrana opcja: "; cin >> opcja;

		if (opcja == 1) {
			while (i <= b) {

				suma = suma + i;
				i = i + 1;
			}
			cout << "Suma: " << suma << "\n\n\n";
		}



		else if (opcja == 2) {

			while (i <= b) {
				suma = suma + (i * i);
				i = i + 1;
			}
			cout << "Suma: " << suma << "\n\n\n";

		}



		else if (opcja == 3) {

			wyrazy = (b - a + 1);
			while (i <= b) {
				suma = suma + i;
				i = i + 1;
			}
			srednia = suma / wyrazy;
			cout << "Srednia: " << srednia << "\n\n\n";

		}



		else if (opcja == 4) {

			cout << "\n===Koniec programu===\n\n";
		}

	}
	return 0;
}
  

  
  




