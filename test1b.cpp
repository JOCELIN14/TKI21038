#include <iostream>

using namespace std;

int main(){
    int no =1;
    string command;

    cout << "Apakah anda ingin mencetak? ";
    getline (cin,command);

while ( command != "exit")
    {
       cout << "Program C++ ke " <<no <<"\nApakah anda ingin mencetak? ";
    cin>>command; 
    no=no+1;
    }
    
    cout << "Selesai";
    
}