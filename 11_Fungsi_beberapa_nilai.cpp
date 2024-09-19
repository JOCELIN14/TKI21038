#include<iostream>
#include<math.h>
using namespace std;

//mengembalikan bebrapa nilai dr fungsi di c++
//menggunakan parameter referensi

void tabung(float t,float r, float &luas,float &volume){
    const float phi = 3.14; //const menjaga agar nilai tdk berubah
    luas = 2 * phi * pow(r,2) + 2 * phi * r * t;
    volume = phi * pow(r,2) * t;

    cout<<"Luas = "<<luas<<endl;
    cout<<"Volume = "<<volume<<endl;
}

int main (){
    float tinggi,radius,luas,volume;

    cout<<"Ketikkan tinggi tabung: ";
    cin>>tinggi;

    cout<<"Ketikkan radius: ";
    cin>>radius;

    tabung(tinggi,radius,luas, volume);

}