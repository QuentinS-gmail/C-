#include <iostream>
#include <tchar.h>
	using namespace std;

	int _tmain(int argc, _TCHAR* argv[])
{
	while(true)
	{
		float val1;
		float val2;
		char operateur;
		float resultat;

		cout <<"calcul = ";
		std::cin >> val1 >> operateur >> val2;
		if(operateur=='+'){
		resultat=val1+val2;
		}
		if(operateur=='-'){
		resultat=val1-val2;
		}
		if(operateur=='*'){
		resultat=val1*val2;
		}
		if(operateur=='/'){
		resultat=val1/val2;
		}
		cout << resultat << endl;

		cin.get();
		cin.get();
	}
	return 0;

}
