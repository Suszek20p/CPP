#include <iostream>
using namespace std;

int Wczytywanie()
{
    string ip;
    string maska;

    cout << "Podaj IP: " << endl;
    cin >> ip;
    cout << "Podaj Maske: " << endl;
    cin >> maska;

    cout << "Twoje IP: " <<  ip << endl;
    cout << "Twoja Maska: " << maska << endl;

    return 0;
}

int CzyLiczba()
{
    
}

int main(int argc, char const *argv[])
{
    Wczytywanie();

    return 0;
}
