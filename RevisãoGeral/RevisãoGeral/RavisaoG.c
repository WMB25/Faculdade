#include <stdio.h>
#include <stdlib.h>

int main() {
	/*LISTA 1*/
///*EX1*/
//printf("Bom dia!\n Estou aprendendo a programar.\n Definitivamente não é muito difícil");
//printf("\n");

///*EX2*/
//int n1 = 10;
//int n2 = 7;
//printf("Suas notas são %d e %d e sua media é %d !\n", n1,n2, (n1+n2) / 2);
//printf("\n");

///*EX3*/
//int cars = 359, p = 4;
//printf("Vamos destribuir %d carros para %d pessoas e portanto devem sobrar %d carros\n", cars, p, cars - p);
//printf("\n");

///*EX4*/
//int raio = 5;
//printf("Tenho um circulo de raio %d.\n Portanto meu diametro é: %d.\n A area é: %f.\n E a mediada da circufêrencia é: %f", raio, raio*2, 3.14*(pow(raio,2)),2*3.14*raio);
//printf("\n");

							/*LISTA 2*/

///*EX1*/
//int qtd = 0, media = 0;
//printf("Calcule sua Nota!\n");
//printf("Quantas provas serão calculada: ");
//scanf_s("%d", &qtd);
//for (int i = 0; i < qtd; i++) {
//	int notas[5];
//	printf("Digite a %d nota: ", i+1);
//	scanf_s("%d", &notas[i]);
//	media += notas[i];
//}
//printf("Sua média é: %d\n", (media / qtd));

///*EX2*/
//int D = 0, L = 0;
//printf("Consumo Médio De Combustivel\n");
//printf("Digite a quilometragem Percorrida: ");
//scanf_s("%d", &D);
//printf("\n");
//printf("Digite a quantidade de combustivel utilizada: ");
//scanf_s("%d", &L);
//printf("\n");
//printf("O consumo médio do combustivel é: %d", (D / L));
//printf("\n");

///*EX3*/
//printf("Calculo de festa\n");
//int men = 20, woman = 17, Qtd[2];
//printf("Digite a quantidade de Pessosas na Festa;\n");
//printf("Quantidade de homens: ");
//scanf_s("%d", &Qtd[0]);
//printf("Quantidade de mulheres: ");
//scanf_s("%d", &Qtd[1]);
//men = men * Qtd[0];
//woman = woman * Qtd[1];
//printf("O valor total arrecadado na festa foi: %d", (men + woman));

///*EX4*/
//printf("Calculo do volume de um cilindro\n");
//float raio = 0, altura = 0;
//printf("Digite o valor do Raio: ");
//scanf_s("%f", &raio);
//printf("Digite a Altura: ");
//scanf_s("%f", &altura);
//printf("O volume do Cilindro e = %f", (3.14 * (raio * raio)) * altura);

///*EX5*/
//printf("Funçao Quadratica\n");
//int ABC[3];
//char CBA[3] = { 'A', 'B', 'C' };
//printf("Digite os valores da funcao: \n");
//for (int i = 0; i < 3; i++) {
//	printf("Digite o valor de %c: ", CBA[i]);
//	scanf_s("%d", &ABC[i]);
//}
//printf("O valor de delta e: %d\n", ((ABC[1] * ABC[1]) - 4 * ABC[0] * ABC[2]));

/*EX6*/
/*printf("Verificador de numeros pares e impares\n");
int num = 0;
printf("Digite um valor: ");
scanf_s("%d", &num);
switch (num % 2) {
case 0 :
	printf("o valor %d e Par\n", num);
	break;
case 1 :
	printf("O valor %d e impar\n", num);
	break;
default :
	printf("valor invalido\n");
}
printf("%d", num % 2);*/

/*EX7*/
/*printf("Conversor de temperatura\n");
float temp = 0;
int conv = 0;
printf("Digite 1 para covereter de celcius para fahrennheit ou 2 para o contrario: ");
scanf_s("%d", &conv);
switch(conv){
case 1 :
	printf("Digite o valor: ");
	scanf_s("%d", &temp);
	printf("A temperatura em fahrenheit e: %f", (temp * (9/5)) + 32);
	break;

case 2:
	printf("Digite o valor; ");
	scanf_s("%d", &temp);
	printf("A temperatura em celcius e: %f", (temp - 32) * (5 / 9));
	break;
}*/

/*EX8*/
/*printf("Media aritmetica\n");
float arit[4] = {0,0,0,0};
for (int i = 0; i < 3; i++) {
	printf("Digite o %d valor:", i+1);
	scanf_s("%f", &arit[i]);
	arit[3] += arit[i];
}
printf("A media aritmetica destes valores e: %f", (arit[3] / 2));*/

/*LISTA 3*/

/*EX1*/
/*printf("Maior ou Menor que 10\n");
int num = 0;
printf("Digite um Valor: ");
scanf_s("%d", &num);
if (num > 10) {
	printf("%d e maior que 10!", num);
}*/

/*EX2*/
/*printf("Verificador de par ou impar\n");
int num = 0;
printf("digite um valor: ");
scanf_s("%d", &num);
if (num % 2 == 0) {
	printf("%d e Par\n",num);
}
else {
	printf("%d e impar!\n", num);
}*/

/*EX3*/
/*printf("Comparador de valores\n");
int values[2] = {0,0}, bigger = 0;
for (int i = 0; i < 2; i++) {
	printf("digite o %d valor: ", i+1);
	scanf_s("%d", &values[i]);
	if (bigger < values[i]) {
		bigger = values[i];
	}
}
printf("%d", bigger);*/

/*EX4*/
/*printf("Comparador de valores com igual\n");
int values[2] = {0,0}, bigger = 0;
for (int i = 0; i < 2; i++) {
	printf("digite o %d valor: ", i+1);
	scanf_s("%d", &values[i]);
	if (bigger < values[i]) {
		bigger = values[i];
	}
	else if (bigger == values[i]) {
		printf("Os valores %d = %d sao iguais!\n", bigger, values[i]);
		return 0;
	}
}
printf("%d", bigger);*/

/*EX5*/
/*printf("Multiplo de 10\n");
int arrMult[3] = { 0, 0, 10 };
for (int i = 0; i < arrMult - 1; i++) {
	printf("Digite o %d valor: ", i + 1);
	scanf_s("%d", &arrMult[i]);
	int resMult = arrMult[i] * arrMult[3];

	if (resMult / arrMult[3] == arrMult[i]) {
		printf("%d e multipllode 10\n", arrMult[i]);
	}
	else {
		printf("nao e\n");
	}
} */

/*EX6*/
/*printf("Numeros maiores que N\n");
	int N = NULL;
	int nAry[2] = { 0,0 };
	for (int i = 0; i < 2; i++) {
		if (N == NULL) {
			printf("Digite o valor que sera feito de comparaçao: ");
			scanf_s("%d", &N);
		}
		printf("Digite o %d valor a ser comparado: ", i + 1);
		scanf_s("%d", &nAry[i]);
	}
	if (nAry[0] > N && nAry[1] > N) {
		printf("Sim, %d e %d sao maiores que %d\n", nAry[0], nAry[1], N);
	}
	else {
		printf("Os valores nao sao maiores que %d\n", N);
	}*/

/*EX7*/
	printf("Conversor de tempo\n");
	char hMS[3][20] = {"Horas", "Minutos", "Segundos"};
	float times[3] = { 0,60,0 };
	char outingForConv[10];
	char entringFormtTimes[10];
	char choice[9];
	printf("Digite para o que voce deseja converter Horas, Minutos, Segundos: ");
	scanf_s("%9s", outingForConv, 10);
	printf("informe o formato de entrada: ");
	scanf_s("%9s", entringFormtTimes, 10);
	printf("Digite o valor: ");
	scanf_s("%f", &times[0]);

			if (outingForConv == entringFormtTimes) {
				printf("%1f, foi", times[0]);
			}

			if (entringFormtTimes == hMS[0]) {
				//horas
					if (choice == hMS[1]) {
						//MINUTOS
						times[2] = times[0] * times[1];
						printf("horas para Minutos\n");
					}
					else if (choice == hMS[2]) {
						//SEGUNDOS
						times[2] = (times[0] * times[1]) * times[1];
						printf("horas para Segundos\n");
					}
			}
			else if (entringFormtTimes == hMS[1]) {
				//minutos
				if (choice == hMS[0]) {
					//hours
					times[2] = times[0] / times[1];
					printf("minutos para horas\n");
				}
				else if (choice == hMS[2]) {
					//segunds
					times[2] = times[0] * times[1];
					printf("minutos para segundos\n");
				}
			}
			else if (entringFormtTimes == hMS[2]) {
				//segunds
				if (choice == hMS[0]) {
					//horas
					times[2] = (times[0] / times[1]) / times[1];
					printf("segundos para hora\n");
				}
				else if (choice == hMS[1]) {
					//minutos
					times[2] = times[0] / times[1];
					printf("segundos para minutos\n");
				}
			}





	return 0;
}