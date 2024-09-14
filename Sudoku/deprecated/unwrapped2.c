#include <stdio.h>
#include <stdlib.h>

void main(){
  for(int i=0, j;i<81;i++){
    for(j=0;j<3;j++){
      printf("if(matrix[%i]) \n", i);
    }
  }
}
