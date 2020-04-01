#include<iostream>
using namespace std;

class kalkulator{
      void_tambah();
      void_kurang();
      void_kali();
      void_bagi();
}

void_kurang()
{  
    int a, b;
    
    cout<<"Masukkan Bilangan Pertama : ";
    cin>>a;
    cout<<"Masukkan Bilangan kedua : ";
    cin>>b;
    cout<<"Hasil Pengurangan = "<<a - b;
}

main()
{
    void_kurang();
}
