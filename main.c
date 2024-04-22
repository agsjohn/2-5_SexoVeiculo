#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    char sexo;
    do{
        printf("Digite seu sexo: ");
        scanf("%c", &sexo);
        getchar();
        while(sexo != 's' && sexo != 'S' && sexo != 'M' && sexo != 'm' && sexo != 'f' && sexo != 'F'){
            printf("Sexo inválido, digite novamente: ");
            scanf("%c", &sexo);
            getchar();
        }
        if(sexo != 's' && sexo != 'S'){
            printf("Digite sua idade: ");
            scanf("%i", &idade);
            getchar();
            if(idade >= 18){
                if(sexo == 'M' || sexo == 'm'){
                    printf("Pode ter um automóvel azul");
                }
                else{
                    printf("Pode ter um automóvel rosa");
                }
            }
            else{
                if(sexo == 'm' || sexo == 'M'){
                    printf("Pode ter uma bicicleta azul");
                }
                else{
                    printf("Pode ter uma bicicleta rosa");
                }
            }
            printf("\n\n");
        }
    }while(sexo != 's' && sexo != 'S');
  printf("\n");
  printf("Finalizando programa");
  getchar();
}
