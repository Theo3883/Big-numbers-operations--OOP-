#include <bits/stdc++.h>
#include "numerem.h";
ifstream fin("fisier_numere");
using namespace std;
numerem x,y;
int c;
void menu()
{
    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<"Rezolvati probleme cu numere mari rapid cu ajutorul calculatorului!"<<'\n';
    cout<<'\t'<<"Sa incepem intai cu citirea numerelor mari  "<<'\n'<<'\n';
    cout<<'\t'<<"De unde doriti sa cititi numerele?"<<'\n'<<'\n';
    cout<<'\t'<<"1. V-ati gandit dumneavostra la 2 numere mari"<<'\n'<<'\n';
    cout<<'\t'<<"2. Folositi numerele din fisierul dat"<<'\n'<<'\n';
    cout<<'\t'<<"3. V-ati razgandit si doriti sa iesiti din program"<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<"Introduceti optiunea: ";
}
void menu2()
{

    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<""<<'\n';
    cout<<'\t'<<"Scrieti mai jos numerele mari: "<<'\n'<<'\n';
    cout<<'\t'<<"Primul numar este: ";
    cin>>x;
    cout<<'\n'<<'\n';
    cout<<'\t'<<"Al doilea numar este: ";
    cin>>y;
    cout<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<"Introduceti optiunea: ";
}
void menu3()
{
    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<"Ce doriti sa faceti in continuare?"<<'\n'<<'\n';
    cout<<'\t'<<"1. Verificati paritatea unui numar mare"<<'\n'<<'\n';
    cout<<'\t'<<"2. Comparati doua numere mari"<<'\n'<<'\n';
    cout<<'\t'<<"3. Adunati doua numere mari"<<'\n'<<'\n';
    cout<<'\t'<<"4. Scadeti doua numere mari"<<'\n'<<'\n';
    cout<<'\t'<<"5. Inmultiti cu un numar numerele mari date"<<'\n'<<'\n';
    cout<<'\t'<<"6. Iesire"<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<"Introduceti optiunea: ";
}
void menu4()
{

    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<""<<'\n';
    cout<<'\t'<<"Acesta a fost programul nostru!"<<'\n'<<'\n'<<'\n';
    cout<<'\t'<<"Realizat de Sandu Theodor si Ivascu Alexandru"<<'\n'<<'\n';
    cout<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';

}
void menucase1()
{
    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<""<<'\n';
    cout<<'\t'<<"Primul numar este: ";
    if(x%2==0)
        cout<<"par";
    else cout<<"impar";
    cout<<'\n'<<'\n';
    cout<<'\t'<<"Al doilea numar este: ";
    if(y%2==0)
        cout<<"par";
    else cout<<"impar";
    cout<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n'<<'\n';
    cout<<'\t'<<"Doriti sa mai faceti inca o operatie?"<<'\n'<<'\n';
    cout<<'\t'<<"1. Da"<<'\n'<<'\n';
    cout<<'\t'<<"2. Nu"<<'\n'<<'\n';
    cout<<'\t'<<"3. Introduceti doua noi numere"<<'\n'<<'\n';
    cout<<"Introduceti optiunea: ";
}
void menucase2()
{
    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<""<<'\n';
    cout<<'\t'<<"Numarul mai mare este: ";
    int z=x<y;
    if(z==-1)
    {
        cout<<"Primul numar dat: ";
        cout<<x;
    }
    if(z==0)
        cout<<"Numerele sunt egale";
    if(z==1)
    {
        cout<<"Al doilea numar dat: ";
        cout<<y;
    }
    cout<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n'<<'\n';
    cout<<'\t'<<"Doriti sa mai faceti inca o operatie?"<<'\n'<<'\n';
    cout<<'\t'<<"1. Da"<<'\n'<<'\n';
    cout<<'\t'<<"2. Nu"<<'\n'<<'\n';
    cout<<'\t'<<"3. Introduceti doua noi numere"<<'\n'<<'\n';
    cout<<"Introduceti optiunea: ";
}
void menucase3()
{
    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<""<<'\n';
    cout<<'\t'<<"Suma celor doua numere este: ";
    numerem z;
    z=x+y;
    cout<<z;
    cout<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n'<<'\n';
    cout<<'\t'<<"Doriti sa mai faceti inca o operatie?"<<'\n'<<'\n';
    cout<<'\t'<<"1. Da"<<'\n'<<'\n';
    cout<<'\t'<<"2. Nu"<<'\n'<<'\n';
    cout<<'\t'<<"3. Introduceti doua noi numere"<<'\n'<<'\n';
    cout<<"Introduceti optiunea: ";
}
void menucase4()
{
    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<""<<'\n';
    cout<<'\t'<<"Diferenta celor doua numere mari este: ";
    numerem z;
    z=x-y;
    cout<<z;
    cout<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n'<<'\n';
    cout<<'\t'<<"Doriti sa mai faceti inca o operatie?"<<'\n'<<'\n';
    cout<<'\t'<<"1. Da"<<'\n'<<'\n';
    cout<<'\t'<<"2. Nu"<<'\n'<<'\n';
    cout<<'\t'<<"3. Introduceti doua noi numere"<<'\n'<<'\n';
    cout<<"Introduceti optiunea: ";
}
void menucase5()
{
    system ("CLS");
    system("Color 0A");
    cout<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<""<<'\n';
    cout<<'\t'<<"Din prima inmultire rezulta numarul: ";
    numerem z;
    z=x*c;
    cout<<z;
    cout<<'\n'<<'\n';
    z=y*c;
    cout<<'\t'<<"Din a doua inmultire rezulta numarul: ";
    cout<<z;
    cout<<'\n'<<'\n';
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<'\n'<<'\n';
    cout<<'\t'<<"Doriti sa mai faceti inca o operatie?"<<'\n'<<'\n';
    cout<<'\t'<<"1. Da"<<'\n'<<'\n';
    cout<<'\t'<<"2. Nu"<<'\n'<<'\n';
    cout<<'\t'<<"3. Introduceti doua noi numere"<<'\n'<<'\n';
    cout<<"Introduceti optiunea: ";
}
int main()
{
    menu();
    int z;
    cin>>z;
    while(z!=1 && z!=2 && z!=3)
    {
        cout<<"Ati introdus o optiune invalida, mai incercati o data";
        cout<<"Introduceti optiunea: ";
        cin>>z;
    }
    if(z==3)
    {
        menu4();
        return 0;
    }
    if(z==2)
    {
        fin>>x>>y;
        menu3();
    }
    if(z==1)
    {
        menu2();
        menu3();
    }
    cin>>z;
    while(z!=6)
    {
        if(z==1)
            menucase1();
        if(z==2)
            menucase2();
        if(z==3)
            menucase3();
        if(z==4)
            menucase4();
        if(z==5)

        {
            cout<<"Introduceti numarul de o cifra cu care doriti sa inmultiti numerele mari: ";
            cin>>c;
            menucase5();
        }
        cin>>z;
        if(z==1)
            menu3();
        if(z==2)
            break;
        if(z==3)
        {
            menu2();
            menu3();
        }
        cin>>z;
    }
    menu4();
    return 0;
}
