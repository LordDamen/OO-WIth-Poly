#include "Classes.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

BasicChar::BasicChar() {}
BasicChar::BasicChar(string sname, string ssize) {
	name = sname;
	size = ssize;
}


string BasicChar::GetName() { return name; }
void BasicChar::setName(string sname) { name = sname; }

void BasicChar::display()
{
	cout << "This character is named " << name << " !" << endl;
	cout << "This character is a size " << size << " !" << endl;
}

string BasicChar::GetSize(){return size;}
void BasicChar::setSize(string ssize) { size = ssize; }

goblin::goblin() {}

goblin::goblin(string sname, string ssize, int aWiz, int aCon)
{
	name = sname;
	size = ssize;
	Wiz = aWiz;
	Con = aCon;
}


Skelleton::Skelleton() {}
Skelleton::Skelleton(string sname, string ssize, int astr, int acha)
{
	name = sname;
	size = ssize;
	Str = astr;
	Cha = acha;
}

void goblin::display()
{
	cout << "This character is named " << name << " !" << endl;
	cout << "This " << name << " has " << Con << " Consitution" << endl;
	cout << "This " << name << " has " << Wiz << " Wisdom" << endl;
	cout << "This character is a size " << size << " !" << endl;
}
void Skelleton::display()
{
	cout << "This character is named " << name << " !" << endl;
	cout << "This " << name << " has " << Str << " Strength" << endl;
	cout << "This " << name << " has " << Cha << " Charisma" << endl;
	cout << "This character is a size " << size << " !" << endl;
}
