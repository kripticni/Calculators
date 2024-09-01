#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

void madnessCalculator(int arr[], uint16_t mask, uint16_t mask_used, uint64_t sum){
  //int i=0; //i want this allocated memory to be freed when the stack collapses, so im declaring it ahead of the loop
  //well sadly this actually need to be typed manually because bits are not related and are instead in alphabetical order
  //so we dont need a iterator, i guess thats 4 bytes less per stack!
  //also mask starts with all zeroes because its easier to set ones than zeroes

  if(sum > 19){
    printf("Madness Potion craftable with: ");
    if(mask_used & 1) printf("Abate ");
    if(mask_used & 2) printf("Accrue ");
    if(mask_used & 4) printf("Algid ");
    if(mask_used & 8) printf("Ardor ");
    if(mask_used & 16) printf("Cavort ");
    if(mask_used & 32) printf("Fervor ");
    if(mask_used & 64) printf("Ichor ");
    if(mask_used & 128) printf("Gambol ");
    if(mask_used & 256) printf("Lucre ");
    if(mask_used & 512) printf("Luminous ");
    if(mask_used & 1024) printf("Skew ");
    if(mask_used & 2048) printf("Tenebrous ");
    if(mask_used & 4096) printf("Theriac ");
    if(mask_used & 8192) printf("Torrid ");
    if(mask_used & 16384) printf("Vigor ");
    if(mask_used & 32768) printf("Virulent");
    printf("\n");
  }

  if(!(mask & (uint16_t)1)){
    //mask |= 1; self
    //mask |= 2; accrue
    //mask |= 64; ichor
    madnessCalculator(arr, ((mask | 1) | 2) | 64, mask_used | 1, sum + arr[0]);
    //apparently no need to backtrack because this does it, pretty much, and faster!
  }

  //ill finish the rest soon

  
}

int main(){
  printf("Initializing the calculator...");

  enum berries{
    Abate,
    Accrue,
    Algid,
    Ardor,
    Cavort,
    Fervor,
    Ichor,
    Gambol,
    Lucre,
    Luminous,
    Skew,
    Tenebrous,
    Theriac,
    Torrid,
    Vigor,
    Virulent,
  }; // this can basically be stored in 4 bits, because of 16 states
  // and i only need 16 array elements, but a type cant be smaller than 
  // 8 bits anyways
  //
  // but if we start with 16 bits for every possible berry in one variable
  // we can bitmask away 2 bits for every berry that is mutable with another
  // until that variable is 0
  //
  // so we start with
  // 1111111111111111
  // and if we have and abate, it mixes with accrue and ichor
  // so we would zero it out, as well as abate itself since we would use up all abates
  // immediatly, since we store all berries in a num array, and we get
  // 0011110111111111
  // so we cant use elements that have a zero, we can do a bitshift with i and i be the element/berry
  //
  // a function can be made using recursive backtracking, i am certain
  // its mentioned in that book i made, ill revisit that

  int input[16];
  char bufferSingle[11];
  uint16_t sumSingle;
  uint64_t bufferMulti;
  bool state;
  char character;
  int i;
  
  printf("You may change your mode later by type either [s] or [m].\nChoose a mode, Single or Multi: [s/m] ");
  
input_loop:
  fflush(stdin);
  character=getchar();
  if(character == 'M' || character == 'S'){
    character = character + 32;
  } // you can maybe optimize both of this conditions, but it doesnt really matter since its based on human input (i think, in this case)
  if(character != 'm' && character != 's'){
    printf("\nWrong input, you can only enter s/m.");
    goto input_loop;
  }

  printf("\nCorrect input.\n");
  if(character == 'm'){
    printf("Abate: ");
    scanf("%lu", &bufferMulti);
    input[0]+=bufferMulti;

    printf("Accrue: ");
    scanf("%lu", &bufferMulti);
    input[1]+=bufferMulti;

    printf("Algid: ");
    scanf("%lu", &bufferMulti);
    input[2]+=bufferMulti;

    printf("Ardor: ");
    scanf("%lu", &bufferMulti);
    input[3]+=bufferMulti;

    printf("Cavort: ");
    scanf("%lu", &bufferMulti);
    input[4]+=bufferMulti;

    printf("Fervor: ");
    scanf("%lu", &bufferMulti);
    input[5]+=bufferMulti;

    printf("Ichor: ");
    scanf("%lu", &bufferMulti);
    input[6]+=bufferMulti;

    printf("Gambol: ");
    scanf("%lu", &bufferMulti);
    input[7]+=bufferMulti;

    printf("Lucre: ");
    scanf("%lu", &bufferMulti);
    input[8]+=bufferMulti;

    printf("Luminous: ");
    scanf("%lu", &bufferMulti);
    input[9]+=bufferMulti;

    printf("Skew: ");
    scanf("%lu", &bufferMulti);
    input[10]+=bufferMulti;

    printf("Tenebrous: ");
    scanf("%lu", &bufferMulti);
    input[11]+=bufferMulti;

    printf("Theriac: ");
    scanf("%lu", &bufferMulti);
    input[12]+=bufferMulti;

    printf("Torrid: ");
    scanf("%lu", &bufferMulti);
    input[13]+=bufferMulti;

    printf("Vigor: ");
    scanf("%lu", &bufferMulti);
    input[14]+=bufferMulti;

    printf("Virulent: ");
    scanf("%lu", &bufferMulti);
    input[15]+=bufferMulti; //easier than typing out the enum
  }else{
  start_single:

  printf("Enter the name of your berry: ");

  while((character=getchar()) != '\n'  && character!=EOF){}
  
  if(fgets(bufferSingle,sizeof(bufferSingle),stdin)!=NULL) {
      bufferSingle[strcspn(bufferSingle,"\n")]='\0';
  }

  for(i=0, sumSingle=0; bufferSingle[i]!='\0'; ++i){
    if(!isalpha(bufferSingle[i])){
        printf("Wrong input, insert a valid berry.");
        goto start_single;
    }
  
    bufferSingle[i] = tolower(bufferSingle[i]);

    sumSingle += bufferSingle[i]; 
    }
    if(bufferSingle[0] == 'f') sumSingle++; 

    switch(sumSingle){
      case 519:
        input[Abate]++;
        break;
      case 637:
        input[Accrue]++;
        break;
      case 523:
        input[Algid]++;
        break;
      case 546:
        input[Ardor]++;
        break;
      case 665:
        input[Cavort]++;
        break;
      case 671: //the actual sum is 670 but that would conflict with torrid, so there is logic to add 1
        input[Fervor]++;
        break;
      case 543:
        input[Ichor]++;
        break;
      case 636:
        input[Gambol]++;
        break;
      case 549:
        input[Lucre]++;
        break;
      case 902:
        input[Luminous]++;
        break;
      case 452:
        input[Skew]++;
        break;
      case 983:
        input[Tenebrous]++;
        break;
      case 746:
        input[Theriac]++;
        break;
      case 670:
        input[Torrid]++;
        break;
      case 561:
        input[Vigor]++;
        break;
      case 899:
        input[Virulent]++;
        break;
    }
  }

  madnessCalculator(input, 0, 0, 0);

}
