#include<iostream>
using namespace std;

int main()
{ 
    int W;
    cin >> W;
    int weigh = W%2; 
    if (weigh == 0) { 
        cout << "YES";
    } else { cout << "NO"; }


    return 0;
}
