#include "sculptor.h"
#include "sculptor.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main(){
    Sculptor Desenho(200,200,200);
    Desenho.setColor(1,0.5,0.7,0.1);
    Desenho.putVoxel(1,0,0);
    Desenho.cutVoxel(0,0,0);
    Desenho.putBox(0,0,0,0,0,0);
    Desenho.cutBox(0,0,0,0,0,0);
    Desenho.setColor(1,0.5,0.8,1);
   // Desenho.putSphere(0,0,0,0);
   // Desenho.cutSphere(0,0,0,0);
    Desenho.putEllipsoid(100,100,100,60,65,60);
    Desenho.cutEllipsoid(90,90,90,50,55,50);
    Desenho.writeOFF("desenhos2.off");
    return 0;
}
