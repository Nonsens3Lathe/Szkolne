#include <iostream>
using namespace std;

int a[]={1,3,5,7,9,11,13,15};
int s;
int szukana;
int szukaj(int l, int p){
if (l<=p){
    int s = (l+p)/2;
    if (szukana>a[s])
        return szukaj (s+1, p);
        else if (szukana<a[s])
                return szukaj (l, s-1);
                else return s;
}
else return -1;
}

main () {
cout << "Na ktorym miejscu jest twoja liczba?\nPodaj liczbe\n";
cin >> szukana;
cout << "Twoja liczba znajduje sie na " << szukaj(0,8)+1 << " miejscu";
}
