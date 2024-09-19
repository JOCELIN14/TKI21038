#include<iostream>
using namespace std;

/*fungsi untk menghitung faktorial
fungsi yg dibuat pengguna ditulis sebelum fungsi utama
*/

void faktorial(int N){
    int i, fak = 1;

    for(i = N; i>=1; i--){
        fak = fak*i;
    }

    cout<<"Faktorial dari "<<N<<" adalah "<<fak<<endl;
}

//fungsi main () adalah fungsi utama yg dieksekusi pertama
int main(){
    int fak, nilai;

    cout<<"Ketikkan angka : ";
    cin>>nilai;

    // memanggil fungsi untuk menghitung faktorial
    faktorial(nilai);

}