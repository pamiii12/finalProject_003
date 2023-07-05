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

	virtual float hitungNilaiAkhir() { return 0;}
	virtual void cekKelulusan() { 
		return;
	}
	virtual void input() { 
		return; 
	}

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}
	// isi disini

	void setP(int p) {
		this->presensi = p;
	}
	void setA(int a) {
		this->activity = a;
	}
	void setE(int e) {
		this->exercise = e;
	}
	void setUA(int ua) {
		this->tugasAkhir = ua;
	}
	int getP() {
		return presensi;
	}
	int getA() {
		return activity;
	}
	int getE() {
		return exercise;
	}
	int getUA() {
		return tugasAkhir;
	}
	

};

class Pemrograman : public MataKuliah {
	 // isi disini
	void input() {
		int p, a, e, ua;

		cout << "Program dibuat" << endl;
		cout << "Masukkan nilai Presensi : \n";
		cin >> p;
		setP(p);
		cout << "Masukkan nilai Activity : \n";
		cin >> a;
		setA(a);
		cout << "Masukkan nilai Exercise : \n";
		cin >> e;
		setE(e);
		cout << "Masukkan nilai Tugas Akhir : \n";
		cin >> ua;
		setUA(ua);
	}
	float hitungNilaiAkhir() {

	}
	void cekKelulusan() {

	}
	
};

int main() {
	//isi disini
	char ch;

	do {
		MataKuliah* mk;
		Pemrograman p;

		mk = &p;
		mk->input();
		int rata_rata;



		cout << "\nApakah anda ingin mengulang program?  Y/N\n";
		cin >> ch;
	} while ((ch == 'y'));

	return 0;
}