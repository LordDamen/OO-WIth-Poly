#include "iostream"
#include <string>
#include "Classes.h"
using namespace std;


int main() 
{
	BasicChar basic = BasicChar("Ross", "Medium");
	basic.display();
	//BasicChar.StatsUpdate();
	goblin gblin = goblin("squee", "small", 1, 100);
	//gblin.StatsUpdate(10, 3 );
	gblin.display();

	Skelleton Selleton = Skelleton("Dralnu", "Large",10,1000);
	//Selleton.StatsUpdate(10, 3 );
	Selleton.display();


	system("pause");
	return 0;
}