

#include<iostream>

using namespace std;


class Laptop {
private:
	int RAM;
	string tipCPU;
	float rezolutieEcran;
	bool cameraWeb;
	int nrTaste;
	int* nrApasariTasta;

public:
		Laptop() {
			RAM = 16;
			tipCPU = "AMD";
			rezolutieEcran = 13.3;
			this->cameraWeb = true;
			nrTaste = 0;
			nrApasariTasta = NULL;
		}
	friend int getRAM(Laptop &l);
	friend class Programator;

	friend float getRezolutie(Laptop l){
		return l.rezolutieEcran;
	}
};


int getRAM(Laptop &l) {
	return l.RAM;
}


class Programator {
private:
	string nume;
	Laptop laptop;
public:
	bool poateIntraInConferintaVideo() {
		return this->laptop.cameraWeb;
	}

	void f(Programator* p) {

	}

	void fun(Programator p1, Programator p2) {

	}

	Programator operator+(Programator p) {

	}


	
};

Programator operator+(Programator p1, Programator p2) {

}

void main() {
	
	Programator programator;
	cout << (programator.poateIntraInConferintaVideo() ? "Are video" : "Nu are video");

	//programator.nume = "Popescu";
	//programator.laptop.cameraWeb;

}