#include <iostream>
#include <string>
using namespace std;
int main() {
    ///Sukurti kintamieji ir jiems priskirta informacija apie studenta
    string vardas = "Danielius";
    string pavarde = "Jarmolovicius";
    int amzius = 19;
    string grupe = "PI24";
    int kursas = 1;
    string studijuProgramosPavadinimas ="programu sistemos";
/// Isvesta infromacija

    cout <<"Studento informacija: " << endl;
    cout <<"vardas: " << vardas << endl;
    cout <<"pavarde: " << pavarde << endl;
    cout <<"amzius: " << amzius << endl;
    cout <<"grupe: "  << grupe << endl;
    cout <<"kursas: "  << kursas << endl;
    cout << "Studiju, Programos, Pavadinimas: " << studijuProgramosPavadinimas << endl;

    cout << "_____________________antra uzduotis" << endl;///krepsinis
    string pavadinimas = "Kauno Zalgiris";
    int ikurimoMetai = 1944;
    string savininkas = "Paulius Motiejunas";
    string arena = "Kauno Zalgirio Arena";
    int vietuSkaicius = 15415;
    ///isvesta info

    cout <<"Informacija apie sporto kluba: " << endl;
    cout <<"Pavadinimas: " << pavadinimas << endl;
    cout << "Ikurimo metai: " << ikurimoMetai << endl;
    cout << "Savininkas: " << savininkas << endl;
    cout << "Arena: " << arena << endl;
    cout << "Vietu skaicius: " << vietuSkaicius << endl;

    cout << "_____________________trecia uzduotis" << endl;///tacka
    string marke = "BMW";
    string modelis = "E46";
    int pagaminimoMetai = 1999;
    string litrazas ="2.0 dizelis";
    string spalva = "sidabrine";
    ///isvesta info

    cout << "automobilis: " <<" marke: " << marke <<", modelis: " << modelis <<", Pagaminimo metai: " << pagaminimoMetai <<", Litrazas: " << litrazas <<", Spalva: " << spalva << endl;

    cout << "____________________ketvirta uzduotis" << endl;
    ////kazkas neaiskaus
    int a = 13;
    int b = 5;
    double c = 17.5;

    cout << a + b - c << endl;
    cout << 15.0 / 2 + c << endl;
    cout << a / static_cast<double>(b) + 2 * c << endl;
    cout << 14 % 3 + 6.3 + static_cast<float>(b)/static_cast<float>(a) << endl;
    cout << static_cast<int>(c) % 5 + a-b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;

}