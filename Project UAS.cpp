#include <iostream> // ini adalah sebuah header dmna cout dan cin akan berjalan membutuhkan header
using namespace std; // ini berfungsi untuk mempersingkat disaat kita mengetik cout dan cin

int main(){

    cout << " ================================" << endl;
    cout << " Nama      : ARIEL MAULIDIBILLAH" << endl;
    cout << " Kelas     : 1A" << endl;
    cout << " NIM       : 2230511029" << endl;
    cout << " Program   : UAS.cpp" << endl;
    cout << " ================================" << endl << endl << endl << endl;

    cout << " " << endl;
    const string Toko = "HONDA MOTOR";

    cout << " Selamat Datang Di - " << Toko << endl;
    cout << "  " << endl << endl;

    int pilih, totalMotor, jumlah, hasil = 0; // 4 variabel dengan tipe data int
    char pilihanMotor, yesNo; // 2 variabel dengan tipe data char atau karakter
    int diskon = 20; // tipe data int untuk variabel diskon
    int x=0; // tipe data int untuk menampung banyaknya array atau pembeli yg akan terhubung pada total akhir motor
    int totalAkhirMotor[x];

    cout << " SILAHKAN PILIH JENIS MOTOR" << endl;
    cout << " 1. MATIC" << endl;
    cout << " 2. SPORT" << endl;
    cout << " 3. CUB" << endl << endl;

    do {

        cout << " MASUKAN JENIS MOTOR YANG INGIN DI PILIH : ";
        cin >> pilih;

        switch (pilih){

    case 1:

        cout << " LIST JENIS MOTOR (MATIC)" << endl << endl;

        cout << " A. Scoopy    : Rp. 21,653,000" << endl;
        cout << " B. Vario 125 : Rp. 22,500,000" << endl;
        cout << " C. Vario 160 : Rp. 26,539,000" << endl;
        cout << " D. PCX 160   : Rp. 32,179,000" << endl << endl;

        cout << " MASUKAN MOTOR YANG INGIN DI PILIH : ";
        cin >> pilihanMotor;

        if (pilihanMotor == 'A' || pilihanMotor == 'a'){
            totalMotor=21653000;
        }else if (pilihanMotor == 'B' || pilihanMotor == 'b'){
            totalMotor=22500000;
        }else if (pilihanMotor == 'C' || pilihanMotor == 'c'){
            totalMotor=26539000;
        }else if (pilihanMotor == 'D' || pilihanMotor == 'd'){
            totalMotor=32179000;
        }else {
        cout << " PILIHAN MOTOR TIDAK TERSEDIA" << endl << endl;
        }
        cout << " Berapa Banyak Motor Yang Dibeli ? : ";
        cin >> jumlah;

        totalAkhirMotor[x]=totalMotor*jumlah;

        cout << " Apakah Anda Ingin Membeli Lagi (Y/N)? : ";
        cin >> yesNo;

        break;

    case 2:

        cout << " LIST JENIS MOTOR (SPORT)" << endl << endl;

        cout << " A. CB150X    : Rp. 33,660,000" << endl;
        cout << " B. CRF150L   : Rp. 35,384,000" << endl;
        cout << " C. CBR150R   : Rp. 36,941,000" << endl;
        cout << " D. CBR250RR  : Rp. 62,850,000" << endl << endl;

        cout << " MASUKAN MOTOR YANG INGIN DI PILIH : ";
        cin >> pilihanMotor;

        if (pilihanMotor == 'A' || pilihanMotor == 'a'){
            totalMotor=33660000;
        }else if (pilihanMotor == 'B' || pilihanMotor == 'b'){
            totalMotor=35384000;
        }else if (pilihanMotor == 'C' || pilihanMotor == 'c'){
            totalMotor=36941000;
        }else if (pilihanMotor == 'D' || pilihanMotor == 'd'){
            totalMotor=62850000;
        }else {
        cout << " PILIHAN MOTOR TIDAK TERSEDIA" << endl << endl;
        }

        cout << " Berapa Banyak Motor Yang Dibeli ? : ";
        cin >> jumlah;

        totalAkhirMotor[x]=totalMotor*jumlah;

        cout << " Apakah Anda Ingin Membeli Lagi (Y/N)? : ";
        cin >> yesNo;

        break;

    case 3:

        cout << " LIST JENIS MOTOR (CUB)" << endl << endl;

        cout << " A. Revo           : Rp. 15,644,000" << endl;
        cout << " B. Supra X 125 FI : Rp. 18,785,000" << endl;
        cout << " C. GTR 150        : Rp. 24,637,000" << endl;
        cout << " D. Supercub C125  : Rp. 76,689,000" << endl << endl;

        cout << " MASUKAN MOTOR YANG INGIN DI PILIH : ";
        cin >> pilihanMotor;

        if (pilihanMotor == 'A' || pilihanMotor == 'a'){
            totalMotor=15644000;
        }else if (pilihanMotor == 'B' || pilihanMotor == 'b'){
            totalMotor=18785000;
        }else if (pilihanMotor == 'C' || pilihanMotor == 'c'){
            totalMotor=24637000;
        }else if (pilihanMotor == 'D' || pilihanMotor == 'd'){
            totalMotor=76689000;
        }else {
        cout << " PILIHAN MOTOR TIDAK TERSEDIA" << endl << endl;
        }

        cout << " Berapa Banyak Motor Yang Dibeli ? : ";
        cin >> jumlah;

        totalAkhirMotor[x]=totalMotor*jumlah;

        cout << " Apakah Anda Ingin Membeli Lagi (Y/N)? : ";
        cin >> yesNo;

        break;

        }x++;
    }while (yesNo == 'Y' || yesNo == 'y');
    cout << " " << endl;
    cout << " ********************************" << endl;
    cout << "         " << "PEMBAYARAN" << "      " << endl << endl;

    for (int i=0; i<x; i++){
        hasil = hasil + totalAkhirMotor[i];

    }

    cout << " Total Pesanan Motor :" << hasil << endl;
    cout << " Diskon Toko 20%     :" << hasil/diskon << endl;
    cout << " Total Bayar         :" << hasil - (hasil/diskon) << endl;
    cout << " ********************************" << endl << endl;

    cout << " ===============================" << endl;
    cout << " TERIMAKASIH ATAS KUNJUNGAN ANDA" << endl;
    cout << " ===============================" << endl << endl << endl;

    return 0;

}
