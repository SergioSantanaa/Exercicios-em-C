#include<stdio.h>

main(){
	int A;
	
	printf("Digite um numerode 1 a 7 para escolher o dia da semana\n");
	scanf("%d",&A);
	switch(A){
		case 1: printf("Domingo\n");
		break;
			case 2: printf("Segunda\n");
			break;
				case 3: printf("Terca\n");
				break;
					case 4: printf("Quarta\n");
					break;
						case 5: printf("Quinta\n");
						break;
							case 6: printf("Sexta\n");
							break;
								case 7: printf("Sabado\n          ");
								break;
								default:
									printf("A opcao informada eh invalida");
									
	}
}
