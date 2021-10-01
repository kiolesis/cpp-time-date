#include <iostream>
#include <windows.h>
#include <winbase.h>
#include <conio.h>

using namespace std;

int main() {
    SYSTEMTIME st;
    GetSystemTime(&st);
	cout << "Wyswietlacz\n";
	cout << "1) Wyswietl godzine\n";
	cout << "2) Wyswietl dzien\n";
	int a = 0;
	cin >> a;
	
	if (a == 1) {
	cout << "Biezaca godzina to " << st.wHour << "\n"; }
	if (a == 2) {
	cout << "Biezacy dzien tygodnia to ";
	int b = st.wDayOfWeek;
	if (b == 1) cout << "poniedzialek";
	if (b == 2) cout << "wtorek";
	if (b == 3) cout << "sroda";
	if (b == 4) cout << "czwartek";
	if (b == 5) cout << "piatek";
    if (b == 6) cout << "sobota";
	if (b == 7) cout << "niedziela";
	}
}
