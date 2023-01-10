//LotOfTasks

/*Podstawy programowania:

1. Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
2. Program obliczaj¹cy pole prostok¹ta.
3. Program obliczaj¹cy objêtoœæ sto¿ka.
4. Program obliczaj¹cy pole ko³a.
5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
7. Program obliczaj¹cy objêtoœæ kuli o promieniu r
8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
Instrukcja If:
1. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
2. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
4. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
6.Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
Pêtle:
1. Program sprawdzaj¹cy czy podana liczba jest liczb¹ pierwsz¹ (czyli tak¹, która dzieli siê tylko przez 1 i przez siebie sam¹)
2. Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
3. Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
4. Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹ (czyli tak¹, której suma dzielników (z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
Pêtla for:
1. Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
2. Program obliczaj¹cy sumê liczb od 1 do 100
3. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
4. Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
5. Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
6. Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
7. Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
8. Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
9. Program wyœwietlaj¹cy na ekranie kolejne potêgi 2 od 2^0 do 2^10 (np. 2^0, 2^1, 2^2 itd.)
10. Program wyœwietlaj¹cy na ekranie kolejne elementy ci¹gu a_n = a_{n-1} + a_{n-2}, gdzie a_0=1, a_1=1 (ci¹g ten zaczyna siê od 1, 1, 2, 3, 5, 8, 13 itd.).
Pêtla do-while:
1. Program pytaj¹cy u¿ytkownika o has³o i wyœwietlaj¹cy komunikat "has³o poprawne" lub "has³o niepoprawne" dopóki u¿ytkownik nie poda poprawnego has³a (np. "abc123").
2. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.
Trudniejsze zadania:
1. Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
2. Program obliczaj¹cy najwiêkszy wspólny dzielnik (NWD) dwóch liczb
3. Program obliczaj¹cy najmniejsz¹ wspóln¹ wielokrotnoœæ (NWW) dwóch liczb.
4. Program wyci¹gaj¹cy informacje z numeru PESEL
5. Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
Dla zaawansowanych:
1. Program implementuj¹cy algorytm generowania liczb pseudolosowych (np. algorytm Mersenne Twister).
2. Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
3. Algorytm szyfrowania Morse'a - algorytm szyfruj¹cy, w którym ka¿da litera w tekœcie jest zamieniana na ci¹g znaków "+" i "-", zgodny z kodem Morse'a.
4. Napisz program, który pobiera od u¿ytkownika dwie macierze kwadratowe o takim samym rozmiarze i wyœwietla ich iloczyn.
5. Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
6. Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
7. Napisz grê kó³ko i krzy¿yk.
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>

using namespace std;


/*1. Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.*/

void task1()
{

        int liczba1;
        int liczba2;
        int srednia;
        int ilosc_liczb = 2;

        cout << "podaj pierwsza liczbe" << endl;
        cin >> liczba1;
        cout << "podaj druga liczbe" << endl;
        cin >> liczba2;



        int wynik = (liczba1 + liczba2) / ilosc_liczb;
        cout << "Srednia podanych liczb = " << wynik << endl;


}
/*2. Program obliczaj¹cy pole prostok¹ta.*/
void task2()
{
    int a, b;


    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;

    int wynik = a * b;

    if(a>0 && b>0)
        cout << "Pole prostokata wynosi: " << wynik;
    else
        cout<<"Zadna z wartosci nie moze byc rowna 0";
}

/* 3.Program obliczaj¹cy objêtoœæ sto¿ka*/

