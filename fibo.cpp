#include <iostream>
using namespace std;

int main() 
{
    int n, i;
    unsigned long int t1 = 0, t2 = 1, t3 = 0 ;
    n = 999999999; //9
    for (i; i <= n; ++i) {
      cout<<t1<<"\n";
      t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return 0;
}
