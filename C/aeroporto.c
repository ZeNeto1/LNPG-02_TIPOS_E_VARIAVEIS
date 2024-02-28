#include <stdio.h>
#include <string.h>

int main(void) {
int passageiros = 5;
    for(int i = 0; i <= passageiros; i++){
        printf("Bem vindo, possui RG? ");
        char rg[10];
        scanf("%s", rg);
        char nascimentoRG[10];
            if(strcmp(rg, "sim") == 0){
                printf("Qual a sua data de nascimento? ");
                scanf("%s", nascimentoRG);
            }
            else{
                printf("Voce deve se direcionar a saida");
                break;    
        }
        printf("Possui bilhete? ");
        char bilhete[10];
        scanf("%s", bilhete);
            if(strcmp(bilhete,"sim")== 0){
                printf("Qual a data de nascimento do bilhete? ");
                char nascimentobilhete[10];
                scanf("%s", nascimentobilhete);
                if(strcmp(nascimentoRG, nascimentobilhete) != 0){
                    printf("Discando 190.");
                    break;
                }
            }
            else{
                printf("Voce deve se direcionar a recepcao");
                break;    
        }
          printf("Qual o seu assento? ");
          char assento[4];
          scanf("%s", assento);
          printf("Bem vindo! Pode embarcar no assento %s\n Tenha uma boa Viagem.",assento);
          break;
        }
  } 