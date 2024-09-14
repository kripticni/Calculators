#include <stdio.h>
#include <stdlib.h>

int main(){
  for(int i=1, j; i<81; ++i){
    printf("\ntemp = arr_opt[%i];\n", i);
    for(j=i-1; j>=0; j--){
      printf("if(arr_opt[%i].not < temp.not) { arr_opt[%i] = temp; goto skip%i; } ", j, j+1, i);
      printf("arr_opt[%i] = arr_opt[%i]; \n", j, j+1);
    }
    printf("\narr_opt[%i] = temp;\n", j+1);
    printf("\nskip%i:", i);
  }
}
