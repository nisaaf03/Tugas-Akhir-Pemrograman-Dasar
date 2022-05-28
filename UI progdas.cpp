
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
	int operasi;
    cout<<"*************************************** \n";
    cout<<"         SCIENTIFIC CALCULATOR \n";
    cout<<"*************************************** \n";
    cout<<"silahkan pilih operasi yang diinginkan: \n";
    cout<<" 1. Addition (Penjumlahan) \n 2. Subtraction (Pengurangan) \n 3. Division (Pembagian) \n 4. Multiplication (Perkalian) \n 5. Sin \n 6. Cos \n 7. Tan \n 8. Eksponen \n 9. Square root (Akar kuadrat) \n 10. inverse sin \n 11. inverse cos \n 12. invers tan \n";
    cout<<"________________________________________________________________ \n ";
    cout<<"Ketik angka pada operasi yang diinginkan untuk melakukan operasi \n ";
    cin>>operasi;
    if (operasi == 5){
    cout<<"Masukkan besar sudut dalam radian: ";
    cin>>sudut;
    cout<<"nilai sin dari sudut " <<sudut<<" adalah "<< sin(sudut);
    }
    if (operasi == 9){
    cout<<"Masukkan angka: ";
    cin>>bilangan;
    cout<<"akar dari angka " <<bilangan<<" adalah "<< sqrt(bilangan);
    }
    return 0;
}
