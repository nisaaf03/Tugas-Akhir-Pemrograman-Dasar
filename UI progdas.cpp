#include<iostream>

using namespace std;

float angka1,angka2,hasil;

int main()
{
	int operasi;
    cout<<"*************************************** \n";
    cout<<"         SCIENTIFIC CALCULATOR \n";
    cout<<"*************************************** \n";
    cout<<"silahkan pilih operasi yang diinginkan: \n";
    cout<<" 1. Addition (Penjumlahan) \n 2. Subtraction (Pengurangan) \n 3. Division (Pembagian) \n 4. Multiplication (Perkalian) \n 5. Sin \n 6. Cos \n 7. Tan \n 8. Eksponen \n 9. Square root (Akar kuadrat) \n 10. inverse sin \n 11. inverse cos \n 12. invers tan \n";
    cout<<"-----------------------------------------------------------------\n ";
    cout<<"Ketik angka pada operasi yang diinginkan untuk melakukan operasi \n ";
    cout<<"-----------------------------------------------------------------\n ";
    cin>>operasi;

    if (operasi == 1){
        cout<<"Masukkan angka pertama yang akan dijumlah : ";
        cin>angka1;
        cout<<"Masukkan angka kedua yang akan dijumlah : ";
        cin>angka2;
        hasil = angka1 + angka2;
        cout<<"Nilai "<<angka1<<" + "<<angka2<<" = "<<hasil;      
    }
    if (operasi == 2){
        cout<<"Masukkan angka ke-1 : ";
        cin>angka1;
        cout<<"Masukkan angka ke-2 : ";
        cin>angka2;
        hasil = angka1 - angka2;
        cout<<"Nilai "<<angka1<<" - "<<angka2<<" = "<<hasil;      
    }
    if (operasi == 3){
        cout<<"Masukkan angka yang akan dibagi : ";
        cin>angka1;
        cout<<"Masukkan angka pembagi : ";
        cin>angka2;
        hasil = angka1 / angka2;
        cout<<"Nilai "<<angka1<<" / "<<angka2<<" = "<<hasil;
    }
    if (operasi == 5){
        cout<<"Masukkan besar sudut dalam radian: ";
        cin>>sudut;
        cout<<"nilai sin dari sudut " <<sudut<<" adalah "<< sin(sudut);
    }
    if(operasi == 6){
        cout<<"Masukkan besar sudut dalam radian: ";
        cin>>sudut;
        cout<<"Nilai cos (" <<sudut<<") = "<< cos(sudut);
    }
    if(operasi == 7){
        cout<<"Masukkan besar sudut dalam radian: ";
        cin>>sudut;
        cout<<"Nilai tan (" <<sudut<<") = "<< tan(sudut);
    }
    if (operasi == 9){
        cout<<"Masukkan angka: ";
        cin>>angka1;
        cout<<"akar dari angka " <<angka1<<" adalah "<< sqrt(angka1);
    }
    if (operasi == 10){
        cout<<"Masukkan besar sudut dalam radian : ";
        cin>>angka1;
        cout<<"akar dari arcsin " <<sudut<<" adalah "<< sqrt(sudut);
    }
    if(operasi == 11){
        cout<<"Masukkan besar sudut dalam radian: ";
        cin>>sudut;
        cout<<"Nilai arccos (" <<sudut<<") = "<< acos(sudut);
    }
    else{
        cout<<"Operasi tidak valid"
    }

    return 0;
}

