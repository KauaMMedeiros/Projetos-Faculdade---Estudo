#include<stdio.h>

int main(){
	float ds, dt, vm, vm2, kmh, vm4;	

	printf("\nVamos calcular a velocidade média do percurso");
	printf("\nDigite a distancia percorrida(EM KM): ");
	scanf("%f", &ds);
	printf("\nDigite o tempo gasto durante o percurso(EM MIN): ");
	scanf("%f", &dt);
	
	vm = ds / dt;
	printf("\nA velocidade média em km/min é de %.1f", vm);
	
	vm2 = vm * 16.667;
	printf("\nA velocidade média em m/s é de %.1f", vm2);
	
	kmh = dt / 60;
	vm4 = ds / kmh;
	printf("\nA velocidade média em km/h é de %1.f", vm4);
	
	return 0;
}