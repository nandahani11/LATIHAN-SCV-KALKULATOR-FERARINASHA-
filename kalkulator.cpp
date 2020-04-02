#include<iostream>
using namespace std;

class kalkulator{
      void_tambah();
      void_kurang();
      void_kali();
      void_bagi();
}

void_tambah(){                     //method penjumlahan
      int a, b;
      
      cout<<"OPERASI PENJUMLAHAN"<<endl<<endl;
      cout<<"Masukkan Angka pertama : ";
      cin>>a;
      cout<<"Masukkan Angka kedua  : ";
      cin>>b;
      cout<<"Hasil Penjumlahan : "<< a + b;
  }

void_kurang(){                    //method pengurangan
    int a, b;
    
    cout<<"OPERASI PENGURANGAN"<<endl<<endl;
    cout<<"Masukkan Bilangan Pertama : ";
    cin>>a;
    cout<<"Masukkan Bilangan kedua : ";
    cin>>b;
    cout<<"Hasil Pengurangan = "<<a - b;
}

 void kali(){                      //method perkalian
        int x, y;
   
        cout<<"OPERASI PERKALIAN"<<endl<<endl;
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << "Hasil Perkalian : " << x * y << endl;
    }

main()
{ 
  // hilangkan komen pada salah satu method untuk menggunakan salah satu operasi kalkulatornya
  // void_tambah(); 
  // void_kurang();
  // void_kali();
}
