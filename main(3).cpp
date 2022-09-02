#include <iostream>
using namespace std;
int main() {
   // int SIZE=0;
    int n;
    cin>>n;
    char** a = new char * [n]; //[n][2000];
    //cout<<endl;
    for (int i = 0; i <n ; ++i)
    {
        //cin >> a[i];
        a[i] = new char [1000];
    }
    for (int k = 0; k < n; ++k)
    {
        cin>>a[k];
    }
    for (int j = 0; j <n ; ++j)
    {
        int SIZE = 0;
        for (int i = 0; a[j][i] != '\0' ; ++i)
        {
            SIZE++;
        }
        if(SIZE > 10){
            cout << a[j][0] << SIZE - 2 << a[j][SIZE - 1] << endl;
        }
        if (SIZE <= 10){
            cout << a[j] << endl;
        }

    }

    return 0;
}