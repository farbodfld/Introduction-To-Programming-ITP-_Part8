#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int n;
    cin>>n;
    char** a= new char * [n];
    char** b = new char *[n];
    for (int i = 0; i < n ; ++i)
    {
        a[i] = new char [15];
    }
    for (int j = 0; j < n; ++j)
    {
        b[j] = new char [15];
    }
    for (int k = 0; k < n; ++k)
    {
        cin>>a[k];
        cin>>b[k];
    }
    for (int l = 0; l < n; ++l)
    {
        num = 0;
        int i;
        for ( i = 0; a[l][i] != '\0' && num ==0; ++i)
        {
            for (int j = 0; b[l][j] != '\0' && num == 0 ; ++j)
            {
                if(a[l][i] == b[l][j]){
                    cout<<"YES"<<endl;
                num++;
                break;}
            }
        }
       if(a[l][i] == '\0' && num == 0){
           cout<<"NO"<<endl;
       }
    }
    return 0;
}