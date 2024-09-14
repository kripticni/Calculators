#include <stdio.h>
#include <stdlib.h>

void main(){
  for(int j=0, i; j<9;j++){
    for(i=0;i<9;i++){
      printf("mask[%i] = masks[%i] | masks[%i] | masks[%i]; \n", i+j*9, i, 9+j, 18+ i/3 *3 +j/3);
    }
  }
  printf("\n\n");
  for(int j=0;j<9;j++){ 
  for(int i=0;i<9;i++){
    printf("arr_opt[%i].not += ", i+j*9);
    for(int z=0;z<9;z++){
        printf(" (1 & (mask[%i] >> %i)) +", i+j*9, z);
    }
    printf("\b;\n");
  }
  }
}
