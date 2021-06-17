#include<iostream>
#include<cstdlib>



using namespace std;
/*Un entrenador de futbol tiene los datos con las prácticas de sus 20 jugadores.
    Por cada jugador y partido resgistró lo siguiente;
      - Número de jugador (1 a 20).
      - Cantidad de goles convertidos.
    El fin de los datos se indica con un número de jugador igual a 0.
     -La cantidad de jugadores que convirtieron mas de 5 goles
     -El promedio de goles entre todos los jugadores
  */



int main () {
int jugador,goles,cgoles=0,cnogoles=0,i;
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

for(i=0;i<20;i++){
cout<<"  "<<i+1<<" \t  "<<vgoles[i]<<endl;

}
for(i=0;i<20;i++){

    if(vgoles[i]>5){
    cgoles+=1;

}
}
for(i=0;i<20;i++){

    if(vgoles[i]==0){
    cnogoles+=1;

}

}
cout<<cnogoles<<"\t jugadores no metieron goles "<<endl;
cout<<cgoles<<"\t jugadores metieron mas de 5 goles"<<endl;



return 0;

}
