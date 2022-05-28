
#include<iostream>
#include<math.h>

using namespace std;

float angka1,angka2,hasil,sudut,bilangan;

int main()
{
	int operasi;
    while(operasi!=15){
    cout<<"\n\n*************************************** \n";
    cout<<"         SCIENTIFIC CALCULATOR \n";
    cout<<"*************************************** \n";
    cout<<"silahkan pilih operasi yang diinginkan: \n";
    cout<<" 1. Addition (Penjumlahan) \n 2. Subtraction (Pengurangan) \n 3. Division (Pembagian) \n 4. Multiplication (Perkalian) \n 5. Sin \n 6. Cos \n 7. Tan \n 8. Eksponen \n 9. Square root (Akar kuadrat) \n 10. inverse sin \n 11. inverse cos \n 12. invers tan \n 13. derajat ke radian\n 14. radian ke derajat\n 15. Exit\n";
    cout<<"-----------------------------------------------------------------\n ";
    cout<<"Ketik angka pada operasi yang diinginkan untuk melakukan operasi \n ";
    cout<<"-----------------------------------------------------------------\n ";
    cin>>operasi;
    while(!(operasi==1||operasi==2||operasi==3||operasi==4||operasi==5||operasi==6||operasi==7||operasi==8||operasi==9||operasi==10||operasi==11||operasi==12||operasi==13||operasi==14||operasi==15)){
        cout<<"Masukkan angka dari 1-13 !\n";
        cin>>operasi;
    }
    if (operasi == 1){
        cout<<"Masukkan angka ke-1 : ";
        cin>>angka1;
        cout<<"Masukkan angka ke-2 : ";
        cin>>angka2;
        hasil = angka1 + angka2;
        cout<<"Nilai "<<angka1<<" + "<<angka2<<" = "<<hasil;      
    }
    if (operasi == 2){
        cout<<"Masukkan angka ke-1 : ";
        cin>>angka1;
        cout<<"Masukkan angka ke-2 : ";
        cin>>angka2;
        hasil = angka1 - angka2;
        cout<<"Nilai "<<angka1<<" - "<<angka2<<" = "<<hasil;      
    }
    if (operasi == 3){
        cout<<"Masukkan angka yang akan dibagi : ";
        cin>>angka1;
        cout<<"Masukkan angka pembagi : ";
        cin>>angka2;
        hasil = angka1 / angka2;
        cout<<"Nilai "<<angka1<<" / "<<angka2<<" = "<<hasil;
    }
    if(operasi==4){
        cout<<"Masukkan angka ke-1 : ";
        cin>>angka1;
        cout<<"Masukkan angka ke-2 : ";
        cin>>angka2;
        hasil=angka1*angka2;
        cout<<angka1<<" * "<<angka2<<" = "<<hasil;
    }
    if (operasi == 5){
        cout<<"Masukkan besar sudut dalam radian: ";
        cin>>sudut;
        cout<<"nilai sin dari sudut " <<sudut<<" adalah "<<sin(sudut);
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
    if(operasi==8){
        cout<<"Pilih :\n 1. e^x\n 2. x^y\n";
        int a;
        cin>>a;
        while(!(a==1 || a==2)){
            cout<<"Pilih 1 atau 2 !\n";
            cin>>a;
        }
        if(a==1){
            cout<<"Masukkan nilai x : ";
            cin>>angka1;
            cout<<"hasil dari e^"<<angka1<<"="<<exp(angka1);
        }
        if(a==2){
            cout<<"Masukkan nilai x : ";
            cin>>angka1;
            cout<<"Masukkan nilai y : ";
            cin>>angka2;
            cout<<"hasil dari "<<angka1<<"^"<<angka2<<" = "<<pow(angka1,angka2);
        }
    }
    if (operasi == 9){
    cout<<"Masukkan angka: ";
    cin>>bilangan;
    cout<<"akar dari angka " <<bilangan<<" adalah "<< sqrt(bilangan);
    }
    if(operasi == 10){
        cout<<"Masukkan besar sudut dalam radian: ";
        cin>>sudut;
        cout<<"Nilai arcsin(" <<sudut<<") = "<< asin(sudut);
    }
    if(operasi == 11){
        cout<<"Masukkan besar sudut dalam radian: ";
        cin>>sudut;
        cout<<"Nilai arccos (" <<sudut<<") = "<< acos(sudut);
    }
    if(operasi==12){
        cout<<"Masukkan nilai tan yang akan di inverse : ";
        cin>>angka1;
        cout<<"hasil arctan("<<angka1<<") = "<<atan(angka1);
    }
    if(operasi==13){
        cout<<"Masukkan nilai derajat yang akan dikonversi : ";
        cin>>angka1;
        cout<<angka1<<" derajat = "<<angka1*M_PI/180<<" radian";
    }
    if(operasi==14){
        cout<<"Masukkan nilai radian yang akan dikonversi : ";
        cin>>angka1;
        cout<<angka1<<" radian = "<<angka1*180/M_PI<<" derajat";
    }
    }
    return 0;
}

