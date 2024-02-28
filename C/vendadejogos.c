#include <stdio.h>

int main(){
  int vendas;
  float preco = 19.90;
  printf("Digite o valor da quantidade de vendas feitas: ");
  scanf("%d", &vendas);
  float vendastotais = (vendas * preco);
  float bonus = vendas / 15 > 0 ? vendastotais * (vendas / 15 * 0.08) : 0;
  float salariocatarina = vendastotais /2 + bonus;

  printf("O valor total das vendas foi: %.2f\n", vendastotais);
  printf("O total de bônus de Catarina foi: %.2f\n", bonus);
  printf("O salário que Catarina recebera é: %.2f\n", salariocatarina);
}