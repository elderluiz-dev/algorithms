#include <stdio.h>

void velha(char tab[3][3]){
  int count = 0;
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%c", tab[i][j]);
      count++;
      
      if( j != 2){
        printf("|");
      }
      
      if(count == 3){
        printf("\n");
        count = 0;
        
        
      }
    };
  };
}

void hl(){
  printf("\n");
}

void lerLocal(int *l, int *c, int *vez){
  char symb = ' ';

  if(*vez % 2 == 0){
    symb = 'X';
    *vez = *vez + 1;
  }else{
    symb = 'O';
    *vez = *vez + 1;
  }

  printf("DIGITE A LINHA DO %c: ", symb);
  do {
    scanf("%d", l);
  }while(*l > 3 || *l < 1);
  
  printf("DIGITE A COLUNA DO %c: ", symb);
  do {
    scanf("%d", c);
  }while(*c > 3 || *c < 1);
}

int main(){
  char tab[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
};

  int vez = 0; 
  int l = 0;
  int c = 0;

  printf("JOGO DA VELHA\n--------------\n");
  for(int i = 0; i < 9; i++){
    velha(tab);
    hl();
    
    char symb = ' ';

    if(vez % 2 == 0){
      symb = 'X';
    }else{
      symb = 'O';
    }
    
    lerCoordenadas:
      lerLocal(&l, &c, &vez);
      if(tab[l - 1][c - 1] == ' '){
        tab[l - 1][c - 1] = symb;
      }else{
        printf("\n  LOCAL JÁ MARCADO\n");
        goto lerCoordenadas;
      }
  }
  
  printf("\n-----RESULTADO FINAL-----");
  velha(tab);
  
  return 0;
}
