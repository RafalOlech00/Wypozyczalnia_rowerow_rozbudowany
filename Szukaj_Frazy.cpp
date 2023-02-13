#include "Szukaj_Frazy.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Start.h"
#include "Rejestracja.h"

using namespace std;

bool Istnieje_Fraza = false;

void Szukaj_Frazy(string szukana_fraza)
{
    Istnieje_Fraza = false;

    fstream plik;
    plik.open("uzytkownicy.txt");
    int rozmiar = 0;
    plik >> rozmiar;
  


    string** M = new string * [rozmiar];
    for (int i = 0; i < rozmiar; i++)
        M[i] = new string[rozmiar];



    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            plik >> M[i][j];
        }
    }

    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            if (szukana_fraza == M[i][j])
                Istnieje_Fraza = true;
        }
    }
    if (Istnieje_Fraza == true)
    {
        cout << "Wybrany login juz istnieje, wybierz inny!" << endl;
    }
    else
       // cout << "Wyszukiwana fraza nie istnieje!" << endl;
    plik.close();
   

}



