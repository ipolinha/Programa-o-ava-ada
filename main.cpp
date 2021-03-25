#include "sculptor.h"
#include "sculptor.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main(){
    Sculptor Desenho(100,100,100);
    Desenho.setColor(1,1,1,1);
    Desenho.putVoxel(0,0,0);
    Desenho.cutVoxel(0,0,0);
    Desenho.setColor(1,0.5,0.8,1);
    Desenho.putSphere(50,50,50,20);
    Desenho.cutSphere(25,25,25,10);
    //Desenho.putBox(0,15,0,15,0,15);//bloco sofa
   // Desenho.cutBox(0,8,3,12,3,15);//corte
   // Desenho.cutBox(0,8,0,3,9,15);//braço
   // Desenho.cutBox(0,8,12,15,9,15);//braço corte
   // Desenho.setColor(1,1,0,1);
    //Desenho.putEllipsoid(10,21,8,4,6,5);
    //Desenho.setColor(1,1,1,1);
   // Desenho.putBox(8,12,17,25,0,8);//jarro
    //Desenho.cutBox(9,10,19,22,3,8);//jarro
    Desenho.writeOFF("sa.off");
    return 0;
}
