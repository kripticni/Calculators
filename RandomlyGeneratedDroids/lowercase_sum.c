#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[12];
  fgets(str, 10, stdin);

  int sumSingle;
  for(int i=0;str[i]!='\0';i++){
    sumSingle += str[i];
  }

  printf("%i", sumSingle);
}
