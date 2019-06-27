#include <iostream>
#include <string>
#include <math.h>

using namespace std;

 double a, b, c, p, q, delta, x1, x2;
     int liczba;



void funkcje_programu()
{


      cout << endl << "----------------------------------------" << endl;
      cout << "[1] Licz postac kanoniczna z ogolnej." << endl;
      cout << "[2] Licz postac ogolna z kanonicznej." << endl;
      cout << "[0] Wyjdz z programu." << endl;
}

double pobierz(double liczba){
       while(!(cin>>liczba)){
            cout << "Podaj poprawna wartosc: ";
  cin.clear();
  cin.sync();}
  return liczba;
       }

void parametry()
{
         cout    << endl  << endl  << "Parametry:" << endl;

    cout << "Dziedzina: Rzeczywista" << endl;
    cout << "Zbior wartosci: <";
    if(a<0) cout << q << ",-oo)" <<  endl;
    else cout << q << ",+oo)" << endl;
    cout << "Pierwiastek z delty: " << sqrt(delta) << endl;
    cout << "Miejsce zerowe: ";
  if(delta > 0)
  {
     x1 = (-b - sqrt(delta)) / (2*a);
     x2 = (-b + sqrt(delta)) / (2*a);
     cout << "x=" << x1 << " x=" << x2 << endl;

     cout << "f(x)>0 dla x: ";
     if(a>0) cout << "(-oo," << x1 <<"),(" << x2 << "+oo)";
     else cout << "(" << x1 << "," << x2 << ")";
        cout << endl << "f(x)<0 dla x: ";
     if(a>0) cout << "(" << x1 << "," << x2 << ")";
  else cout << "(-oo," << x1 <<"),(" << x2 << "+oo)";
     cout << endl;


  }else if(delta = 0)
  {
        cout << "x=" << p << endl;
        cout << "f(x)>0 dla x: ";
        if(a>0) cout << "Zbior Rzeczywisty / {" << p <<"}";
        else  cout << "Zbior Pusty";

        cout << endl << "f(x)<0 dla x: ";
       if(a>0)  cout << "Zbior Pusty";
       else cout << "Zbior Rzeczywisty / {" << p <<"}";


}else
{
     cout << "Brak miejsc zerowych!" << endl;
     cout << "f(x)>0 dla x: ";
    if(a>0) cout << "Zbior Rzeczywisty";
        else  cout << "Zbior Pusty";


          cout << endl << "f(x)<0 dla x: ";
        if(a<0) cout << "Zbior Rzeczywisty";
        else  cout << "Zbior Pusty";

}

    cout<<endl << "Funkcja rosnaca: ";
    if(a<0) cout << "(-oo," << p << ">" << endl;
    else if(a>0) cout << "<" <<  p  <<",+oo)" << endl;
    cout << "Funkcja malejaca: ";
    if(a>0) cout << "(-oo," << p << ">";
    else if(a<0) cout << "<" <<  p  <<",+oo)";
    cout << endl;
    if(a<0) cout << "Wartosc minimalna: ";
    if (a>0) cout << "Wartosc maksymalna: ";
      cout << "y=" << q << " dla x=" << p << endl;
      cout << "Wierzcholek: (" << p <<","<< q << ")"<< endl;
     cout << "Postac iloczynowa: ";
     if(delta > 0)
     {
     cout << "y=a(x";
      if(x1<0) cout << "+" << -x1 << ")";
      else cout << "-" << x1 << ")";
      if(x2<0) cout << "(x+" << -x2 << ")" << endl;
       else cout << "(x-" << x2 << ")" << endl;
              }
     else if(delta = 0)
     {
         if(p<0) cout << "y=(x+" << -p << ")2" << endl;
         else cout << "y=(x-" << p << ")2" << endl;
          }
      else cout << "Postac iloczynowa nie istnieje!" << endl;




     }

void kanoniczna()
{
     cout << "y=ax2+bx+c -> y=a(x-p)2+q" << endl;
     cout << "Podaj wartosc a: ";
       a= pobierz(a);
cout << "Podaj wartosc b: ";
      b= pobierz(b);
cout << "Podaj wartosc c: ";
c= pobierz(c);

p = -b / (2*a);

q = -delta / (4*a);
cout << "Wartosc p: " << p << endl;
cout << "Wartosc wyroznika trojmianu kwadratowego(delty): " << delta << endl;
cout << "Wartosc q: " << q << endl  << endl;
cout << "Postac kanoniczna: ";
   cout << "y="
        << a;
    if(p < 0)
    {
  cout      << "(x+" << -p;
        }else
        {
cout        << "(x-" << p;
             }
     if(q < 0) cout << ")2-" << -q ;
        else cout <<")2+" << q;
        parametry();

}

void ogolna()
{
 string wzor;
 cout << "y=a(x-p)2+q -> y=ax2+bx+c" << endl;
 cout << "Podaj a: ";
     a= pobierz(a);
 cout << "Podaj p: ";
p = pobierz(p);
 cout << "Podaj q: ";
q= pobierz(q);

 b = -2*(p*a);
 delta = (-4)*(a*q);
 c = delta / ((b*b) + 4*a);

 cout << "Wartosc b: " << b << endl;
 cout << "Wartosc wyroznika trojmianu kwadratowego(delty): " << delta << endl;
 cout << "Wartosc c: " << c << endl << endl;
 cout << "Postac ogolna: ";
 cout << "y=" << a << "x2";
if(b>0) cout << "+" << b;
 cout << b << "x";
if(c>0) cout << "+";
cout << c;

 parametry();
}
int main()
{
cout << "Kalkulator liczacy postac kanoniczna z ogolnej i odwrotnie(z parametrami)" << endl;
cout << "by Jasiek65" << endl;
cout << "--------------------------------------" << endl;
 cout << "y=ax2+bx+c -> y=a(x-p)2+q  ->  y=ax2+bx+c" << endl;


    cout << "W programie dostepne sa nastepujace opcje: " << endl;
    do
    {
         funkcje_programu();
          cout << "Wybierz opcje(podaj liczbe): ";
          cin >> liczba;
          switch ( liczba )
          {
          case 1:
               kanoniczna();
               break;
          case 2:
               ogolna();
               break;
          }
}while (liczba != 0);

 return 0;
}
