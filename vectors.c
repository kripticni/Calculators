#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

typedef struct{
  uint8_t *arr; //I didnt learn vectors, im just implementing
  int size; //on my own, i pretty much think its a resizeable array
  int capacity; // so im naming the data as *arr.
}Vector;

void vector_resize(Vector* vector, int new_capacity){
  if(vector->capacity > new_capacity){
    vector->capacity += new_capacity;
  }else{
    vector->capacity = new_capacity;
  }
  vector->arr = (uint8_t*)realloc(vector->arr, vector->capacity * sizeof(uint8_t));
  // i do wonder if sizeof(int) gets converted to a constant at compile
  // time, i might want to check the .asm for that
  return;
}

void vector_push(Vector* vector, int value){
  if(vector->size == vector->capacity){
    vector_resize(vector, vector->capacity *2);
  }
  vector->arr[vector->size++] = value;
  return; //nice one liner
}

void vector_free(Vector *vector) {
    free(vector->arr);
    vector->arr = NULL;
    vector->size = 0;
    vector->capacity = 0;
}

//LGTM, i dont really need anything else
//just need to store continious user input,
//and ill init in the program


int main(){
  printf("Initialising the calculator...");

  Vector input;
  input.size = 0;
  input.capacity = 40;
  input.arr = (uint8_t*)malloc(40  * sizeof(uint8_t));
  //I also wonder would the compiler translate input.capacity to 
  //a constant 40 because there is nothing in between?
  //I should really get a linter and formatter

  printf("Insert S for single input mode or M for multi input mode");
  //just realised this can be done without a damn vector, i can just use 2 arrays, and its even better...
}
