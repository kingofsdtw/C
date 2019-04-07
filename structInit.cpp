#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef struct _data{
    int a;
    int b;
    int c ;
}data;


typedef struct _point{
    data *p;
}point;



using namespace std;

int main(){
    point p,*ptr;
    data data1;

    ptr = &p;

    ptr->p = &data1;

    *(ptr->p) = { .a = 0 , .b = 1 ,  };

    cout << ptr->p->b << endl;
    cout << ptr->p->c << endl;
    return 0;
}



