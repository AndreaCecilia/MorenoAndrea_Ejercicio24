#include <math.h>

#include <iostream>
#include <random>
#include <stdlib.h>


int main(){

float sigma=1.0;
int N=10000;
float delta=1.0;
float lista=0.0;
srand48(8);
lista=drand48();
float b;
float propuesta;
float g1;
float g2;
float cociente;
float r;
float alpha;
float x;
int i;
for (i=1; i<N;i++){
		b=drand48()-0.5*delta;
        propuesta  = lista + b;
		g1=exp(-propuesta*propuesta/(2.0*sigma*sigma))/sqrt(2.0*np.pi*sigma*sigma);
		g2=exp(-lista**2/(2.0*sigma**2))/sqrt(2.0*np.pi*sigma**2);
		cociente=g1/g2;
		if(cociente<1){
			r=cociente;
		
		else{r=1}
        alpha = drand48();
        if(alpha<r){
            x=propuesta;}
        else{
            x=lista;
		}
		std::cout << x << std::endl;
		}
  return 0;
}