#include <stdio.h>

/*Ler a hora de in´ icio e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os minutos)
 e calcule a dura¸c˜ao do jogo em horas, sabendo-se que o tempo m´aximo de dura¸c˜ao do jogo ´ e de 24 horas e
 que o jogo pode iniciar em um dia e terminar no dia seguinte. */
 
 int main (){
 	
 	int start, end, hours;
 	
 	printf("Horario que o jogo comecou: ");
 	scanf("%d", &start);
 	
 	printf("Horario que o jogo encerrou: ");
 	scanf("%d", &end);
 	
 	if( end > start){
 		
 		hours = end - start;
 		
	 }
	 else{
	 	hours = 24 + end - start ;
	 	
	 }
	 printf("O jogo durou %d hora(s)\n", hours);
	 
	 return 0;
 	
 }
