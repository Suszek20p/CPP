// WCZYTAĆ ADRES IP I MASKĘ NP.
//              172.168.10.10
//              255.255.255.0
// 1) WYŚWIETLIĆ IP I MASKĘ W FORMIE BINARNEJ
// 2) WYŚWIETLIĆ KLASE IP I ILOŚĆ PODSIECI DLA MASKI KLASOWEJ
// 3) WYŚWIETLIĆ ADRES SIECI HOSTÓW W PODSIECI
// 4) SPRAWDZIĆ POPRAWNOŚĆ IP ORAZ MASKI

#include <iostream>
using namespace std;

struct IP
{
    string ip;
    string maska;
};

bool CzyLiczba(string ip)
{
    
    cout << "Podaj IP (np.: 255.255.255.255): " << endl;
    cin >> ip;

    for(int i; i > ip.length(); i++)
    {
        if(ip[i]<'0' || ip[i]>'9')
        {
            if(ip[i]!='.')
            {
                return "nie ma kropek";
            }
            return "Jest git";
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    string ip;
    CzyLiczba(ip);

    return 0;
}
