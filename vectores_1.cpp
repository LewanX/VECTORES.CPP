#include<iostream>
#include<cstdlib>



using namespace std;
/*Un entrenador de futbol tiene los datos con las prácticas de sus 20 jugadores.
    Por cada jugador y partido resgistró lo siguiente;
      - Número de jugador (1 a 20).
      - Cantidad de goles convertidos.
    El fin de los datos se indica con un número de jugador igual a 0.
  */



int main () {
int jugador,goles;
int vgoles[20]{0};
/*for (int i=0;i<=20;i++){
    vgoles[i]=0;
}*/
cout<<"ingrese el numero del jugador"<<endl;
cin>>jugador;
while(jugador!=0){
    cout<<"¿cuantos goles metio?"<<endl;
    cin>>goles;
    vgoles[jugador-1]+=goles;
    cout<<"ingrese el numero del jugador"<<endl;
cin>>jugador;
}
cout<<"JUGADOR\tGOLES"<<endl;
for(int i=0;i<20;i++){
cout<<"  "<<i+1<<" \t  "<<vgoles[i]<<endl;


}




return 0;
 	}
