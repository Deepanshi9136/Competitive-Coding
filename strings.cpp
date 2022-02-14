#include <iostream>
#include <string>
using namespace std;

int main() {
char c,d ;
string S1;
string S2 , S3; 
cin >> S1;
cin >> S2;
int len1 , len2 ;
len1 = S1.size();
len2 = S2.size();
cout << len1 << " "<< len2 << '\n' ;
S3 = S1+S2;
cout << S3 << '\n';
c = S1[0];
d = S2[0];
S1[0] = d;
S2[0] = c;
cout << S1 << " " << S2;


  
    return 0;
}
