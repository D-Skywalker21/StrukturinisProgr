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
}

