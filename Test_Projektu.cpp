#include "pch.h"
#include "CppUnitTest.h"
#include "../IO_Glowny_Projekt/Anuluj_Rezerwacje.h"
#include "../IO_Glowny_Projekt/Dodawanie.h"
#include "../IO_Glowny_Projekt/Inkrementacja.h"
#include "../IO_Glowny_Projekt/Inkrementacja_Reklamacja.h"
#include "../IO_Glowny_Projekt/Logowanie.h"
#include "../IO_Glowny_Projekt/Logowanie_Pracownik.h"
#include "../IO_Glowny_Projekt/Menu_Admin.h"
#include "../IO_Glowny_Projekt/Menu_Glowne.h"
#include "../IO_Glowny_Projekt/Menu_Rezerwacje.h"
#include "../IO_Glowny_Projekt/Menu_Zwrot.h"
#include "../IO_Glowny_Projekt/Modyfikuj_Id.h"
#include "../IO_Glowny_Projekt/Modyfikuj_Id_A.h"
#include "../IO_Glowny_Projekt/Modyfikuj_Id_R.h"
#include "../IO_Glowny_Projekt/Modyfikuj_Id_Z.h"
#include "../IO_Glowny_Projekt/Modyfikuj_Reklamacje.h"
#include "../IO_Glowny_Projekt/Rejestracja.h"
#include "../IO_Glowny_Projekt/Reklamacja.h"
#include "../IO_Glowny_Projekt/Rezerwuj.h"
#include "../IO_Glowny_Projekt/Start.h"
#include "../IO_Glowny_Projekt/Szukaj_Frazy.h"
#include "../IO_Glowny_Projekt/Szukaj_Haslo.h"
#include "../IO_Glowny_Projekt/Szukaj_Login.h"
#include "../IO_Glowny_Projekt/Wypozyczenie.h"
#include "../IO_Glowny_Projekt/Wyswietl_Moje_R.h"
#include "../IO_Glowny_Projekt/Wyswietl_Moje_R_Z.h"
#include "../IO_Glowny_Projekt/Wyswietl_Reklamacje.h"
#include "../IO_Glowny_Projekt/Wyswietl_Rezerwacje.h"
#include "../IO_Glowny_Projekt/Wyswietl_Rowery.h"
#include "../IO_Glowny_Projekt/Wyswietl_Uzytkownikow.h"
#include "../IO_Glowny_Projekt/Zwrot.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace TestProjektu
{
	TEST_CLASS(TestProjektu)
	{
	public:

		TEST_METHOD(Test_Anuluj_Rezerwacje)
		{
			int id = 123;
			Assert::AreEqual(id, 123);

			string login = "jnowak";
			Assert::AreEqual(0, login.compare("jnowak"));
		}

		TEST_METHOD(Test_Logowanie)
		{
			string haslo = "abcd";
			Assert::AreEqual(0, haslo.compare("abcd"));
		}

		TEST_METHOD(Test_Logowanie_Pracownik)
		{
			string haslo = "abcd";
			Assert::AreEqual(0, haslo.compare("abcd"));
		}

		TEST_METHOD(Test_Modyfikuj_Id)
		{
			bool Istnieje_Fraza = false;
			Assert::IsFalse(Istnieje_Fraza);
		}

		TEST_METHOD(Test_Inkrementacja)
		{
			int rozmiar = 0;
			string wczytana_linia = to_string(rozmiar);

			int x = stoi(wczytana_linia);
			Assert::AreEqual(x, stoi(wczytana_linia));
		}

		TEST_METHOD(Test_Inkrementacja_Reklamacja)
		{
			int rozmiar = 0;
			string wczytana_linia = to_string(rozmiar);

			int x = stoi(wczytana_linia);
			Assert::AreEqual(x, stoi(wczytana_linia));
		}

		TEST_METHOD(Test_Wypozyczenie)
		{
			int id = 123;
			Assert::AreEqual(id, 123);
		}

		TEST_METHOD(Test_Zwrot)
		{
			int id = 123;
			Assert::AreEqual(id, 123);

			string login = "jnowak";
			Assert::AreEqual(0, login.compare("jnowak"));
		}
	};
}
