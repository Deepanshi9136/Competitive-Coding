#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
     double d;
    cin >> i>>l>>c>>f>>d;
    cout << i << endl; 
     cout << l << endl; 
      cout << c << endl; 
       cout <<fixed << setprecision(3)<< f << endl; 
        cout << fixed << setprecision(6) << d <<  endl; 
    return 0;
}
