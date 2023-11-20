#include <stdio.h>

int main(){
int meses = 0;
float valor_investido = 0;
float taxa_juros = 0;
float montante_mensal = 0;

scanf("%d", &meses);
scanf("%f", &valor_investido);
scanf("%f", &taxa_juros);

montante_mensal = valor_investido;

for(int i = 1; i <= meses; i++){
    printf("Montante ao fim do mes %d: R$ %.2f\n", i, montante_mensal);
    montante_mensal *= (1 + taxa_juros);
}


    return 0;
}
