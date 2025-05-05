 #include <stdio.h>

 int main()
 {
   int dia;

   printf("Escolha um número: \n");
   scanf("%d", &dia);
   
   switch(dia){
     case 1:
        printf("O seu dia é domingo.");
        break;
     case 2:
        printf("O seu dia é segunda-feira.");
        break;
     case 3:
        printf("O seu dia é terça-feira.");
        break;
     case 4:
        printf("O seu dia é quarta-feira.");
        break;
     case 5:
        printf("O seu dia é quinta-feira.");
        break;
     case 6:
        printf("O seu dia é sexta-feira.");
        break;
     case 7:
        printf("O seu dia é sábado.");
        break;
   }

   return 0;
 }
