
        /*                             UTS PRAKTIKUM ALGORTIMA
                        NAMA : KADEK WIRA ADHI KUSUMA PRATAMA
                        NIM  : 210040131
                        PROGRAM PEMBELIAN TIKET PESAWAT
        */


#include <iostream>
using namespace std;


void garuda() // menggunakan fungtion void
{
    cout<<" 1) Garuda Indonesia "<<endl;
}

void lionAir() // menggunakan fungtion void
{
    cout<<" 2) Lion Air "<<endl;
}

void citilink()// menggunakan fungtion void
{
    cout<<" 3) Citilink "<<endl;
}
void kategori()// menggunakan fungtion void
{
    cout<<" LIST KATEGORI  : 1) EKONOMI "<<endl;
    cout<<"                  2) EXEKUTIF "<<endl;
    cout<<"                  3) BISNIS "<<endl;
}

int main() //return value method
{
    // mendeklarasikan tipedata dan varibel nya
    string nama;
    int jawab,umur;
    int a,harga,total;
    float jum_tiket;
    int pilihan,kode;
    char ulang;

//saya menggunakan do-while untuk perulangan
do{
    cout<<"------------------------------------------"<<endl;
    cout<<"   RUTE  :       BALI TO THAILAND          "<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<" LIST MASKAPAI YANG TERSEDIA : "<<endl;
    garuda(); //menaruh fungtion void di list
    lionAir();
    citilink();
    cout<<"------------------------------------------"<<endl;
    cout<<" Pilih Maskapai(1/2/3) : ";cin>>pilihan; //menginput maskapai apa yang di pilih
    system("cls"); // supaya setelah menginput maskapai , console akan di clear

    switch (pilihan) //menggunakan konditional switch case
    {
        case 1:
            cout<<"             GARUDA INDONESIA              "<<endl;
            cout<<"-------------------------------------------"<<endl;
            kategori();
            cout<<" PILIH KATEGORI(1/2/3) : ";cin>>kode; //input kategori yang ingin dipilih
                cout<<endl<<endl;;

                if(kode==1) //menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"          KATEGORI EKONOMI       "<<endl;


                    cout<<"--------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.3.000.000 / orang "<<endl;
                    cout<<"---------------------------------"<<endl;
                    cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket; //menginput jumlah tikrt yng dibeli

                        for(a=0;a<jum_tiket;a++) //menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama Lengkap : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : ";
                            cin>>umur; //cin umur



                            cout<<endl;
                            }
                    harga=3000000;
                    total=harga*jum_tiket;//rumus total
                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;

                }
               else if (kode==2) //menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"         KATEGORI EXEKUTIF        "<<endl;
                    cout<<"----------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.7.500.000 /orang "<<endl;
                     cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket;//menginput jumlah tikrt yng dibeli


                        for(a=0;a<jum_tiket;a++)//menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : ";
                            cin>>umur;//cin umur



                            cout<<endl;
                            }

                    harga=7500000;
                    total=harga*jum_tiket;//rumus
                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;
                }
                else if (kode==3) //menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"         KATEGORI BISNIS          "<<endl;
                    cout<<"----------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.13.000.000 /orang "<<endl;
                     cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket;//menginput jumlah tikrt yng dibeli


                        for(a=0;a<jum_tiket;a++)//menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : ";//cin umur
                            cin>>umur;

                            cout<<endl;
                            }
                    harga=13000000;
                    total=harga*jum_tiket;//rumus
                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;
                }

        break;
        case 2 :
            cout<<"              LION AIR                     "<<endl;
            cout<<"-------------------------------------------"<<endl;
            kategori();
            cout<<" PILIH KATEGORI(1/2/3) : ";cin>>kode;
                cout<<endl<<endl;;

                if(kode==1)//menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"          KATEGORI EKONOMI       "<<endl;


                    cout<<"--------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.2.600.000 / orang "<<endl;
                    cout<<"---------------------------------"<<endl;
                    cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket;//menginput jumlah tikrt yng dibeli


                        for(a=0;a<jum_tiket;a++)//menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : ";//cin umur
                            cin>>umur;



                            cout<<endl;
                            }
                    harga=600000;
                    total=harga*jum_tiket;//rumus
                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;

                }
                else if (kode==2)//menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"         KATEGORI EXEKUTIF        "<<endl;
                    cout<<"----------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.7.000.000 /orang "<<endl;
                     cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket;//menginput jumlah tikrt yng dibeli


                        for(a=0;a<jum_tiket;a++)//menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : ";//cin umur
                            cin>>umur;



                            cout<<endl;
                            }

                    harga=7000000;
                    total=harga*jum_tiket;//rumus
                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;
                }
                else if (kode==3)//menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"         KATEGORI BISNIS          "<<endl;
                    cout<<"----------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.22.000.000 /orang "<<endl;
                     cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket;//menginput jumlah tikrt yng dibeli


                        for(a=0;a<jum_tiket;a++)//menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : "; //cin umur
                            cin>>umur;

                            cout<<endl;
                            }
                    harga=22000000;
                    total=harga*jum_tiket;//rumus

                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;
                }

        break;
        case 3 : cout<<"             CITILINK                 "<<endl;
            cout<<"-------------------------------------------"<<endl;
            kategori();
            cout<<" PILIH KATEGORI(1/2/3) : ";cin>>kode;
                cout<<endl<<endl;;

                if(kode==1)//menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"          KATEGORI EKONOMI       "<<endl;


                    cout<<"--------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.2.700.000 / orang "<<endl;
                    cout<<"---------------------------------"<<endl;
                    cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket;//menginput jumlah tikrt yng dibeli


                        for(a=0;a<jum_tiket;a++)//menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : ";//cin umur
                            cin>>umur;



                            cout<<endl;
                            }
                    harga=2700000;
                    total=harga*jum_tiket;//rumus
                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;

                }
                else if (kode==2)//menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"         KATEGORI EXEKUTIF        "<<endl;
                    cout<<"----------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.4.200.000 /orang "<<endl;
                     cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket;//menginput jumlah tikrt yng dibeli


                        for(a=0;a<jum_tiket;a++)//menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : ";//cin umur
                            cin>>umur;



                            cout<<endl;
                            }

                    harga=4200000;
                    total=harga*jum_tiket;//rumus
                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;
                }
                else if (kode==3)//menggunakan konditional if else yang di input dari kategori
                {
                    cout<<"         KATEGORI BISNIS          "<<endl;
                    cout<<"----------------------------------"<<endl;
                    cout<<"HARGA TIKET : Rp.22.800.000 /orang "<<endl;
                     cout<<"JUMLAH TIKET YANG DI BELI : ";
                    cin>>jum_tiket;//menginput jumlah tikrt yng dibeli


                        for(a=0;a<jum_tiket;a++)//menggunakan for untuk mengsisi biodata sesuai yang jumlah tiket
                            {
                            cout<<" Nama : ";//cin nama
                            cin.ignore();
                            getline(cin,nama);

                            cout<<" Umur : ";//cin umur
                            cin>>umur;


                            cout<<endl;
                            }
                    harga=22800000;
                    total=harga*jum_tiket;//rumus
                    cout<< "--------------------------------------" << endl;
                    cout<<" TOTAL TIKET : "<<jum_tiket<<endl;
                    cout<<" TOTAL BAYAR : "<<total<<endl;
                    cout<< "--------------------------------------" << endl;
                }

        break;

        default : //jika salah input
            {
                cout<<" ! SALAH INPUT DAN UALNG KEMBALI !"<<endl;
            }
    }

            cout<<" APAKAH ANDA INGIN MENGULANG (y/t) ";//perulangan
            cin>>ulang;
            cout<<endl;
            system("cls");

            }
            while(ulang!='t');//jika tidak ,selesai
            cout<<" TERIMA KASIH "<<endl;


    return 0;
}
