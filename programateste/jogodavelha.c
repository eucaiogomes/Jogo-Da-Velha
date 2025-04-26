#include <stdio.h>

int main()
{
int pontosX =0;
int pontosO = 0;
int vencedor=0;
char sim = 'n';
int sair = 0; 
int posicao;
char cima[100] = {'_','_','_','1','_','_','_','|','_','_','_','2','_','_','_','|','_','_','_','3'};
char meio[100] = {'_','_','_','4','_','_','_','|','_','_','_','5','_','_','_','|','_','_','_','6'};
char baixo[100] = {'_','_','_','8','_','_','_','|','_','_','_','7','_','_','_','|','_','_','_','9'};

while (sair!=6)
{
   if(cima[3]=='X' && cima[11] == 'X' && cima[19]=='X'){
      printf("\n\nVENCEDOR X!!!");
      pontosX++;
      vencedor = 1;
      
   }
   if(meio[3]=='X' && meio[11] == 'X' && meio[19]=='X'){
      printf("\n\nVENCEDOR X!!!");
      pontosX++;
      vencedor = 1;
      
   }
   if(baixo[3]=='X' && baixo[11] == 'X' && baixo[19]=='X'){
      printf("\n\nVENCEDOR X!!!");
      vencedor = 1;
      pontosX++;
      
   }
   if(cima[3]=='X' && meio[3] == 'X' && baixo[3]=='X'){
      printf("\n\nVENCEDOR X!!!");
      vencedor = 1;
      pontosX++;
   }
   if(cima[11]=='X' && meio[11] == 'X' && baixo[11]=='X'){
      printf("\n\nVENCEDOR X!!!");
      vencedor = 1;
      pontosX++;
   }
   if(cima[19]=='X' && meio[19] == 'X' && baixo[19]=='X'){
      printf("\n\nVENCEDOR X!!!");
      vencedor = 1;
      pontosX++;
   }
   if(cima[3]=='X' && meio[11] == 'X' && baixo[19]=='X'){
      printf("\n\nVENCEDOR X!!!");
      vencedor = 1;
      pontosX++;
   }
   if(cima[19]=='X' && meio[11] == 'X' && baixo[3]=='X'){
      printf("\n\nVENCEDOR X!!!");
      vencedor = 1;
      pontosX++;
   }
   if(cima[3]=='O' && cima[11] == 'O' && cima[19]=='O'){
      printf("\n\nVENCEDOR O!!!");
      vencedor = 1;
      pontosO++;
   }
   if(meio[3]=='O' && meio[11] == 'O' && meio[19]=='O'){
      printf("\n\nVENCEDOR O!!!");
      vencedor = 1;
      pontosO++;
   }
   if(baixo[3]=='O' && baixo[11] == 'O' && baixo[19]=='O'){
      printf("\n\nVENCEDOR O!!!");
      vencedor = 1;
      pontosO++;
   }
   if(cima[3]=='O' && meio[3] == 'O' && baixo[3]=='O'){
      printf("\n\nVENCEDOR O!!!");
      vencedor = 1;
      pontosO++;
   }
   if(cima[11]=='O' && meio[11] == 'O' && baixo[11]=='O'){
      printf("\n\nVENCEDOR O!!!");
      vencedor = 1;
      pontosO++;
   }
   if(cima[19]=='O' && meio[19] == 'O' && baixo[19]=='O'){
      printf("\n\nVENCEDOR O!!!");
      pontosO++;
      vencedor = 1;
      
   }
   if(cima[3]=='O' && meio[11] == 'O' && baixo[19]=='O'){
      printf("\n\nVENCEDOR O!!!");
      vencedor = 1;
      pontosO++;
   }
   if(cima[19]=='O' && meio[11] == 'O' && baixo[3]=='O'){
      printf("\n\nVENCEDOR O!!!");
      vencedor = 1;
      pontosO++;
   }
   
   else{
      printf("\n----JOGO DA VELHA----\n\n");
      printf("Pontos X = %d\n", pontosX);
      printf("\nPontos O = %d\n-------------\n", pontosO);

      for(int i = 0;i<20;i++){
         printf("%c", cima[i]);
      }
      printf("\n");
      for(int j=0;j<20;j++){      
         printf("%c", meio[j]);
      }
      printf("\n");
      for(int k = 0;k<20;k++){  
         printf("%c", baixo[k]);      
      }

      if(vencedor==1){
         printf("\nDeseja continuar?s/n");
         scanf("%c", &sim);
         if(sim=='s'||sim=='S'){
            printf("Encerrando...");
            sair = 6;
         }
      }else{
      vencedor = 0;
      printf("\n\nJogador X - Digite a posicao desejada: ");
      scanf("%d", &posicao);
        
      switch (posicao){
         case 1:
         cima[3] = 'X';
         pontosX+=1;
         break;
         case 2:
         cima[11] = 'X';
         pontosX+=2;
         break;
         case 3:
         cima[19] = 'X';
         pontosX+=3;
         break;
         case 4:
         meio[3] = 'X';
         pontosX+=4;
         break;
         case 5:
         meio[11] = 'X';
         pontosX+=5;
         break;
         case 6:
         meio[19] = 'X';
         pontosX +=6;
         break;
         case 7:
         baixo[3] = 'X';
         pontosX+=7;
         break;
         case 8:
         baixo[11] = 'X';
         pontosX+=8;
         break;
         case 9:
         baixo[19] = 'X';
         pontosX+=9;
         break;
         default:
         break;
      }
      printf("\nJogador O - Digite a posicao desejada: ");
      scanf("%d", &posicao);
   
      switch (posicao){
         case 1:
         cima[3] = 'O';
         pontosO+=1;
         break;
         case 2:
         cima[11] = 'O';
         pontosO+=2;
         break;
         case 3:
         cima[19] = 'O';
         pontosO+=3;
         break;
         case 4:
         meio[3] = 'O';
         pontosO+=4;
         break;
         case 5:
         meio[11] = 'O';
         pontosO+=5;
         break;
         case 6:
         meio[19] = 'O';
         pontosO+=6;
         break;
         case 7:
         baixo[3] = 'O';
         pontosO+=7;
         break;
         case 8:
         baixo[11] = 'O';
         pontosO+=8;
         break;
         case 9:
         baixo[19] = 'O';
         pontosO+=9;
         break;
         default:
         break;
      }
      }
      
   }
}

}