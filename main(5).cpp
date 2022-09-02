#include <iostream>
#include <stdio.h>

using namespace std;

struct complex{
    int re;
    int img;
}x1,x2,x3;

int main()
{

    char mohoomi;
    char setare;
    char alamat;
    char amaliat;
    cin>>x1.re>>alamat>>mohoomi>>setare>>x1.img;
    /*scanf("%d%c%c%c%d\n",&x1.re,&alamat,&mohoomi,&setare  ,&x1.img);*/
    char mohoomi2;
    char setare2;
    char alamat2;
    cin>>x2.re>>alamat2>>mohoomi2>>setare2>>x2.img;
    cin>>amaliat;
    if(alamat == '-') {
        x1.img = -x1.img;
    }
    /*scanf("%d%c%c%c%d\n",&x2.re,&mohoomi2,&alamat,&mohoomi,&x2.img);*/
    if(alamat2 == '-') {
        x2.img = -x2.img;
    }
    switch (amaliat){
        case '-':
            x3.re = x1.re - x2.re;
            x3.img = x1.img - x2.img;
            break;
        case'+':
            x3.re = x1.re + x2.re;
            x3.img = x1.img + x2.img;
            break;
        case'*':
            x3.re = (x1.re *x2.re) - (x1.img * x2.img);
            x3.img = (x1.re * x2.img) + (x1.img * x2.re);
    }

    if(x3.img == 0) {
        printf("%d\n", x3.re);
    }
    else if(x3.re == 0) {
        printf("%di\n",x3.img);
    }
    else{
        printf("%d",x3.re);
        if(x3.img < 0 ){
            x3.img = -x3.img;
            printf("-%di\n",x3.img);
        }
        else{
            printf("+%di\n",x3.img);
        }
       /* if(x3.img > 0)
        cout<<x3.re<<"+"<<x3.img<<"i"<<endl;
        else
            cout<<x3.re<<"-"<<x3.img<<"i"<<endl;*/

    }

    return 0;
}
