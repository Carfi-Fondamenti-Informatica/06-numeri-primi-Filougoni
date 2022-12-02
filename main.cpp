#include <iostream>

int main(){
    int n, i;
        cin>>n;
        bool result;
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
