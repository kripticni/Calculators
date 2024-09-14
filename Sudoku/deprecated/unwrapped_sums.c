#include <stdio.h>
#include <stdlib.h>

void main(){
  for(int j=0, i; j<9;j++){
    for(i=0;i<9;i++){
      printf("arr_opt[%i].not = values[%i] + values[%i] + values[%i]; \n", i+j*9, i, 9+j, 18+ i/3 *3 +j/3);
    }
  }
}
