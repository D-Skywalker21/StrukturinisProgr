#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string pavadinimas = "";
    double rezultatas = 0;
    double valiutos_kiekis = 0;
    int pasirinkimas = 0;
    // Valiutų kursai
    const double GBP_Bendras = 0.8593;
    const double GBP_Pirkti = 0.8450;
    const double GBP_Parduoti = 0.9060;
    const double USD_Bendras = 1.0713;
    const double USD_Pirkti = 1.0547;
    const double USD_Parduoti = 1.1309;
    const double INR_Bendras = 88.8260;
    const double INR_Pirkti = 85.2614;
    const double INR_Parduoti = 92.8334;
    {
        cout << "1. Valiutu kurso palyginimas "<<endl;
        cout << "2. Valiutos pardavimas "<<endl;
        cout << "3. Valiutos pirkimas "<<endl;
        cout << "4. Iseiti "<<endl;
        cout << "Pasirinkite dominancia opcija "<<endl;

        int meniu_opcijos;
        cin >> meniu_opcijos;

        switch(meniu_opcijos) {
            case 1:
                cout << " Kaip keisite valiuta? " << endl;
            cout << " 1. EUR -> kita valiuta " << endl;
            cout << " 2. Kita valiuta -> EUR " << endl;
            int opcijos_keitimas;
            cin >> opcijos_keitimas;
            if (opcijos_keitimas == 1) {
                cout  << " Pasirinkite Valiuta " << endl;
                cout << " 1. GBP " << endl;
                cout << " 2. USD " << endl;
                cout << " 3. INR " << endl;
                int valiuta;
                cin >> valiuta;
                cout << " Iveskite suma(EUR) " << endl;
                cin >> valiutos_kiekis;
                if (valiuta == 1) {
                    rezultatas = GBP_Bendras * valiutos_kiekis;
                    pavadinimas = "GBP";
                } else if (valiuta == 2) {
                    rezultatas = USD_Bendras * valiutos_kiekis;
                    pavadinimas = "USD";
                } else {
                    rezultatas = INR_Bendras * valiutos_kiekis;
                    pavadinimas = "INR";
                }
            }
            cout << fixed << setprecision(2) << valiutos_kiekis << setprecision(2) << rezultatas << pavadinimas << endl;

            else  {
                cout  << " Pasirinkite Valiuta " << endl;
                cout << " 1. GBP " << endl;
                cout << " 2. USD " << endl;
                cout << " 3. INR " << endl;
                int valiuta;
                cin >> valiuta;
                string valiutos_pavadinimas;
                if (valiuta == 1) {
                    pavadinimas = "GBP";

                } else if (valiuta == 2) {
                    pavadinimas = "USD";

                } else {
                    pavadinimas = "INR";
                }
                cout << " Iveskite suma " << pavadinimas << endl;
                double valiutos_kiekis;
                cin >> valiutos_kiekis;

                if (valiuta == 1) {
                    rezultatas = valiutos_kiekis * GBP_Bendras;
                else if (valiuta ==2) {
                    rezultatas = valiutos_kiekis * USD_Bendras;
                } else {
                    rezultatas = valiutos_kiekis * INR_Bendras;
                }
                    cout << fixed << setprecision(2) << valiutos_kiekis << " " << pavadinimas
                    << fixed << setprecision(2) << rezultatas << " EUR " << endl;
                }
            }
        }
    }
}
