#include <iostream>
using namespace std;

//Deklarasi variable global
int kodeaJurusan;
string namaJurusan:
string statusKuota;

//prosedur input
void input() {
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

//prosedur untuk pengecekan kondisi
void pilihanJurusan() {
    switch (kodeJurusan){
        case 1:
            namajurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi"

    }

}

