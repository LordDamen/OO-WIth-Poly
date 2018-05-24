#ifndef Classes_H
#define Classes_H
#include <string>
#include <iostream>
using namespace std;

class BasicChar {
	
public:
	BasicChar();
	BasicChar(string sname, string type);
	string GetName();
	void setName(string);
	string GetSize();
	void setSize(string);
	void display();
protected:
	string name;
	string size;
};

class goblin: public BasicChar {
public:
	goblin();
	goblin(string sname, string ssize,int aWiz,int aCon);
	void display();
	void StatsUpdate(int, int);
protected:
	int Wiz, Con;

	


};
class Skelleton : public BasicChar {
public:
	Skelleton();
	Skelleton(string sname, string ssize,int astr,int acha);
	void display();
	void StatsUpdate(int, int);
protected:
	int Str, Cha;


};





#endif // the end for the definition