void task3()
{
    double H,V,r    ;

    cout<<"Podaj promien stozka"<<endl;
    cin >> r;
    cout << "Podaj wysokosc stozka "<<endl;
    cin >> H;
    V = M_PI*(r*r)*H/3;
    cout << "Objetosc stozka wynosi = " << V;
}
//4. Program obliczaj¹cy pole ko³a.//
void task4()
{
    double P,r;

    cout<<"Podaj promien kola"<<endl;
    cin>> r;
    P=M_PI*(r*r);
    cout<<"Pole kola wynosi: "<<P<<endl;

}
//5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2//
void task5()
{
    int a,b,wynik;
    cout<<"Podaj a"<<endl;
    cin >> a;
    cout<<"Podaj b"<<endl;
    cin >> b;
    wynik=(a*a)+(b*b);
    cout<<"Wynik wynosi: "<<wynik<<endl;
}
//6. Program obliczajacy pole trójkata o podstawie b i wysokosci h//
void task6()
{
    float b,h,wynik;
    cout<<"Podaj dlugosc podstawy"<<endl;
    cin>>b;
    cout<<"Podaj wysokosc"<<endl;
    cin>>h;
    if(b>0 && h>0)
    cout<<"Pole trojkata wynosi: "<<b*h/2;
    else
        cout<<"Zadna z wartosci nie moze byc rowna 0";

}
/*7. Program obliczaj¹cy objêtoœæ kuli o promieniu r*/
/*  struct ulamek;
    float mianownik;
    float licznik;
    //cout<<"podaj mianownik"<<endl;
    cin>>mianownik;
    cout<<"podaj licznik"<<endl;
    cin>>licznik;
    cout<<"ulamek to: "<<mianownik/licznik<<endl;*/
void task7()
{
    double V,R;
    cout<<"Podaj promien kuli"<<endl;
    cin>>R;
    V=(4*M_PI*(R*R*R))/3;
    if(R>0)
        cout<<"Objetosc kuli wynosi: "<<V;
    else
        cout<<"Promien nie moze byc rowny 0!!"<<endl;
}
/* Program obliczajacy pole trapezu o podstawach a i b oraz wysokosci h*/
void task8()
{
    double a,b,h,pole;

    cout<<"Podaj dlugosc podstawy a"<<endl;
    cin >> a;
    cout <<"Podaj dlugosc podstawy b"<<endl;
    cin >> b;
    cout<<"Podaj dlugosc wysokosci h"<<endl;
    cin >> h;
    if(a>0&& b>0 && h>0)
        cout<<"Pole wynosi: "<<(a+b)*h/2<<endl;
    else
        cout<<"Zadna z wartosci nie moze byc rowna 0!!!"<<endl;

}
/*9. Program obliczajacy srednia wazona trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.*/
/*firstNumber waga1,secondNumber waga 2,thirdNumber waga3*/
void task9()
{
    int firstNumber,secondNumber,thirdNumber;
    float srednia,suma;

    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>firstNumber;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>secondNumber;
    cout<<"Podaj trzecia liczbe"<<endl;
    cin>>thirdNumber;
    suma=firstNumber+(2*secondNumber)+(3*thirdNumber);
    srednia=suma/6;


    if(firstNumber>0&&secondNumber>0&&thirdNumber>0)
        cout<<"Srednia wynosi: "<<srednia<<endl;
    else
        cout<<"Zadna z liczb nie moze byc rowna 0!!!!"<<endl;


}
/*Instrukcja if/*
/*1. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta*/

