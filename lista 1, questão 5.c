#include <stdio.h>

int main(){

preco_original = float(input("Digite o pre�o original do produto (R$): "))

desconto = preco_original * 0.20

preco_com_desconto = preco_original - desconto

print("\n===== TABELA DE DESCONTO =====")
print(f"Pre�o original:       R$ {preco_original:.2f}")
print(f"Voc� ganhou:          R$ {desconto:.2f} de desconto")
print(f"Pre�o com desconto:   R$ {preco_com_desconto:.2f}")


return 0;
}
