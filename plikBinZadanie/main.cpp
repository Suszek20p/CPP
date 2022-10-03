// SAMOLOTY
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct Samoloty
{
    char nazwa[25];
    int maxPredkosc;
    float waga;
};

int main(int argc, char const *argv[])
{

    Samoloty samolot;

    cout << "podaj nazwe samolotu: " << endl;
    cin >> samolot.nazwa;
    cout << "podaj max predkosc samolotu: " << endl;
    cin >> samolot.maxPredkosc;
    cout << "podaj wage samoloru: " << endl;
    cin >> samolot.waga;
    cout << "twoj samolot to " << samolot.nazwa << " " << samolot.maxPredkosc << " " << samolot.waga << endl;

    ofstream plikSamoloty("samolot.bin", ios::binary);
    plikSamoloty.write((const char*)&samolot, sizeof samolot);
    plikSamoloty.close();

    ofstream plikBinZapis("data.bin", ios::binary);
    
    plikBinZapis.write((const char*)&samolot.nazwa, sizeof samolot.nazwa);
    plikBinZapis.write((const char*)&samolot.maxPredkosc, sizeof samolot.maxPredkosc);
    plikBinZapis.write((const char*)&samolot.waga, sizeof samolot.waga);
    plikBinZapis.close();

    return 0;
}
