#include<iostream>
#include<cstdlib>
#include<conio.h>



using namespace std;
// prototipo funcion
int EncontrarMaximo(int x,int y);


int main () {
    int n1,n2,mayor;
    cout<<"digite 2 numeros ; ";
    cin>>n1>>n2;

EncontrarMaximo(n1,n2);

   getch();

    return 0;
 	}
//definicion de funcion

int EncontrarMaximo(int x,int y){
    int numMax;
    if(x>y){
        numMax=x;
            }
    else{
    numMax=y;
        }
cout<<"El mayor de los 2 numeros es "<<numMax;
}
