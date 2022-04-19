//
//  teste.c
//  ED
//
//  Created by Wilker Maia on 27/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 1;

    while (n) {

        printf("Informe o Valor de N: ");

        scanf("%d", &n);

        if (!n) return 0;

        int i, cont = 0;

        for (i=1;i<=n;i++) {
            if ( (n%i) == 0)
            {
                cont++;
                printf("Divisor de %d: %d\n", n,i);
            }
        }
        if ( cont == 2) {
            printf("O numero %d E PRIMO pois possui %d divisores\n",n,cont);
        } else {
            printf("O numero %d NAO E PRIMO pois possui %d divisores\n",n,cont);
        }
        cont = 1;
        for (i=1;i<=n;i++) cont = cont * i;
        printf("O Fatorial de N e: %d\n",cont);
        printf("A raiz quadrada de %d\n ‚ %f\n", n, sqrt(n));
    }
}
