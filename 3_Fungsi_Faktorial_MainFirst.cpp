#include<iostream>
using namespace std;

//fungsi main () adalah fungsi yang di eksekusi pertama
int main(){
    int fak,nilai;

    //deklarasi fungsi dibutuhkan jika nilai buatan pengguna dituliskan setelah fungsi main ()
    int faktorial(int nilai);

    cout<<"Ketikan angka : ";
    cin>>nilai;

    //memanggil fungsi untuk menghitung faktorial
    fak = faktorial(nilai);

    cout<<"faktorial dari "<<nilai<<"adalah "<<fak<<endl;
}

/*fungsi untuk menghitung faktorial
fungsi yang dibuat penggguna ditulis setelah fungsi utama
*/

int faktorial(int N){
    int i, fak = 1;

    for(i = N; i>=1; i--){
        fak = fak*i;
    }
    
    return fak;
}