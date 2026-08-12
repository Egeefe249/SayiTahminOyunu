#include <iostream>

using namespace std;

int main() {

	srand(time(0)); // random sayi uretmek icin)
	int gizliSayi = rand() % 20 + 1; // 1 ile 20 arasinda random sayi uretir
		int tahmin;
		int kalanHak = 3;
		bool kazandiMi = false;

		cout << " SAYI TAHMIN ETME OYUNUNA HOS GELDINIZ! ";
		cout << "1 ile 20 arasinda sayi tuttum 3 hakkin var \n \n";


		//WHILE döngüsü hak bitmediyse VE oyuncu kazanmadıysa donmeye devam et

		while (kalanHak > 0 && kazandiMi == false) {

			cout << "Tahmininiz : ";
			cin >> tahmin;

			if (tahmin == gizliSayi) {

				cout << "Tebrikler Kazandiniz \n";
				kazandiMi = true;

			
			}
		
			else if (tahmin > gizliSayi) {

				cout << "Daha kucuk bir sayi soyleyin \n";
				kalanHak--;
				cout << "Kalan hakkiniz : " << kalanHak << "\n \n";
			}

			else if (tahmin < gizliSayi) {
				cout << "Daha buyuk bir sayi soyleyin \n";
				kalanHak--;
				cout << "Kalan hakkiniz : " << kalanHak << "\n \n";

			}
			if (kazandiMi == false && kalanHak == 0) {
			
				cout << "Hakkiniz bitti, kaybettiniz \n" << "Tuttugum sayi : " << gizliSayi << "\n";
			}
		}

		return 0;
}