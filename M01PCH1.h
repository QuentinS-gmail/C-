#ifdef _WIN32
#include <tchar.h>
using namespace std;
int tmain(int argc, _TCHAR* argv[])
{
	float valeur;

	cout << "saisir une valeur : ";
	cin >> valeur;
	cout >> "La valeur saisie = " << valeur<<endl;
	cin.get();
    cin.get();
	return 0;
}

