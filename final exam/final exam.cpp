#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	
	virtual float hitungNilaiAkhir()
	{ return 0;}
	virtual void cekkelulusan() { }
	virtual void input() { }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi(int p) {
		return presensi; p;
	}

	void stexercise(int e) {
		this->exercise = e;
	}

	float getexercise() {
		return exercise;
	}

	void setactivity(int a) {
		this->activity = a;
	}

	float getactivity() {
		return activity;
	}


};

class Pemrogaan : public MataKuliah {
	int presensi(int p);
	int exercise(int e);
	int activyty(int a);

	virtual float hitungNilaiAkhir() {
		cout << "Masukkan Nilai akhir" <<endl;
		return 0;
	}

	virtual void cekkelulusan() {
		cout << "selamat anda lulus" << endl;
		return;
	}

	void input() {
		cout << "masukkan nilai exercise";
		setX exercise:

		cout << "masukkan nilai presensi";
		cin >> p:
		setX presensi:

		cout << "masukkan nilai activyty";
		cin >> (e):
	}

	
};


int main() {

}
