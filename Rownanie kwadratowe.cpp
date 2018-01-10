#include <iostream>
#include <cmath>

using namespace std;

double a,b,c,delta,x,x1,x2;

int main () {
cout << "PROGRAM DO ROZWIAZYWANIA ROWNANIA KWADRATOWEGO POSTACI a(x^2)+bx+c = 0\nPodaj a\n";
cin >> a;
cout << "Podaj b\n";
cin >> b;
cout << "Podaj c\n";
cin >> c;
if (a==0)
    cout << "To nie jest rownanie kwadratowe";
    else {
        delta = pow(b,2)-4*a*c;
        if (delta < 0)
            cout << "To rownanie nie ma rozwiazan";
            else if (delta == 0){
                    x = -b/(2*a);
                    cout << "Rownanie ma jedno rozwiazanie: " << x;
                    }
                    else {
                        x1 = -b-sqrt(delta)/(2*a);
                        x2 = -b+sqrt(delta)/(2*a);
                        cout  << "Rownanie ma dwa rozwiazania: " << x1 << " i " << x2;
                    }
    }
return 0;
}
