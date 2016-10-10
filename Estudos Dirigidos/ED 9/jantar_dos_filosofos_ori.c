/*
*Algorithm:			Jantar dos Fil�sofos, proposto por Djikstra
*Description:		5 fil�sofos est�o sentados em uma mesa redonda, cada um tendo um garfo � sua direita. Cada fil�sofo deve, alternadamente, refletir e comer.
					Para que um fil�sofo coma, ele deve possuir 2 garfos (um � direita, e um � esquerda). Um garfo somente pode ser pego por um fil�sofo e se, 
					e somente se, n�o estiver em uso. Quando um fil�sofo termina de comer, ele libera os garfos em sua posse.
*Author: 			Thiago de Oliveira Albuquerque
*Discipline:		T�picos Avan�ados em Computadores - Programa��o Concorrente
*Class: 			E
*Date: 				2016/02
*Registration:		14/0177442
*Institution: 		Universidade De Bras�lia (UnB)
*Academic level:	Gradua��o
*Course:			Engenharia de Computa��o
*
**/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>


void * filosofo (void *);


int main (int argc, char * argv[])
{
	
	return 0;
}

