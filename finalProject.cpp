#include <iostream>
using namespace std;
/// \brief  class utama untuk mata kuliah
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	/// \brief Konstruktor untuk inisialisasi nilai awal.
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	/// \brief menghitung nilai akhir .
	virtual float hitungNilaiAkhir() { return 0;}
	/// \brief Memeriksa kelulusan dalam mata kuliah (didefinisikan oleh kelas turunan).
	virtual void cekKelulusan() { 
		return;
	}
	/// \brief Mengambil input nilai dari pengguna(didefinisikan oleh kelas turunan).
	virtual void input() { 
		return; 
	}

	/// \brief Mengatur nilai presensi.
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	/// \brief Mengambil nilai presensi.
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

/// \brief  Kelas turunan dari MataKuliah untuk mata kuliah pemrograman.	
class Pemrograman : public MataKuliah {
	 // isi disini

	/// \brief Mengambil input nilai dari pengguna untuk mata kuliah pemrograman.
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
	/// \brief Menghitung nilai akhir mata kuliah pemrograman(override dari kelas induk).
	float hitungNilaiAkhir() {

	}
	/// \brief Memeriksa kelulusan mata kuliah pemrograman(override dari kelas induk).
	void cekKelulusan() {

	}
	
};

/// \brief Fungsi utama program.
int main() {
	//isi disini
	char ch;

	do {
		MataKuliah* mk;
		Pemrograman p;

		mk = &p;
		mk->input();

		cout << "\nApakah anda ingin mengulang program?  Y/N\n";
		cin >> ch;
	} while ((ch == 'y'));

	return 0;
}