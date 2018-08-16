#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double x){
	double value;
	value=cos(x)-x;
	return value;
}


double dfdx(double x){
	double value;
	value=-sin(x)-1.0;
	return value;
}




int main(void){
	
	//Resolver la raíz de
	//f(x)=cos(x)-x usando el método de N-R
	
	/*Resolver la raíz de
	f(x)=cos(x)-x* 'por bloques'*/
		
	double Tol; 
	int Nmax;
	double p; //p(n)
	double p_prev;  //p(n-1)
	double error;
	int iteration;
	
	
	p_prev=5.0;
	error=1.0;
	iteration=0;
	Nmax=1000;
	
	while(error>Tol){
		p=p_prev-f(p_prev)/dfdx(p_prev);
		error=fabs(p-p_prev);
		p_prev=p;
		iteration=iteration+1;
		if(iteration>Nmax){
			printf("El método no converge después de %d iteraciones" ,Nmax);
			break;
		}
		printf("p= %.16f\t error= %.16f\t abs(f(p))=%.16f \n",p,error,fabs(f(p));
	}
	
	
	
	
	printf("%f\n",cos(0.0));

	
		
	printf("hola mundo \n");
	return 0;
	}




