//#include<iostream>
//
//using namespace std;
//
//class Clasa {
//public:
//	char* pointer;
//	int atribut;
//
//	Clasa& operator=(const Clasa&c) {
//		if (this->pointer != NULL)
//		{
//			delete[]this->pointer;
//		}
//		this->pointer = new char[strlen(c.pointer) + 1];
//		strcpy(this->pointer, c.pointer);
//		this->atribut = c.atribut;
//		return *this;
//	}
//	
//	Clasa(const Clasa& c) {
//		this->atribut = c.atribut;
//		//this->pointer = c.pointer; //shallow copy
//		this->pointer = new char[strlen(c.pointer) + 1];
//		strcpy(this->pointer, c.pointer);
//	}
//
//	Clasa() {
//		this->pointer = NULL;
//		this->atribut = 0;
//	}
//
//	void metoda(const Clasa &c) {
//
//	}
//
//	Clasa metoda2() {
//		Clasa c;
//		return c;
//	}
//
//
//};
//
//void main() {
//	Clasa c1;
//	c1.pointer = new char[strlen("text") + 1];
//	strcpy(c1.pointer, "text");
//	c1.atribut = 10;
//
//	
//	Clasa c2 = c1; //	Clasa c5(c1);
//	Clasa c3;
//	c3 = c1;
//
//
//
//	strcpy(c2.pointer, "newT");
//	c2.atribut = 50;
//	cout << c1.pointer<<endl;
//
//	//Clasa c1;
//	//c1.pointer = new char[strlen("text") + 1];
//	//strcpy(c1.pointer, "text");
//
//	c1.metoda(c2);
//	c1.metoda2();
//
//	//Clasa c2;
//	//c2 = c1;
//
//	//char*a;
//	//char*b;
//	//strcpy(a, b);
//	//char c[20];
//	//char d;
//	//d = 'f';
//	//char x = 'x';
//	//strcpy(x,d);
//}