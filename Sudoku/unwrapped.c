#include <stdio.h>
#include <stdlib.h>

void main(){
  for(int j=0, i;j<9;j++){
    for(i=0;i<9;i++){
      printf("if(matrix[%i]) { masks[%i] |= 1 << matrix[%i];\t",i+j*9,i,i+j*9);
      printf(" masks[%i] |= 1 << matrix[%i]; \t",9+j,i+j*9);
      printf(" masks[%i] |= 1 << matrix[%i]; }", 18+i/3 *3 +j/3,i+j*9);
      //printf(" values[%i]++; values[%i]++; values[%i]++; }", i, 9+j, 18+ i/3 *3 +j/3);
      printf(" \narr_opt[%i].pointer = &matrix[%i];\n",i+j*9,i+j*9);
    }
  }
}
