#include <iostream>
using namespace std;

int  gaji_pokok(int jam_kerja){
    
    
    if (jam_kerja<= 8)
    {
        jam_kerja*7500;
    }
    else if (jam_kerja > 8)
    {
        jam_kerja = 8;
        jam_kerja*7500;
    }   
}

int uang_lembur(int jam_kerja){

    if (jam_kerja>=8)
    {
        return (jam_kerja - 8)*7500*1.5;
    }
    else {
        return 0;
    }
    
}
int uang_makan(int jam_kerja){

    if ( jam_kerja=9)
    {
        return 10000;
    
    }
    else{
        return 0;
    }
}

int uang_transport (int jam_kerja){


    if (jam_kerja=10)

    {
        return 13000;
    }
    else {
        return 0;
    
    }
}

int main (){

    string nama;
    int jam_kerja, nip;

    cout<<"masukan nip : ";
    cin>> nip;

    cout<<"masukan nama : ";
    cin>> nama;
    cout<<"masukan jam kerja : ";
    cin>> jam_kerja;


    int  gajiPokok = gaji_pokok(jam_kerja);
    int  uangMakan = uang_makan(jam_kerja);
    int  uangTransport = uang_transport(jam_kerja);
    int  uangLembur = uang_lembur(jam_kerja);

    cout<<"\n nip : " << nip <<endl;
    cout<<"\n nama :"<<nama<<endl;
    cout<<"\n gaji pokok :"<<gajiPokok<<endl;
    cout<<"\n uang transport :"<<uangTransport<<endl;
    cout<<"\n uang lembur:"<<uangTransport<<endl;

    return 0;
}