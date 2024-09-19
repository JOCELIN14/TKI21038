#include <iostream>
using namespace std;

/*fungsi untuk menghitung faktorial
fungsi yang dibuat pengguna ditulis sebelum fungsi utama
*/


int faktorial(int N){
  int i, fak = 1;

  for(i= N; i>=1; i--){
    fak = fak*i;
  }
  return fak;
}

  //fungsi main() adalah fungsi utama yang dieksekusi pertama

  int main() {
    int fa, nilai;

    cout<<"Ketikkan angka : ";
    cin>> nilai;

    //memanggil fungsi untuk menghitung faktorial
    fa = faktorial(nilai); // kembalian dari nilai fak

    cout<<"faktorial dari "<<nilai<<"adalah "<<fa<<endl;
  }