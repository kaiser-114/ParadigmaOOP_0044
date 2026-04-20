#include <iostream>
using  namespace std;

class barang{
    
    public :
        string nama;
        string tanggalproduksi;
        int jumlah;

        void printData(){
            cout << "Merk : " << nama << endl;
            cout << "Tipe : " << tanggalproduksi << endl;
            cout << "Jumlah : " << jumlah << endl;
        }
}; //batas class

int main(){
    barang elektronik;
    elektronik.nama = "TV";
    elektronik.tanggalproduksi = "2023-06-01";
    elektronik.jumlah = 10;

    elektronik.printData();

    barang nonelektronik;
    nonelektronik.nama = "Meja";
    nonelektronik.tanggalproduksi = "2023-06-01";
    nonelektronik.jumlah = 5;

    nonelektronik.printData();
}