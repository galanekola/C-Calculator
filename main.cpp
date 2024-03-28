#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int>wyniki;

void Calculator ()
{

    float x1;
    float x2;
    float wynik;
    float potega;
    float stopien_pierwiatska;
    char wybor;
    int reszta_z_dzielenia;
    string Q;
    int wybierz_wynik;
    int rozmiar;
    int wyraz_ciagu;
    int suma = 0;


    cout<<"Wybierz operacje"<<endl;
    cout<<"1 - dodawanie"<<endl;
    cout<<"2 - odejmowanie"<<endl;
    cout<<"3 - mnozenie"<<endl;
    cout<<"4 - dzielenie"<<endl;
    cout<<"5 - potegowanie"<<endl;
    cout<<"6 - pierwiastkowanie"<<endl;
    cout<<"7 - wyswietl wybrany wynik"<<endl;
    cout<<"Q - wyjscie"<<endl;
    cout<<"8 - suma n podanych wyrazow ciagu"<<endl;
    cin>>wybor;


    if (wybor>'0' && wybor<'5')
    {
        cout<<"Podaj pierwsza liczbe"<<endl;
                cin>>x1;
        cout<<"Podaj druga liczbe"<<endl;
                cin>>x2;
    }

    if (wybor=='5')
    {
        cout<<"Podaj liczbe"<<endl;
                cin>>x1;
        cout<<"Podaj potege do ktorej chcesz podniesc liczbe "<<endl;
                cin>>potega;
    }
    if (wybor=='6')
    {
        cout<<"Podaj liczbe"<<endl;
                cin>>x1;
        cout<<"Podaj stopien pierwiastka"<<endl;
                cin>>potega;
    }

    switch (wybor)
    {
        case '1':
        {
            wynik = x1+x2;
            break;

        }
        case '2':
        {
            wynik = x1-x2;
            break;
        }
        case '3':
        {
            wynik = x1*x2;
            break;
        }
        case '4':
        {
            if (x2==0)
            {
                cout<<"Nie mozna wykonac dzielenia przez zero"<<endl;
                return;
            }
            wynik = x1/x2;
            break;
        }
        case '5':
        {
            wynik = pow(x1,potega);
            break;
        }
        case '6':
        {
            if (x1<0)
            {
                cout<<"Nie mozna pierwiastkowac liczb ujemnych"<<endl;
                return;
            }
            wynik = pow(x1,(1/potega));
            break;
        }
        case 'q':
        {
            exit (0);
        }
        case '7':
        {
            cout<<"Ktory wynik chcesz wyswietlic?"<<endl;
            cin>>wybierz_wynik;
            cout<<"Wynik: "<<wybierz_wynik<<"wynosi: "<<wyniki[wybierz_wynik-1]<<endl;
            break;
        }
        case '8':
        {

            cout<<"Ile wyrazow bedzie mial twoj ciag?"<<endl;
            cin>>rozmiar;

            for (int i=0; i<rozmiar; i++)
            {
                cout<<"Podaj kolejny wyraz ciagu"<<endl;
                cin>>wyraz_ciagu;
                suma += wyraz_ciagu;

            }
            cout<<"Suma " <<rozmiar<<" wyrazow ciagu wynosi: "<<suma<<endl;
            break;
            }
    }
    if(wybor != '7' && wybor != '8')
        cout<<"Wynik dzialania wynosi: "<<wynik<<endl;

    if (wybor =='4')
    {
        reszta_z_dzielenia = (int)x1%(int)x2;
        cout<<"Reszta z dzielenia wynosi:"<<" "<<reszta_z_dzielenia<<endl;
    }

    if(wybor != '7' && wybor != '8')
        wyniki.push_back(wynik);

    if (wyniki.size()>10)
        wyniki.erase(wyniki.begin());

}

int main()
{
    for (;;)
    {
        Calculator ();
    }
    return 0;
}