void task10()
{
    int firstNumber;

    cout<<"Program sprawdzajacy czy podana liczba jest parzysta czy nieparzysta\n"<<endl;
    cout<<"Podaj liczbe"<<endl;
    cin>>firstNumber;

    if(firstNumber%2==0)
         cout<<"Liczba parzysta"<<endl;
    else
         cout<<"Liczba nieparzysta"<<endl;
}
/*2.Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero*/
void task11()
{

    int firstNumber;
    cout<<"Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero\n"<<endl;
    cout<<"Podaj liczbe"<<endl;
    cin>>firstNumber;

    if(firstNumber>0)
        cout<<"Liczba jest dodatnia"<<endl;
    else if (firstNumber==0)
        cout<<"Liczba jest rowna zero"<<endl;
    else
        cout<<"Liczba jest ujemna"<<endl;

}
void task12()
/*3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym*/
{
    int rok;
    cout<<"Program sprawdzajacy czy podany rok jest rokiem przestepnym\n"<<endl;
    cout<<"Podaj rok do sprawdzenia"<<endl;
    cin>>rok;


    if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) {
        cout << rok << " jest rokiem przestepnym." << endl;
    } else {
        cout << rok << " nie jest rokiem przestepnym." << endl;
    }
}
void task13()
/*4. Program wyœwietlajacy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)*/
{
    int ocena;

    cout<<"Program wyswietlajacy odpowiedni komunikat w zaleznosci od podanej oceny\n"<<endl;
    cout<<"Podaj ocene do sprawdzenia"<<endl;
    cin>>ocena;

    if (ocena==6)
        cout<<"Celujacy"<<endl;
    else if(ocena==5)
         cout<<"Bardzo dobry"<<endl;
    else if (ocena==4)
        cout<<"Dobry"<<endl;
    else if (ocena==3)
         cout<<"Dostateczny"<<endl;
    else if (ocena==2)
        cout<<"Dopusczajacy"<<endl;
    else if (ocena==1)
        cout<<"Niedostateczny"<<endl;
    else
        cout<<"PODANO ZLA WARTOSC"<<endl;

}
void task14()
/*Program sprawdzaj¹cy czy podane has³o jest poprawne
(np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").*/
{
    string password;

    cout<<"Program sprawdzajacy czy podane haslo jest poprawne\n"<<endl;
    cout<<"Podaj haslo"<<endl;
    cin>>password;

    if(password=="abc123")
        cout<<"haslo poprawne"<<endl;
    else
        cout<<"haslo niepoprawne"<<endl;
}
/*6.Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)*/
void task15()
{
    int miesiac, dzien,rok,data;

    cout<<"Program sprawdzajacy czy podana data jest poprawna"<<endl;
    cout<<"Podaj dzien"<<endl;
    cin>>dzien;
    cout<<"Podaj miesiac"<<endl;
    cin>>miesiac;
    cout<<"Podaj rok"<<endl;
    cin>>rok;
    data=dzien+miesiac+rok;
    if((dzien>0&&dzien<=31)&&(miesiac>0&&miesiac<=12)&&(rok>0 && rok<=2023))
        cout<<"Podana data jest poprawna"<<endl;
    else
        cout<<"Podana data jest niepoprawna!"<<endl;
}
/*Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury
(np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)*/
void task16()
{
    int temperature;

    cout<<"Program wyswietlajacy odpowiedni komunikat w zaleznosci od podanej temperatury\n"<<endl;
    cout<<"Podaj temperature"<<endl;
    cin>>temperature;

    if(temperature<10)
        cout<<"chlodno"<<endl;
    else if(temperature>20)
        cout<<"cieplo"<<endl;
    else
        cout<<"Umiarkowanie"<<endl;

}




/*Pêtla do-while:
1. Program pytaj¹cy u¿ytkownika o has³o i wyœwietlaj¹cy komunikat "has³o poprawne" lub "has³o niepoprawne" dopóki u¿ytkownik nie poda poprawnego has³a (np. "abc123").
2. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000*/

void task_1()
{
    string password;


    do{

        cout<<"Podaj haslo"<<endl;
        cin>>password;

        if(password=="abc123")
        {
             cout<<"haslo poprawne"<<endl;
        }
        else{
            cout<<"haslo niepoprawne"<<endl;
        }

    }while(password!="abc123");
}

void task_2()
{
    int sum = 0;
    int i = 1;

    do
    {
        sum += i * i;
        cout << i * i << endl;
        i++;
    } while (sum <= 1000);
}

/*Pêtla for:
1. Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10*/
void task_3()
{
    for(int i=1;i<11;i++)
    {
        cout<<i<<endl;
    }
}
/*2. Program obliczaj¹cy sumê liczb od 1 do 100*/
void task_4()
{
    int c;
    int b;
    int a;

    for (int c=a; c<=b; c++)
    {
        cout<<a<<endl;
    }
}
int main()
{

    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
    //task14();
    //task15();
    //task16();
    //task17();
    //task_1();
    //task_2();
    //task_3();
    task_4();

}
