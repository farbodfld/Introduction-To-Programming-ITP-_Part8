#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n + 1];
    cin>>a;
    int hazf = 0;
    for (int i = 1; i < n ; ++i) {
        if(a[i] > a[hazf]){
            hazf = i;
        }
    }
    for (int j = 0; j < n; ++j) {
        if(j == hazf)
        j++;
        if(j < n)
        cout<<a[j];
    }
    return 0;
}