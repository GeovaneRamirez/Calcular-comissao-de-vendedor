#include <stdio.h>
#include <stdlib.h>

int main()
{


    double valor_da_venda;
    float comissao;
    double lucro_do_vendedor;

    printf("Digite o valor da venda: \n");

    scanf ("%lf", &valor_da_venda);

    printf ("Digite o valor da comissao: \n");

    scanf ("%f", &comissao);

    lucro_do_vendedor = (valor_da_venda*comissao)/100;


    printf ("O vendedor ganhou %.2lf reais de comissao.", lucro_do_vendedor);

    return 0;
}
