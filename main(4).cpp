#include <iostream>
#include <cstring>
using namespace std;
void apercase(char* a, int i )
{
    if(i == 0 || a[i - 1] == ' ')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 32;
    }
    else if(a[i] >= 'A' && a[i] <= 'Z')
    {
        a[i] += 32;
    }
           /* for (int j = 0; j < 51; ++j)
            {
            }*/
}
bool moghaiese(char a[51], char b[51]){
    // 1 agar a kochektar mosavi b bod
    for(int i=0; ;i++){
        if(a[i]<b[i])
            return 1;
        if(b[i]<a[i])
            return 0;
        if(a[i]=='\0')
            return 1;
        if(b[i]=='\0')
            return 0;
    }
}
/*void copy(char a[], char b[]){
    int i=0;
    for( i=0; b[i]!='\0' ; i++)
        a[i]=b[i];
    a[i]=b[i];
}*/

/*void swap(char*&s , char*&t)
{
    char* temp = s;
    s = t;
    t = temp;
}*/

/*void bubble_sort(char** strings , int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if(strcmp(strings[j + 1] , strings[j])<0)
                swap(strings[j], strings[j + 1]);
        }
    }
}*/
/*void insertion_sort(char arr[][51], int n) {
    int i, j;
    char t[51];
    for (i = 1; i < n; i++) {
        //for(int j=0; arr[i][j]!='\0' ; j++)
        //  t[j]= arr[i][j];
        copy(t, arr[i]);
        for (j = i; j > 0; j--) {
            if (moghaiese(arr[j - 1], t)) {
                copy(arr[j],t);
                break;
            }

            copy(arr[j], arr[j - 1]);
        }
    }
}*/

void insertion_sort(char**&a, int n) {
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if(moghaiese(a[j],a[i]))
                continue;
            else
            {
                char*e;
                char*r;
                char*t;
                e=a[i];
                r=a[j];
                for (int k = j; k <i ; ++k) {
                    t=a[k+1];
                    a[k+1]=r;
                    r=t;
                }
                a[j]=e;
                break;
            }
        }
    }
    /*for (int i = 1; i < n; i++) {
        char* x = a[i];
        char first = a[i][0];
        int j = i;
        while (j > 0 && a[j - 1][0] > first) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = x;
    }*/
}

    int main() {
    int n;
    cin >> n;
    char**a=new char*[n];
    //cin.ignore();
    //cin.getline(a[0],51);
    for (int i = 0; i < n; i++){
        if(i==0)
            cin.ignore();
        char *b=new char[51];
        a[i]=b;
        cin.getline(a[i], 51);
//        getline(a[i] , 50 , cin);
        for(int j=0; a[i][j]!='\0' ; j++)
         apercase(a[i], j);
    }
    insertion_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    //insertion_sort(a , n);
   /* for(int i=0;i<n;i++)
        std::cout<<a[i]<<endl;*/
    return 0;
}