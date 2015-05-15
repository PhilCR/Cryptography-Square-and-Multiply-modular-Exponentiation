/*
Square-and-Multiply Algorithm (SMA)

@authors:
	Jonathan André Gangi 345334
	Philippe Cesar Ramos 380415

as seen on section 7.4 of Understanding Criptography:

	Square-and-Multiply for Modular Exponentiation 

	Input:  base element x, Exponent H, Modulus n
	Output: Y = xˆH mod n 
	Initialization: r = x 

	Algorithm:
		FORi=t−1DOWNTO0

			r = rˆ2 mod n 
			
			IF hi = 1
				r = r * x mod n 

		RETURN (r)

and specified by:
<http://www.moodle.ufscar.br/file.php/4783/Aulas/Aula06/Atividades_sobre_a_teoria_dos_numeros.pdf>
	Input: three integers X, k, N, being 2 <= X, k, N < 2ˆ32.
	Output: one integers Y, as result from its exponentiation

*/

#include <stdio.h>
#include <stdlib.h>

 long sma( long x,  long H,  long n){

	long h;
	unsigned long long r;
	int bin[32];
	int i;
	
	r = x;
	i = 0;

	/* Converts H in Binary */
	while( H > 0 ){

		if (H % 2 == 0){
			bin[i] = 0;
		}else{
			bin[i] = 1;
		}

		H = H/2;
		i++;

	}

	i--; //t-1

	while(i>0){

		r = (r * r) % n;

		if( bin[--i] == 1 ){
			r = (r * x) % n;
		}
		
	}

	return r;

}


int main(){

	long X, k, N; //input

	long Y; //output

	scanf("%ld %ld %ld\n", &X, &k, &N); //reading

	Y = sma(X, k, N); //Square-and-Multiply modular Exponentation

	printf("%ld\n", Y);	

	return 0;
}