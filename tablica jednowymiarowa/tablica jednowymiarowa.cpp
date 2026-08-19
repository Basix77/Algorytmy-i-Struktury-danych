
#include <iostream>
using namespace std;


int i = 0;
int j = 0;
float t = 0;
int n = 0;
float suma = 0;
float element = 0;
int wybrany = 0;

int main()
{
	cout << "ile elementow tablicy chcesz wprowadzic: ";
	cin >> n;

	float* tab = new float[n];

	for (i = 0;i < n;i++) {
		cout << "wprowadz " << (i + 1) << " element tablicy: ";
		cin >> t;
		tab[i] = t;

   }

	for (j = 0;j < n;j++) {
		element = tab[n - j - 1];
		suma = suma + element;
	}

	cout << "\nktory element chcialbys wyswietlic: ";
	cin >> wybrany;

	cout << "\na_pierwszy: " << tab[0] << endl;
	cout << "b_zawartosc: ";
	for (int k = 0; k < n;k++) {
		cout << tab[k] << ", ";
	}
	cout << "\nc_roznica: " << (tab[n - 1]) - (tab [0]) << endl;
	cout << "d_suma: " << suma << endl;
	cout << "e_wybrany: " << tab[wybrany-1] << endl;
	
	return 0;
}

