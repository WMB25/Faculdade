#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int fatorizacao(int num) {
	if (num == 0 || num == 1) {
		return 1;
	}
	else {
		return fatorizacao(num - 1) * num;
	}
}
int potenciacao(int num, int exp) {
	if (exp == 0) {
		return 1;
	}
	else {
		return num * potenciacao(num, exp - 1);
	}
}
int somarray(int ary[], int base) {
	if (base == 0) {
		return 0;
	}
	else {
		return ary[base - 1] + somarray(ary, base - 1);
	}
}
int produtoDoArray(int arry[], int prod) {
	if (prod == 0) {
		return 1;
	}
	else {
		return arry[prod - 1] * produtoDoArray(arry, prod - 1);
	}
}
//char saidaDeNome(char nome[]) {
//	if (nome == 1) {
//		printf("%s", nome[0]);
//	}
//	else {
//		saidaDeNome(nome + 1);
//		printf("%s", nome[0]);
//	}
//}
int calculoDoNdeFibo(int num) {
	if (num <= 1) {
		return num;
	}
	else {
		return calculoDoNdeFibo(num - 1) + calculoDoNdeFibo(num - 2);
	}
}
int calculoDaSequenciaDeLucas(int num) {
	if (num == 0) {
		return 2; //2 é o primeiro numero da sequencia de Lucas.
	}
	else if (num == 1) {
		return 1; // O 1 é o segundo numero da sequencia de Lucas.
	}
	else {
		return calculoDaSequenciaDeLucas(num - 1) + calculoDaSequenciaDeLucas(num - 2);
	}
}
int calculoDaSequenciaDeP(int Num) {
	if (Num <= 2) {
		return 1; //OS tres primeiros da sequencia é 1.
	}
	else{
		return calculoDaSequenciaDeP(Num - 1) + calculoDaSequenciaDeLucas(Num - 3);
	}
}
int calculoDeCatalan(int num) {
	if (num == 0) {
		return 1;
	}
	else {
		return calculoDeCatalan(num - 1) * 2 * (2 * num - 1) / (num + 1);
	}
}
int calculoCollatz(int num) {
	if (num % 2 == 0) { //Par
		//return calculoCollatz(num / 2);
		return num / 2;
	}
	else {//Impar
		//return calculoCollatz((3 * num) + 1);
		return num * 3 + calculoCollatz(num + 1);
	}
}
int ConversorDB(int num) {
	if (num == 0) {
		return 0;
	}
	else {
		ConversorDB(num / 2);
		printf("%d", num % 2);
	}
}
int golsAB(char gols[], int numA, int numB, int idc) {
	if (numA == 0 && numB == 0) {
		return printf("%s", gols);
	}
	else if(numA > 0){
		gols[idc] = 'A';
		golsAB(gols, numA - 1, numB, idc + 1);
	}
	else if(numB > 0) {
		gols[idc] = 'B';
		golsAB(gols, numA, numB - 1, idc + 1);
	}
}
int localizadorDeN(int num, int x) {
	if (num == 0) {
		return 0;
	}
	int sequencia = num % 10;
	if (sequencia == x){
		return localizadorDeN(num / 10, x) + 1;
	}
	else {
		return localizadorDeN(num / 10, x);
	}
}
int contadorDeP(char pala[]) {
	if (*pala == '\0') {
		return 0;
	}
	else {
		return contadorDeP(pala - 1) + 1;
	}
}
int calculomdc(int one, int two) {
	if (two == 0) {
		return one;
	}
	else return calculomdc(two, one % two);
}
int main() {
	// Exercicios lista de Recursão!
	//EX1
	// Fatorial:
	// recursiva:
	//int Num, calculo;
	//printf("Digite um valor para fatorizar: ");
	//scanf_s("%d", &Num);
	//printf("A fatorial de %d é %d\n", Num, fatorizacao(Num));
	////Laço de repetição!
	////for (int calculo = 1; Num > 1; Num--){
	////	if (Num == 0 || Num == 1) {
	////		printf("A fatorização de %d é igual a 1", Num);
	////	}
	////	else {
	////		calculo = calculo * Num;
	////	}
	////		printf("fatorial de %d é %d\n", Num, calculo);
	////}

	//EX2
	//Potência de um Número:
	//int numP, numExp;
	//scanf_s("%d", &numP);
	//scanf_s("%d", &numExp);
	//printf("a potencia de %d a %d é %d", numP, numExp, potenciacao(numP, numExp));

	//EX3
	//Soma de array:
	//int type[5] = {2,4,6,8,10};
	//int shit;
	//shit = 5;
	//printf("A soma do array (vetor) é: %d", somarray(type,shit));

	//EX4
	//Produto de Array:
	//int array[5] = {2,4,6,8,10};
	//int prod = 5;
	//printf("O Produto do Array é: %d", produtoDoArray(array, prod));

	//EX5
	/*Impressão De String(Não sei fazer!)*/
	//char name[30];
	//printf("Digite um Nome: ");
	//scanf_s("%s", name);
	//printf("O Nome (%s) invertido é (%s)",name, saidaDeNome(name));

	/*EX6*/
	/*sequencia de Fibonacci*/
	//sequencia de fibonacci por N:
	//int num;
	//printf("Digite um valor para calcular na Sequencia: ");
	//scanf_s("%d", &num);
	//printf("O Valor da soma do Numero (%d) na Sequencia de Fibonacci é (%d)", num, calculoDoNdeFibo(num));

	/*EX7*/
	//Sequncia de Lucas Por N:
	//int num;
	//printf("Digite um Numero: ");
	//scanf("%d", &num);
	//printf("A soma de %d na sequencia de Lucas é %d", num, calculoDaSequenciaDeLucas(num));

	/*EX8*/
	//sequencia de Pavo
	//int num;
	//printf("Digite um Numero: ");
	//scanf_s("%d", &num);
	//printf("A soma do %d na sequencia de Padovan é %d ", num, calculoDaSequenciaDeP(num));

	/*EX9*/
	/*Sequencia de catalan*/
	/*int num;
	printf("Digite o valor: ");
	scanf_s("%d", &num);
	printf("A soma de %d na sequencia de catalin é %d", num, calculoDeCatalan(num));*/

	/*EX10*/
	/*Sequencia collatz*/ 
	//int num;
	//printf("Digite um Valor: ");
	//scanf_s("%d", &num);
	//printf("O valor da Soma de %d na Sequencia Collatz é %d", num, calculoCollatz(num));

	//EX11
	//Conversor de Decimal para Binario:
	//int numD;
	//printf("Digite um Numero Decimal: ");
	//scanf_s("%d", &numD);
	//ConversorDB(numD);
	
	//EX12
	//	Gols marcados AxB:
	//int numA, numB;
	//printf("digite o numeros de Gols do time A: ");
	//scanf_s("%d", &numA);
	//printf("digite o numeros de Gols do time B: ");
	//scanf_s("%d", &numB);
	//char Gols[numA + numB + 1];
	//Gols[numA + numB] = '\0';
	//golsAB(Gols, numA, numB, 0);

	//EX13
	//	localizador de Numeros:
	//int num, x;
	//printf("Digite o Numero Base: ");
	//scanf_s("%d", &num);
	//printf("Digite o numero que deseja localizar: ");
	//scanf_s("%d", &x);
	//printf("O numero %d se repete %d no Numero %d", x, localizadorDeN(num, x), num);
	
	//EX14 (Não está completo)
	//	Contador de palavras:
	//char palavra[60];
	//printf("Digite uma palavra: ");
	//fgets(palavra, 60, stdin);?
	////int saida = contadorDeP(palavra);
	//printf("A Palavra %s tem %d letras.", palavra, contadorDeP(palavra));
		
	/*EX15
	MDC:*/
	int numOne, numTwo;
	printf("Digite o primeiro valor: ");
	scanf_s("%d", &numOne);
	printf("Digite o segundo valor: ");
	scanf_s("%d", &numTwo);
	printf("o MDC dos Numeros %d , %d é %d", numOne, numTwo, calculomdc(numOne, numTwo));

	return 0;
}