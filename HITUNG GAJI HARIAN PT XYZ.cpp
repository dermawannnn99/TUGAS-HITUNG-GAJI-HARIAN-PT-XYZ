#include <iostream>
#include <string>
using namespace std;

    int pokok (int JamKerja) {
        return 7500 * JamKerja;
    }

    int lembur (int JamKerja) {
        int UangLembur;
        if (JamKerja > 8) {
            UangLembur = (JamKerja - 8) * 7500 * 1.5;
        } else {
            UangLembur = 0;
        }
        return UangLembur;
    }

    int makan (int JamKerja) {
        int UangMakan;
        if (JamKerja >= 9) {
            UangMakan = 10000;
        } else {
            UangMakan = 0;
        }
        return UangMakan;
    }

    int transport (int JamKerja) {
        int UangTransport;
        if (JamKerja >= 10) {
            UangTransport = 13000;
        } else {
            UangTransport = 0;
        }
        return UangTransport;
    }

    int main () {
        string nama;
        int NIP,Jam, JamKerja, Totalgaji;

        while (true) {

        cout << "====================================================" << endl;
        cout << " SELAMAT DATANG DI PROGRAM GAJI KARYAWAN DI PT. XYZ " << endl;
        cout << "====================================================" << endl << endl;

        cout << "-----------------------------" << endl;
        cout << "Masukan Informasi Diri Anda :" << endl;
        cout << "-----------------------------" << endl << endl;
        cout << "Masukan NIP        : ";
        cin >> NIP;
        cout << "Masukan Nama       : ";
        cin >> nama;
        cout << "Masukan Jam Kerja  : ";
        cin >> Jam;
        cout << endl;
        Totalgaji = pokok(Jam) + lembur(Jam) + makan(Jam) + transport(Jam);

        cout << "==========IDENTITAS DATA KARYAWAN==========" << endl << endl;
        cout << "NIP             : " << NIP << endl;
        cout << "Nama Karyawan   : " << nama << endl;
        cout << "Total Jam Kerja : " << Jam << endl << endl;

        cout << "=========LIST GAJI HARIAN KARYAWAN=========" << endl << endl;
        cout << "1.  Gaji Pokok     : Rp. " << pokok(Jam) << endl;
        cout << "2.  Uang Lembur    : Rp. " << lembur(Jam) << endl;
        cout << "3.  Uang Makan     : Rp. " << makan (Jam) << endl;
        cout << "4.  Uang Transport : Rp. " << transport (Jam) << endl << endl;

        cout << "----------------------------------------" << endl;
        cout << "Total Keseluhuhan  : Rp. " << Totalgaji << " /Hari" << endl;
        cout << "----------------------------------------" << endl<< endl;

        cout << "Jika ingin kembali ke menu utama, klik ENTER";
        cin.ignore();
        cin.get();

        cout << "Terimakasih telah menggunakan program ini :)" << endl << endl << endl;
        }
        return 0;
    }
