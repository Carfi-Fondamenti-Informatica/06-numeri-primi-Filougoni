#include <iostream>
#include "lib.h"
using namespace std;
    int main() {
        int n, i;
        bool result;
        cin>>n;
        i=n-1;
        result =numeroprimo(n,i);
        if (result ==1)
        {
            cout<<"numero primo";
        }
        else {
            cout<<"numero non primo";
        }
        return 0;
    }
