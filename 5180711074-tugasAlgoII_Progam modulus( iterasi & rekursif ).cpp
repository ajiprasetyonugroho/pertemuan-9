#include <iostream>
using namespace std;

double rekursif(int angka1, int angka2);
double iterasi (int angka1, int angka2);
main(){
int angka1,angka2;

cout<<"\n==================================================";
cout<<"\nProgam Modulus dengan menggunakan metode REKURSIF ";
cout<<"\n==================================================";
cout<<endl;

cout<<"masukkan angka : ";cin>>angka1;
cout<<"masukan angka  : ";cin>>angka2;
rekursif(angka1,angka2);
iterasi (angka1,angka2);
}

double rekursif(int angka1, int angka2){
double total;

    if      (angka1==0){
        return 0;
    }
    else if (angka1>=0){
        total=angka1%angka2;
    }
    else if (angka1<=0){
        total=angka1%angka2;
    }
        cout<<"SISA (REKURSIF) : "<<total;
}

double iterasi (int angka1, int angka2){
int hasil=1;

for(int i =0;i<1;i++)
{
    hasil=hasil*angka1%angka2;
    cout<<"\nSISA (ITERASI) : "<<hasil;
}



}
