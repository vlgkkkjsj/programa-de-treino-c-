#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<iostream>
#include<locale.h>

main(void){
	setlocale(LC_ALL,"Portuguese");
	int ope=0,ope2=0,ope3=0,wheypct,wheytotal=0,creatinapote,creatinatotal=0,albupct,albutotal=0,ope4=0;
	char resposta;
	
	printf("\n\t PROGRAMA DE TRIENOS DO VLG");
	printf("\n\t1-PEITO \n\t2-TRICEPS \n\t3-COSTAS\n\t4-BICEPS\n\t5-PERNAS");
	printf("\n informe o que voce deseja treinar: ");
	scanf("%d",&ope);
	system("clear||cls");
	switch(ope){
		case 1: printf("\n\t PEITO \n\t");
			printf("\nSupino Reto Aberto com barra longa:  3 X de 8 a 10 repeti��es\n");
			printf("\nCrucifixo no Cross Over: 3 X de 8 a 10 repeti��es\n");
			printf("\nSupino Reto com halter no banco com inclina��o de 30 graus a 45graus+ Crucifixo Reto no mesmo banco (Conjugado):"); 
			printf("\n3 X de 6 + 6 repeti��es (6 de cada exerc�cio sem intervalo).\n");
			
			printf("\n\tDESEJA TREINAR MAIS ALGO?: S caso queira ");
			scanf("%s",&resposta);
					if(resposta=='s'||resposta=='S'){
							printf("\n\t1-TRICEPS \n\t2-COSTAS \n\t3-BICEPS \n\t4- PERNAS");
							printf("\n informe o que voce deseja treinar: ");
							scanf("%d",&ope2);
							switch(ope2){
										case 1:
										printf("\n\tTRICEPS\n\t");
							printf("\ntriceps testa: 3x12\n");
							printf("\npuxador triceps(barra reta), concentrado 3x12\n");
							printf("\ntriceps corda (POUCO PESO) SEM ALIMENTAR O EGO(contraia e execute com perfei�ao) 3x15\n");
							printf("\n triceps coice 3x15\n");
								break;
									case 2:
										printf("\n\tCOSTAS\n\t ");
										printf("\n Puxada Aberta com pegada Pronada: 3 a 4 S�ries. � Drop-Set: 5 repeti��es sua carga m�xima para tal, diminua um pouco a carga");
										 printf("sem intervalo e realize mais umas 5 repeti��es\n");
										printf("\n Extens�o de ombros com bra�os estendidos no Pulley alto: 3 X de 08 a 10 repeti��es\n");
										printf("\n Remada aberta sentado: 3 a 4 X de 08 a 10 repeti��es (realize a fase exc�ntrica mais lenta)\n");
											
											break;
											
									case 3: 
											printf("\n\tBICEPS\n\t");
											printf("\n Rosca direta na barra W 3x12\n");
											printf("\n Rosca direta na barra (3x12)\n");
											printf("\n Rosca direta sentado (3x12)\n");
											printf("\nRosca alternada com halteres (3x12)\n");
											break;
											
								case 4:
												printf("\n\t PERNA\n\t");
											printf("\n\t QUADRICEPS\n\t");
										

								printf("Agachamento no Smith Machine: (Este exerc�cio engloba diversos agrupamentos musculares envolvidos, como os gl�teos, isquiotibiais, panturrilhas e n�o somente os quadr�ceps. ");
								printf("\nEnt�o, aten��o na hora de configurar sua s�rie. Deixe isso para os profissionais de Educa��o F�sica. N�o posicione os p�s muito a frente do tronco. ");
								printf("Capriche na execu��o e nas cargas, respeitando seus limites:\n");
								 printf("\n3 a 4 s�ries de 10 a 12 repeti��es\n");		 
								 
								 printf("\nISQUIOTIBIAIS (Posteriores de coxa) \n")			;
								 printf("\nISQUIOTIBIAIS (Posteriores de coxa mesa Flexora: 3 a 4 X de 8 a 10 repeti��es");
								 printf("\n Cadeira Flexora: 3 a 4 X de 8 a 10 repeti��es \n");
								 
								 printf("\n ADUTORES DE QUADRIL \n ");
								 printf("\n Cadeira Adutora de Quadril: 3 a 4 X de 12 a 15 repeti��es, com isometria de 10 segundos na �ltima repeti��o\n");
								 
								 printf("\nPANTURRILHAS \n");
								 printf("Flex�o Plantar no Leg Press: 3 X de 12 a 15 repeti��es. (Com as mesmas recomenda��es da Panturrilheira solear)");
								 
								 break;
							}
					}
					
		break;
									
		case 2: printf("\n\tTRICEPS \n\t");
							printf("\ntriceps testa: 3x12\n");
							printf("\npuxador triceps(barra reta), concentrado 3x12\n");
							printf("\ntriceps corda (POUCO PESO) SEM ALIMENTAR O EGO(contraia e execute com perfei�ao) 3x15\n");
							printf("\n triceps coice 3x15\n");
			printf("\n\tDESEJA TREINAR MAIS ALGO?: S caso queira ");
			scanf("%s",&resposta);
					if(resposta=='s'||resposta=='S'){
							printf("\n\t1-PEITO \n\t2-COSTAS \n\t3-BICEPS \n\t4- PERNAS");
							printf("\n informe o que voce deseja treinar: ");
							scanf("%d",&ope2);
							switch(ope2){
										case 1:
									printf("\n\t PEITO \n\t");
			printf("\nSupino Reto Aberto com barra longa:  3 X de 8 a 10 repeti��es\n");
			printf("\nCrucifixo no Cross Over: 3 X de 8 a 10 repeti��es\n");
			printf("\nSupino Reto com halter no banco com inclina��o de 30 graus a 45graus+ Crucifixo Reto no mesmo banco (Conjugado): 3 X de 6 + 6 repeti��es (6 de cada exerc�cio sem intervalo).\n");
								break;
									case 2:
										printf("\n\t COSTAS\n\t");
										printf("\n Puxada Aberta com pegada Pronada: 3 a 4 S�ries. � Drop-Set: 5 repeti��es sua carga m�xima para tal") ;
										printf("\n diminua um pouco a carga, sem intervalo e realize mais umas 5 repeti��es\n");
										printf("\n Extens�o de ombros com bra�os estendidos no Pulley alto: 3 X de 08 a 10 repeti��es\n");
										printf("\n Remada aberta sentado: 3 a 4 X de 08 a 10 repeti��es (realize a fase exc�ntrica mais lenta)\n");
											
											break;
											
									case 3: 
											printf("\n\t BICEPS\n\t");
											printf("\n Rosca direta na barra W 3x12 \n");
											printf("\n Rosca direta na barra (3x12)\n");
											printf("\n Rosca direta sentado (3x12)\n");
											printf("\nRosca alternada com halteres (3x12)\n");
											break;
											
								case 4:
											printf("\n\tPERNA\n\t");
											printf("\nQUADRICEPS\n");
										

								printf("Agachamento no Smith Machine: (Este exerc�cio engloba diversos agrupamentos musculares envolvidos,") ;
								printf("como os gl�teos, isquiotibiais, panturrilhas e n�o somente os quadr�ceps. ");
								printf("\nEnt�o, aten��o na hora de configurar sua s�rie. Deixe isso para os profissionais de Educa��o F�sica. N�o posicione os p�s muito a frente do tronco. Capriche na execu��o e nas cargas, respeitando seus limites:\n");
								 printf("\n3 a 4 s�ries de 10 a 12 repeti��es\n");		 
								 
								 printf("\n\t ISQUIOTIBIAIS (Posteriores de coxa) \n\t")			;
								 printf("\nISQUIOTIBIAIS (Posteriores de coxa mesa Flexora: 3 a 4 X de 8 a 10 repeti��es");
								 printf("\n Cadeira Flexora: 3 a 4 X de 8 a 10 repeti��es \n");
								 
								 printf("\n ADUTORES DE QUADRIL \n ");
								 printf("\n Cadeira Adutora de Quadril: 3 a 4 X de 12 a 15 repeti��es, com isometria de 10 segundos na �ltima repeti��o\n");
								 
								 printf("\nPANTURRILHAS \n");
								 printf("Flex�o Plantar no Leg Press: 3 X de 12 a 15 repeti��es. (Com as mesmas recomenda��es da Panturrilheira solear)");
								 	 
								 break;
							}
					}
					
		break;
				case 3: printf("\n\tCOSTAS\n\t");
						
									printf("\n Puxada Aberta com pegada Pronada: 3 a 4 S�ries. � Drop-Set: 5 repeti��es sua carga m�xima para tal, diminua um pouco a carga, sem intervalo e realize mais umas 5 repeti��es\n");
									printf("\n Extens�o de ombros com bra�os estendidos no Pulley alto: 3 X de 08 a 10 repeti��es\n");
									printf("\n Remada aberta sentado: 3 a 4 X de 08 a 10 repeti��es (realize a fase exc�ntrica mais lenta)\n");
									printf("\n\tDESEJA TREINAR MAIS ALGO?: S caso queira ");
									scanf("%s",&resposta);
									if(resposta=='s'||resposta=='S'){
							printf("\n\t1-PEITO \n\t2-TRICEPS \n\t3-BICEPS \n\t4- PERNAS");
							printf("\n informe o que voce deseja treinar: ");
							scanf("%d",&ope2);
							switch(ope2){
										case 1:
									printf("\n\t PEITO \n\t");
			printf("\nSupino Reto Aberto com barra longa:  3 X de 8 a 10 repeti��es\n");
			printf("\nCrucifixo no Cross Over: 3 X de 8 a 10 repeti��es\n");
			printf("\nSupino Reto com halter no banco com inclina��o de 30 graus a 45graus+ Crucifixo Reto no mesmo banco (Conjugado): 3 X de 6 + 6 repeti��es (6 de cada exerc�cio sem intervalo).\n");
								break;
									case 2:
										printf("\n\tTRICEPS\n\t");
								
							printf("\ntriceps testa: 3x12\n");
							printf("\npuxador triceps(barra reta), concentrado 3x12\n");
							printf("\ntriceps corda (POUCO PESO) SEM ALIMENTAR O EGO(contraia e execute com perfei�ao) 3x15\n");
							printf("\n triceps coice 3x15\n");
											
											break;
											
									case 3: 
											printf("\n\tBICEPS\n\t");
											printf("\nRosca direta na barra W 3x12\n");
											printf("\n Rosca direta na barra (3x12)\n");
											printf("\n Rosca direta sentado (3x12)\n");
											printf("\nRosca alternada com halteres (3x12)\n");
											break;
											
								case 4:
											printf("\n\tPERNA\n\t");
											printf("\n\tQUADRICEPS\n\t");
										

								printf("Agachamento no Smith Machine: (Este exerc�cio engloba diversos agrupamentos musculares envolvidos, como os gl�teos, isquiotibiais, panturrilhas e n�o somente os quadr�ceps. ");
								printf("\nEnt�o, aten��o na hora de configurar sua s�rie. Deixe isso para os profissionais de Educa��o F�sica. N�o posicione os p�s muito a frente do tronco. Capriche na execu��o e nas cargas, respeitando seus limites:\n");
								 printf("\n3 a 4 s�ries de 10 a 12 repeti��es\n");		 
								 
								 printf("\n\t ISQUIOTIBIAIS (Posteriores de coxa) \n\t")			;
								 printf("\nISQUIOTIBIAIS (Posteriores de coxa mesa Flexora: 3 a 4 X de 8 a 10 repeti��es");
								 printf("\n Cadeira Flexora: 3 a 4 X de 8 a 10 repeti��es \n");
								 
								 printf("\n\tADUTORES DE QUADRIL\n\t");
								 printf("\n Cadeira Adutora de Quadril: 3 a 4 X de 12 a 15 repeti��es, com isometria de 10 segundos na �ltima repeti��o\n");
								 
								 printf("\n\t PANTURRILHAS\n\t");
								 printf("\n Flex�o Plantar no Leg Press: 3 X de 12 a 15 repeti��es. (Com as mesmas recomenda��es da Panturrilheira solear)\n");
								 break;
							}
					}
					
		break;
		
		case 4: printf("BICEPS");
			
								printf("\nRosca direta na barra W 3x12\n");
									printf("\nRosca direta na barra (3x12)\n");
									printf("\n Rosca direta sentado (3x12)\n");
									printf("\nRosca alternada com halteres (3x12)\n");
												printf("\n\tDESEJA TREINAR MAIS ALGO?: S caso queira ");
									scanf("%s",&resposta);
									if(resposta=='s'||resposta=='S'){
							printf("\n\t1-PEITO \n\t2-TRICEPS \n\t3-COSTAS \n\t4- PERNAS");
							printf("\n informe o que voce deseja treinar: ");
							scanf("%d",&ope2);
							switch(ope2){
										case 1:
									printf("\n\t PEITO \n\t");
			printf("\nSupino Reto Aberto com barra longa:  3 X de 8 a 10 repeti��es\n");
			printf("\nCrucifixo no Cross Over: 3 X de 8 a 10 repeti��es\n");
			printf("\nSupino Reto com halter no banco com inclina��o de 30 graus a 45graus+ Crucifixo Reto no mesmo banco (Conjugado): 3 X de 6 + 6 repeti��es (6 de cada exerc�cio sem intervalo).\n");
								break;
									case 2:
										printf("\n\t TRICEPS \n\t");
								
									printf("\ntriceps testa: 3x12\n");
									printf("\npuxador triceps(barra reta), concentrado 3x12\n");
									printf("\ntriceps corda (POUCO PESO) SEM ALIMENTAR O EGO(contraia e execute com perfei�ao) 3x15\n");
									printf("\n triceps coice 3x15\n");
											
											break;
											
									case 3: 
											printf("\n\tCOSTAS\n\t");
										
									printf("\n Puxada Aberta com pegada Pronada: 3 a 4 S�ries. � Drop-Set: 5 repeti��es sua carga m�xima para tal, diminua um pouco a carga, sem intervalo e realize mais umas 5 repeti��es\n");
									printf("\n Extens�o de ombros com bra�os estendidos no Pulley alto: 3 X de 08 a 10 repeti��es\n");
									printf("\n Remada aberta sentado: 3 a 4 X de 08 a 10 repeti��es (realize a fase exc�ntrica mais lenta)\n");
								
									break;
											
								case 4:
											printf("\n\tPERNA\n\t");
											printf("\nQUADRICEPS\n");
										

								printf("Agachamento no Smith Machine: (Este exerc�cio engloba diversos agrupamentos musculares envolvidos, como os gl�teos, isquiotibiais, panturrilhas e n�o somente os quadr�ceps. ");
								printf("\nEnt�o, aten��o na hora de configurar sua s�rie. Deixe isso para os profissionais de Educa��o F�sica. N�o posicione os p�s muito a frente do tronco. Capriche na execu��o e nas cargas, respeitando seus limites:\n");
								 printf("\n3 a 4 s�ries de 10 a 12 repeti��es\n");		 
								 
								 printf("\nISQUIOTIBIAIS (Posteriores de coxa) \n")			;
								 printf("\nISQUIOTIBIAIS (Posteriores de coxa mesa Flexora: 3 a 4 X de 8 a 10 repeti��es");
								 printf("\n Cadeira Flexora: 3 a 4 X de 8 a 10 repeti��es \n");
								 
								 printf("\n ADUTORES DE QUADRIL \n ");
								 printf("\n Cadeira Adutora de Quadril: 3 a 4 X de 12 a 15 repeti��es, com isometria de 10 segundos na �ltima repeti��o\n");
								 
								 printf("\nPANTURRILHAS \n");
								 printf("\n Flex�o Plantar no Leg Press: 3 X de 12 a 15 repeti��es. (Com as mesmas recomenda��es da Panturrilheira solear)\n");
								 
								 break;
							}
					}
					
		break;
		
			case 5: 
												printf("\n\tPERNA\n\t");
											printf("\nQUADRICEPS\n");
										

								printf("\n Agachamento no Smith Machine: (Este exerc�cio engloba diversos agrupamentos musculares envolvidos, como os gl�teos, isquiotibiais, panturrilhas e n�o somente os quadr�ceps. \n ");
								printf("\nEnt�o, aten��o na hora de configurar sua s�rie. Deixe isso para os profissionais de Educa��o F�sica. N�o posicione os p�s muito a frente do tronco. Capriche na execu��o e nas cargas, respeitando seus limites:\n");
								 printf("\n3 a 4 s�ries de 10 a 12 repeti��es\n");		 
								 
								 printf("\nISQUIOTIBIAIS (Posteriores de coxa) \n")			;
								 printf("\nISQUIOTIBIAIS (Posteriores de coxa mesa Flexora: 3 a 4 X de 8 a 10 repeti��es");
								 printf("\n Cadeira Flexora: 3 a 4 X de 8 a 10 repeti��es \n");
								 
								 printf("\n ADUTORES DE QUADRIL \n ");
								 printf("\n Cadeira Adutora de Quadril: 3 a 4 X de 12 a 15 repeti��es, com isometria de 10 segundos na �ltima repeti��o\n");
								 
								 printf("\nPANTURRILHAS \n");
								 printf("Flex�o Plantar no Leg Press: 3 X de 12 a 15 repeti��es. (Com as mesmas recomenda��es da Panturrilheira solear)");
								 
								 	printf("\n\tDESEJA TREINAR MAIS ALGO?: S caso queira ");
									scanf("%s",&resposta);
									if(resposta=='s'||resposta=='S'){
							printf("\n\t1-PEITO \n\t2-TRICEPS \n\t3-COSTAS \n\t4- BICEPS");
							printf("\n informe o que voce deseja treinar: ");
							scanf("%d",&ope2);
							switch(ope2){
										case 1:
									printf("\n\t PEITO \n\t");
							printf("\nSupino Reto Aberto com barra longa:  3 X de 8 a 10 repeti��es\n");
							printf("\nCrucifixo no Cross Over: 3 X de 8 a 10 repeti��es\n");
							printf("\nSupino Reto com halter no banco com inclina��o de 30 graus a 45graus+ Crucifixo Reto no mesmo banco (Conjugado): 3 X de 6 + 6 repeti��es (6 de cada exerc�cio sem intervalo).\n");
								break;
									case 2:
										printf("\n\tTRICEPS\n\t");
								
							printf("\ntriceps testa: 3x12\n");
							printf("\npuxador triceps(barra reta), concentrado 3x12\n");
							printf("\ntriceps corda (POUCO PESO) SEM ALIMENTAR O EGO(contraia e execute com perfei�ao) 3x15\n");
							printf("\n triceps coice 3x15\n");
											
											break;
											
									case 3: 
											printf("\n\tCOSTAS\n\t");
										
									printf("\n Puxada Aberta com pegada Pronada: 3 a 4 S�ries. � Drop-Set: 5 repeti��es sua carga m�xima para tal, diminua um pouco a carga, sem intervalo e realize mais umas 5 repeti��es\n");
									printf("\n Extens�o de ombros com bra�os estendidos no Pulley alto: 3 X de 08 a 10 repeti��es\n");
									printf("\n Remada aberta sentado: 3 a 4 X de 08 a 10 repeti��es (realize a fase exc�ntrica mais lenta)\n");
								
											
								case 4:
											 printf("BICEPS");
			
								printf("\nRosca direta na barra W 3x12");
									printf("\nRosca direta na barra (3x12)\n");
									printf("\n Rosca direta sentado (3x12) \n");
									printf("\nRosca alternada com halteres (3x12)\n");
									break;
							}
					}
					
		break;
	}
			
			printf("Deseja algo mais?");
			scanf("%s",&resposta);
			system("clear||cls");
			
				if(resposta=='s'||resposta=='S'){
				
						printf("\n\t1-Whey 1kg (R$:120,00)\n\t2-Creatina 600g(R$:100,00) \n\t3-Albumina 1kg(R$:90,00) ");
						printf("\ninforme o que deseja: ");
						scanf("%d",&ope3);
						switch(ope3){
								case 1: 
									printf("\ninforme quantos pacotes voce deseja levar: ");
									scanf("%d",&wheypct);
									
									wheytotal=wheypct*120;
									
									printf("\no valor total do whey ficou em: %d\n",wheytotal);					
									break;
									
							case 2: 
									printf("\n informe quantos potes de creatina voce deseja levar: ");
									scanf("%d",&creatinapote);
									
									creatinatotal=creatinapote*100;
									
									printf("\no valor total da creatina ficou em: %d",creatinatotal);					
									break;
									
								case 3: 
									printf("informe quantos pacotes de albumina voce deseja levar: ");
									scanf("%d",&albupct);
									
									albutotal=albupct*90;
									
									printf("\n o valor total da creatina ficou em: %d",albutotal);					
									break;	
						}
						
			}
			printf("\npor fim avalie-nos: \n");
			printf("\n\t1- 5 estrelas\n\t2- 4 estrelas \n\t3- 3 estrelas\n\t4- 2 estrelas\n\t5- 1 estrela");
			printf("\n R: ");
			scanf("%d", &ope4);
			switch(ope4){
					
					case 1: 
							printf("\nuau obrigado pela avalicao\n");		
							break;
							
								case 2: 
							printf("\nobrigado pela avalicao\n");		
							break;
							
								case 3: 
							printf("\ntalvez nao tenhamos alcan�ado suas expectativas, obrigado\n");		
							break;
							
							
								case 4: 
							printf("\ntalvez nao tenhamos alcan�ado suas expectativas, obrigado\n");		
							break;
							
								case 5: 
							printf("\ntalvez nao tenhamos alcan�ado suas expectativas, obrigado\n");		
							break;
			}
}
