#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define N 81
#define n 9

typedef struct{ 
  unsigned int not:4;
  uint8_t* pointer;
}qArray;

void BubbleSort(qArray arr[],int nmax){
  for(register int i=0;i<nmax-1; i++){
    for(register int j=0;j<nmax-i-1;j++){
      if(arr[j].not>arr[j+1].not){
        register qArray pom = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = pom;
      }
    }
  }
}

int main(){
  //case from geeks for geeks for the matrix
  uint8_t matrix[N] = 
    { 3, 0, 6, 5, 0, 8, 4, 0, 0 ,
      5, 2, 0, 0, 0, 0, 0, 0, 0 ,
      0, 8, 7, 0, 0, 0, 0, 3, 1 ,
      0, 0, 3, 0, 1, 0, 0, 8, 0 ,
      9, 0, 0, 8, 6, 3, 0, 0, 5 ,
      0, 5, 0, 0, 9, 0, 6, 0, 0 ,
      1, 3, 0, 0, 0, 0, 2, 5, 0 ,
      0, 0, 0, 0, 0, 0, 0, 7, 4 ,
      0, 0, 5, 2, 0, 6, 3, 0, 0  };
  uint16_t mask[N];

  qArray arr_opt[N];
  uint16_t masks[n*3];

  memset(arr_opt, 0, sizeof(arr_opt));
  memset(masks, 0, sizeof(masks));

  if(matrix[0]) { masks[0] |= 1 << matrix[0];	masks[9] |= 1 << matrix[0]; 	masks[18] |= 1 << matrix[0]; } 
  arr_opt[0].pointer = &matrix[0];
  if(matrix[1]) { masks[1] |= 1 << matrix[1];	masks[9] |= 1 << matrix[1]; 	masks[18] |= 1 << matrix[1]; } 
  arr_opt[1].pointer = &matrix[1];
  if(matrix[2]) { masks[2] |= 1 << matrix[2];	masks[9] |= 1 << matrix[2]; 	masks[18] |= 1 << matrix[2]; } 
  arr_opt[2].pointer = &matrix[2];
  if(matrix[3]) { masks[3] |= 1 << matrix[3];	masks[9] |= 1 << matrix[3]; 	masks[21] |= 1 << matrix[3]; } 
  arr_opt[3].pointer = &matrix[3];
  if(matrix[4]) { masks[4] |= 1 << matrix[4];	masks[9] |= 1 << matrix[4]; 	masks[21] |= 1 << matrix[4]; } 
  arr_opt[4].pointer = &matrix[4];
  if(matrix[5]) { masks[5] |= 1 << matrix[5];	masks[9] |= 1 << matrix[5]; 	masks[21] |= 1 << matrix[5]; } 
  arr_opt[5].pointer = &matrix[5];
  if(matrix[6]) { masks[6] |= 1 << matrix[6];	masks[9] |= 1 << matrix[6]; 	masks[24] |= 1 << matrix[6]; } 
  arr_opt[6].pointer = &matrix[6];
  if(matrix[7]) { masks[7] |= 1 << matrix[7];	masks[9] |= 1 << matrix[7]; 	masks[24] |= 1 << matrix[7]; } 
  arr_opt[7].pointer = &matrix[7];
  if(matrix[8]) { masks[8] |= 1 << matrix[8];	masks[9] |= 1 << matrix[8]; 	masks[24] |= 1 << matrix[8]; } 
  arr_opt[8].pointer = &matrix[8];
  if(matrix[9]) { masks[0] |= 1 << matrix[9];	masks[10] |= 1 << matrix[9]; 	masks[18] |= 1 << matrix[9]; } 
  arr_opt[9].pointer = &matrix[9];
  if(matrix[10]) { masks[1] |= 1 << matrix[10];	masks[10] |= 1 << matrix[10]; 	masks[18] |= 1 << matrix[10]; } 
  arr_opt[10].pointer = &matrix[10];
  if(matrix[11]) { masks[2] |= 1 << matrix[11];	masks[10] |= 1 << matrix[11]; 	masks[18] |= 1 << matrix[11]; } 
  arr_opt[11].pointer = &matrix[11];
  if(matrix[12]) { masks[3] |= 1 << matrix[12];	masks[10] |= 1 << matrix[12]; 	masks[21] |= 1 << matrix[12]; } 
  arr_opt[12].pointer = &matrix[12];
  if(matrix[13]) { masks[4] |= 1 << matrix[13];	masks[10] |= 1 << matrix[13]; 	masks[21] |= 1 << matrix[13]; } 
  arr_opt[13].pointer = &matrix[13];
  if(matrix[14]) { masks[5] |= 1 << matrix[14];	masks[10] |= 1 << matrix[14]; 	masks[21] |= 1 << matrix[14]; } 
  arr_opt[14].pointer = &matrix[14];
  if(matrix[15]) { masks[6] |= 1 << matrix[15];	masks[10] |= 1 << matrix[15]; 	masks[24] |= 1 << matrix[15]; } 
  arr_opt[15].pointer = &matrix[15];
  if(matrix[16]) { masks[7] |= 1 << matrix[16];	masks[10] |= 1 << matrix[16]; 	masks[24] |= 1 << matrix[16]; } 
  arr_opt[16].pointer = &matrix[16];
  if(matrix[17]) { masks[8] |= 1 << matrix[17];	masks[10] |= 1 << matrix[17]; 	masks[24] |= 1 << matrix[17]; } 
  arr_opt[17].pointer = &matrix[17];
  if(matrix[18]) { masks[0] |= 1 << matrix[18];	masks[11] |= 1 << matrix[18]; 	masks[18] |= 1 << matrix[18]; } 
  arr_opt[18].pointer = &matrix[18];
  if(matrix[19]) { masks[1] |= 1 << matrix[19];	masks[11] |= 1 << matrix[19]; 	masks[18] |= 1 << matrix[19]; } 
  arr_opt[19].pointer = &matrix[19];
  if(matrix[20]) { masks[2] |= 1 << matrix[20];	masks[11] |= 1 << matrix[20]; 	masks[18] |= 1 << matrix[20]; } 
  arr_opt[20].pointer = &matrix[20];
  if(matrix[21]) { masks[3] |= 1 << matrix[21];	masks[11] |= 1 << matrix[21]; 	masks[21] |= 1 << matrix[21]; } 
  arr_opt[21].pointer = &matrix[21];
  if(matrix[22]) { masks[4] |= 1 << matrix[22];	masks[11] |= 1 << matrix[22]; 	masks[21] |= 1 << matrix[22]; } 
  arr_opt[22].pointer = &matrix[22];
  if(matrix[23]) { masks[5] |= 1 << matrix[23];	masks[11] |= 1 << matrix[23]; 	masks[21] |= 1 << matrix[23]; } 
  arr_opt[23].pointer = &matrix[23];
  if(matrix[24]) { masks[6] |= 1 << matrix[24];	masks[11] |= 1 << matrix[24]; 	masks[24] |= 1 << matrix[24]; } 
  arr_opt[24].pointer = &matrix[24];
  if(matrix[25]) { masks[7] |= 1 << matrix[25];	masks[11] |= 1 << matrix[25]; 	masks[24] |= 1 << matrix[25]; } 
  arr_opt[25].pointer = &matrix[25];
  if(matrix[26]) { masks[8] |= 1 << matrix[26];	masks[11] |= 1 << matrix[26]; 	masks[24] |= 1 << matrix[26]; } 
  arr_opt[26].pointer = &matrix[26];
  if(matrix[27]) { masks[0] |= 1 << matrix[27];	masks[12] |= 1 << matrix[27]; 	masks[19] |= 1 << matrix[27]; } 
  arr_opt[27].pointer = &matrix[27];
  if(matrix[28]) { masks[1] |= 1 << matrix[28];	masks[12] |= 1 << matrix[28]; 	masks[19] |= 1 << matrix[28]; } 
  arr_opt[28].pointer = &matrix[28];
  if(matrix[29]) { masks[2] |= 1 << matrix[29];	masks[12] |= 1 << matrix[29]; 	masks[19] |= 1 << matrix[29]; } 
  arr_opt[29].pointer = &matrix[29];
  if(matrix[30]) { masks[3] |= 1 << matrix[30];	masks[12] |= 1 << matrix[30]; 	masks[22] |= 1 << matrix[30]; } 
  arr_opt[30].pointer = &matrix[30];
  if(matrix[31]) { masks[4] |= 1 << matrix[31];	masks[12] |= 1 << matrix[31]; 	masks[22] |= 1 << matrix[31]; } 
  arr_opt[31].pointer = &matrix[31];
  if(matrix[32]) { masks[5] |= 1 << matrix[32];	masks[12] |= 1 << matrix[32]; 	masks[22] |= 1 << matrix[32]; } 
  arr_opt[32].pointer = &matrix[32];
  if(matrix[33]) { masks[6] |= 1 << matrix[33];	masks[12] |= 1 << matrix[33]; 	masks[25] |= 1 << matrix[33]; } 
  arr_opt[33].pointer = &matrix[33];
  if(matrix[34]) { masks[7] |= 1 << matrix[34];	masks[12] |= 1 << matrix[34]; 	masks[25] |= 1 << matrix[34]; } 
  arr_opt[34].pointer = &matrix[34];
  if(matrix[35]) { masks[8] |= 1 << matrix[35];	masks[12] |= 1 << matrix[35]; 	masks[25] |= 1 << matrix[35]; } 
  arr_opt[35].pointer = &matrix[35];
  if(matrix[36]) { masks[0] |= 1 << matrix[36];	masks[13] |= 1 << matrix[36]; 	masks[19] |= 1 << matrix[36]; } 
  arr_opt[36].pointer = &matrix[36];
  if(matrix[37]) { masks[1] |= 1 << matrix[37];	masks[13] |= 1 << matrix[37]; 	masks[19] |= 1 << matrix[37]; } 
  arr_opt[37].pointer = &matrix[37];
  if(matrix[38]) { masks[2] |= 1 << matrix[38];	masks[13] |= 1 << matrix[38]; 	masks[19] |= 1 << matrix[38]; } 
  arr_opt[38].pointer = &matrix[38];
  if(matrix[39]) { masks[3] |= 1 << matrix[39];	masks[13] |= 1 << matrix[39]; 	masks[22] |= 1 << matrix[39]; } 
  arr_opt[39].pointer = &matrix[39];
  if(matrix[40]) { masks[4] |= 1 << matrix[40];	masks[13] |= 1 << matrix[40]; 	masks[22] |= 1 << matrix[40]; } 
  arr_opt[40].pointer = &matrix[40];
  if(matrix[41]) { masks[5] |= 1 << matrix[41];	masks[13] |= 1 << matrix[41]; 	masks[22] |= 1 << matrix[41]; } 
  arr_opt[41].pointer = &matrix[41];
  if(matrix[42]) { masks[6] |= 1 << matrix[42];	masks[13] |= 1 << matrix[42]; 	masks[25] |= 1 << matrix[42]; } 
  arr_opt[42].pointer = &matrix[42];
  if(matrix[43]) { masks[7] |= 1 << matrix[43];	masks[13] |= 1 << matrix[43]; 	masks[25] |= 1 << matrix[43]; } 
  arr_opt[43].pointer = &matrix[43];
  if(matrix[44]) { masks[8] |= 1 << matrix[44];	masks[13] |= 1 << matrix[44]; 	masks[25] |= 1 << matrix[44]; } 
  arr_opt[44].pointer = &matrix[44];
  if(matrix[45]) { masks[0] |= 1 << matrix[45];	masks[14] |= 1 << matrix[45]; 	masks[19] |= 1 << matrix[45]; } 
  arr_opt[45].pointer = &matrix[45];
  if(matrix[46]) { masks[1] |= 1 << matrix[46];	masks[14] |= 1 << matrix[46]; 	masks[19] |= 1 << matrix[46]; } 
  arr_opt[46].pointer = &matrix[46];
  if(matrix[47]) { masks[2] |= 1 << matrix[47];	masks[14] |= 1 << matrix[47]; 	masks[19] |= 1 << matrix[47]; } 
  arr_opt[47].pointer = &matrix[47];
  if(matrix[48]) { masks[3] |= 1 << matrix[48];	masks[14] |= 1 << matrix[48]; 	masks[22] |= 1 << matrix[48]; } 
  arr_opt[48].pointer = &matrix[48];
  if(matrix[49]) { masks[4] |= 1 << matrix[49];	masks[14] |= 1 << matrix[49]; 	masks[22] |= 1 << matrix[49]; } 
  arr_opt[49].pointer = &matrix[49];
  if(matrix[50]) { masks[5] |= 1 << matrix[50];	masks[14] |= 1 << matrix[50]; 	masks[22] |= 1 << matrix[50]; } 
  arr_opt[50].pointer = &matrix[50];
  if(matrix[51]) { masks[6] |= 1 << matrix[51];	masks[14] |= 1 << matrix[51]; 	masks[25] |= 1 << matrix[51]; } 
  arr_opt[51].pointer = &matrix[51];
  if(matrix[52]) { masks[7] |= 1 << matrix[52];	masks[14] |= 1 << matrix[52]; 	masks[25] |= 1 << matrix[52]; } 
  arr_opt[52].pointer = &matrix[52];
  if(matrix[53]) { masks[8] |= 1 << matrix[53];	masks[14] |= 1 << matrix[53]; 	masks[25] |= 1 << matrix[53]; } 
  arr_opt[53].pointer = &matrix[53];
  if(matrix[54]) { masks[0] |= 1 << matrix[54];	masks[15] |= 1 << matrix[54]; 	masks[20] |= 1 << matrix[54]; } 
  arr_opt[54].pointer = &matrix[54];
  if(matrix[55]) { masks[1] |= 1 << matrix[55];	masks[15] |= 1 << matrix[55]; 	masks[20] |= 1 << matrix[55]; } 
  arr_opt[55].pointer = &matrix[55];
  if(matrix[56]) { masks[2] |= 1 << matrix[56];	masks[15] |= 1 << matrix[56]; 	masks[20] |= 1 << matrix[56]; } 
  arr_opt[56].pointer = &matrix[56];
  if(matrix[57]) { masks[3] |= 1 << matrix[57];	masks[15] |= 1 << matrix[57]; 	masks[23] |= 1 << matrix[57]; } 
  arr_opt[57].pointer = &matrix[57];
  if(matrix[58]) { masks[4] |= 1 << matrix[58];	masks[15] |= 1 << matrix[58]; 	masks[23] |= 1 << matrix[58]; } 
  arr_opt[58].pointer = &matrix[58];
  if(matrix[59]) { masks[5] |= 1 << matrix[59];	masks[15] |= 1 << matrix[59]; 	masks[23] |= 1 << matrix[59]; } 
  arr_opt[59].pointer = &matrix[59];
  if(matrix[60]) { masks[6] |= 1 << matrix[60];	masks[15] |= 1 << matrix[60]; 	masks[26] |= 1 << matrix[60]; } 
  arr_opt[60].pointer = &matrix[60];
  if(matrix[61]) { masks[7] |= 1 << matrix[61];	masks[15] |= 1 << matrix[61]; 	masks[26] |= 1 << matrix[61]; } 
  arr_opt[61].pointer = &matrix[61];
  if(matrix[62]) { masks[8] |= 1 << matrix[62];	masks[15] |= 1 << matrix[62]; 	masks[26] |= 1 << matrix[62]; } 
  arr_opt[62].pointer = &matrix[62];
  if(matrix[63]) { masks[0] |= 1 << matrix[63];	masks[16] |= 1 << matrix[63]; 	masks[20] |= 1 << matrix[63]; } 
  arr_opt[63].pointer = &matrix[63];
  if(matrix[64]) { masks[1] |= 1 << matrix[64];	masks[16] |= 1 << matrix[64]; 	masks[20] |= 1 << matrix[64]; } 
  arr_opt[64].pointer = &matrix[64];
  if(matrix[65]) { masks[2] |= 1 << matrix[65];	masks[16] |= 1 << matrix[65]; 	masks[20] |= 1 << matrix[65]; } 
  arr_opt[65].pointer = &matrix[65];
  if(matrix[66]) { masks[3] |= 1 << matrix[66];	masks[16] |= 1 << matrix[66]; 	masks[23] |= 1 << matrix[66]; } 
  arr_opt[66].pointer = &matrix[66];
  if(matrix[67]) { masks[4] |= 1 << matrix[67];	masks[16] |= 1 << matrix[67]; 	masks[23] |= 1 << matrix[67]; } 
  arr_opt[67].pointer = &matrix[67];
  if(matrix[68]) { masks[5] |= 1 << matrix[68];	masks[16] |= 1 << matrix[68]; 	masks[23] |= 1 << matrix[68]; } 
  arr_opt[68].pointer = &matrix[68];
  if(matrix[69]) { masks[6] |= 1 << matrix[69];	masks[16] |= 1 << matrix[69]; 	masks[26] |= 1 << matrix[69]; } 
  arr_opt[69].pointer = &matrix[69];
  if(matrix[70]) { masks[7] |= 1 << matrix[70];	masks[16] |= 1 << matrix[70]; 	masks[26] |= 1 << matrix[70]; } 
  arr_opt[70].pointer = &matrix[70];
  if(matrix[71]) { masks[8] |= 1 << matrix[71];	masks[16] |= 1 << matrix[71]; 	masks[26] |= 1 << matrix[71]; } 
  arr_opt[71].pointer = &matrix[71];
  if(matrix[72]) { masks[0] |= 1 << matrix[72];	masks[17] |= 1 << matrix[72]; 	masks[20] |= 1 << matrix[72]; } 
  arr_opt[72].pointer = &matrix[72];
  if(matrix[73]) { masks[1] |= 1 << matrix[73];	masks[17] |= 1 << matrix[73]; 	masks[20] |= 1 << matrix[73]; } 
  arr_opt[73].pointer = &matrix[73];
  if(matrix[74]) { masks[2] |= 1 << matrix[74];	masks[17] |= 1 << matrix[74]; 	masks[20] |= 1 << matrix[74]; } 
  arr_opt[74].pointer = &matrix[74];
  if(matrix[75]) { masks[3] |= 1 << matrix[75];	masks[17] |= 1 << matrix[75]; 	masks[23] |= 1 << matrix[75]; } 
  arr_opt[75].pointer = &matrix[75];
  if(matrix[76]) { masks[4] |= 1 << matrix[76];	masks[17] |= 1 << matrix[76]; 	masks[23] |= 1 << matrix[76]; } 
  arr_opt[76].pointer = &matrix[76];
  if(matrix[77]) { masks[5] |= 1 << matrix[77];	masks[17] |= 1 << matrix[77]; 	masks[23] |= 1 << matrix[77]; } 
  arr_opt[77].pointer = &matrix[77];
  if(matrix[78]) { masks[6] |= 1 << matrix[78];	masks[17] |= 1 << matrix[78]; 	masks[26] |= 1 << matrix[78]; } 
  arr_opt[78].pointer = &matrix[78];
  if(matrix[79]) { masks[7] |= 1 << matrix[79];	masks[17] |= 1 << matrix[79]; 	masks[26] |= 1 << matrix[79]; } 
  arr_opt[79].pointer = &matrix[79];
  if(matrix[80]) { masks[8] |= 1 << matrix[80];	masks[17] |= 1 << matrix[80]; 	masks[26] |= 1 << matrix[80]; } 
  arr_opt[80].pointer = &matrix[80];

  mask[0] = masks[0] | masks[9] | masks[18]; 
  mask[1] = masks[1] | masks[9] | masks[18]; 
  mask[2] = masks[2] | masks[9] | masks[18]; 
  mask[3] = masks[3] | masks[9] | masks[21]; 
  mask[4] = masks[4] | masks[9] | masks[21]; 
  mask[5] = masks[5] | masks[9] | masks[21]; 
  mask[6] = masks[6] | masks[9] | masks[24]; 
  mask[7] = masks[7] | masks[9] | masks[24]; 
  mask[8] = masks[8] | masks[9] | masks[24]; 
  mask[9] = masks[0] | masks[10] | masks[18]; 
  mask[10] = masks[1] | masks[10] | masks[18]; 
  mask[11] = masks[2] | masks[10] | masks[18]; 
  mask[12] = masks[3] | masks[10] | masks[21]; 
  mask[13] = masks[4] | masks[10] | masks[21]; 
  mask[14] = masks[5] | masks[10] | masks[21]; 
  mask[15] = masks[6] | masks[10] | masks[24]; 
  mask[16] = masks[7] | masks[10] | masks[24]; 
  mask[17] = masks[8] | masks[10] | masks[24]; 
  mask[18] = masks[0] | masks[11] | masks[18]; 
  mask[19] = masks[1] | masks[11] | masks[18]; 
  mask[20] = masks[2] | masks[11] | masks[18]; 
  mask[21] = masks[3] | masks[11] | masks[21]; 
  mask[22] = masks[4] | masks[11] | masks[21]; 
  mask[23] = masks[5] | masks[11] | masks[21]; 
  mask[24] = masks[6] | masks[11] | masks[24]; 
  mask[25] = masks[7] | masks[11] | masks[24]; 
  mask[26] = masks[8] | masks[11] | masks[24]; 
  mask[27] = masks[0] | masks[12] | masks[19]; 
  mask[28] = masks[1] | masks[12] | masks[19]; 
  mask[29] = masks[2] | masks[12] | masks[19]; 
  mask[30] = masks[3] | masks[12] | masks[22]; 
  mask[31] = masks[4] | masks[12] | masks[22]; 
  mask[32] = masks[5] | masks[12] | masks[22]; 
  mask[33] = masks[6] | masks[12] | masks[25]; 
  mask[34] = masks[7] | masks[12] | masks[25]; 
  mask[35] = masks[8] | masks[12] | masks[25]; 
  mask[36] = masks[0] | masks[13] | masks[19]; 
  mask[37] = masks[1] | masks[13] | masks[19]; 
  mask[38] = masks[2] | masks[13] | masks[19]; 
  mask[39] = masks[3] | masks[13] | masks[22]; 
  mask[40] = masks[4] | masks[13] | masks[22]; 
  mask[41] = masks[5] | masks[13] | masks[22]; 
  mask[42] = masks[6] | masks[13] | masks[25]; 
  mask[43] = masks[7] | masks[13] | masks[25]; 
  mask[44] = masks[8] | masks[13] | masks[25]; 
  mask[45] = masks[0] | masks[14] | masks[19]; 
  mask[46] = masks[1] | masks[14] | masks[19]; 
  mask[47] = masks[2] | masks[14] | masks[19]; 
  mask[48] = masks[3] | masks[14] | masks[22]; 
  mask[49] = masks[4] | masks[14] | masks[22]; 
  mask[50] = masks[5] | masks[14] | masks[22]; 
  mask[51] = masks[6] | masks[14] | masks[25]; 
  mask[52] = masks[7] | masks[14] | masks[25]; 
  mask[53] = masks[8] | masks[14] | masks[25]; 
  mask[54] = masks[0] | masks[15] | masks[20]; 
  mask[55] = masks[1] | masks[15] | masks[20]; 
  mask[56] = masks[2] | masks[15] | masks[20]; 
  mask[57] = masks[3] | masks[15] | masks[23]; 
  mask[58] = masks[4] | masks[15] | masks[23]; 
  mask[59] = masks[5] | masks[15] | masks[23]; 
  mask[60] = masks[6] | masks[15] | masks[26]; 
  mask[61] = masks[7] | masks[15] | masks[26]; 
  mask[62] = masks[8] | masks[15] | masks[26]; 
  mask[63] = masks[0] | masks[16] | masks[20]; 
  mask[64] = masks[1] | masks[16] | masks[20]; 
  mask[65] = masks[2] | masks[16] | masks[20]; 
  mask[66] = masks[3] | masks[16] | masks[23]; 
  mask[67] = masks[4] | masks[16] | masks[23]; 
  mask[68] = masks[5] | masks[16] | masks[23]; 
  mask[69] = masks[6] | masks[16] | masks[26]; 
  mask[70] = masks[7] | masks[16] | masks[26]; 
  mask[71] = masks[8] | masks[16] | masks[26]; 
  mask[72] = masks[0] | masks[17] | masks[20]; 
  mask[73] = masks[1] | masks[17] | masks[20]; 
  mask[74] = masks[2] | masks[17] | masks[20]; 
  mask[75] = masks[3] | masks[17] | masks[23]; 
  mask[76] = masks[4] | masks[17] | masks[23]; 
  mask[77] = masks[5] | masks[17] | masks[23]; 
  mask[78] = masks[6] | masks[17] | masks[26]; 
  mask[79] = masks[7] | masks[17] | masks[26]; 
  mask[80] = masks[8] | masks[17] | masks[26]; 

  arr_opt[0].not +=  (1 & (mask[0] >> 0)) + (1 & (mask[0] >> 1)) + (1 & (mask[0] >> 2)) + (1 & (mask[0] >> 3)) + (1 & (mask[0] >> 4)) + (1 & (mask[0] >> 5)) + (1 & (mask[0] >> 6)) + (1 & (mask[0] >> 7)) + (1 & (mask[0] >> 8)) ;
  arr_opt[1].not +=  (1 & (mask[1] >> 0)) + (1 & (mask[1] >> 1)) + (1 & (mask[1] >> 2)) + (1 & (mask[1] >> 3)) + (1 & (mask[1] >> 4)) + (1 & (mask[1] >> 5)) + (1 & (mask[1] >> 6)) + (1 & (mask[1] >> 7)) + (1 & (mask[1] >> 8)) ;
  arr_opt[2].not +=  (1 & (mask[2] >> 0)) + (1 & (mask[2] >> 1)) + (1 & (mask[2] >> 2)) + (1 & (mask[2] >> 3)) + (1 & (mask[2] >> 4)) + (1 & (mask[2] >> 5)) + (1 & (mask[2] >> 6)) + (1 & (mask[2] >> 7)) + (1 & (mask[2] >> 8)) ;
  arr_opt[3].not +=  (1 & (mask[3] >> 0)) + (1 & (mask[3] >> 1)) + (1 & (mask[3] >> 2)) + (1 & (mask[3] >> 3)) + (1 & (mask[3] >> 4)) + (1 & (mask[3] >> 5)) + (1 & (mask[3] >> 6)) + (1 & (mask[3] >> 7)) + (1 & (mask[3] >> 8)) ;
  arr_opt[4].not +=  (1 & (mask[4] >> 0)) + (1 & (mask[4] >> 1)) + (1 & (mask[4] >> 2)) + (1 & (mask[4] >> 3)) + (1 & (mask[4] >> 4)) + (1 & (mask[4] >> 5)) + (1 & (mask[4] >> 6)) + (1 & (mask[4] >> 7)) + (1 & (mask[4] >> 8)) ;
  arr_opt[5].not +=  (1 & (mask[5] >> 0)) + (1 & (mask[5] >> 1)) + (1 & (mask[5] >> 2)) + (1 & (mask[5] >> 3)) + (1 & (mask[5] >> 4)) + (1 & (mask[5] >> 5)) + (1 & (mask[5] >> 6)) + (1 & (mask[5] >> 7)) + (1 & (mask[5] >> 8)) ;
  arr_opt[6].not +=  (1 & (mask[6] >> 0)) + (1 & (mask[6] >> 1)) + (1 & (mask[6] >> 2)) + (1 & (mask[6] >> 3)) + (1 & (mask[6] >> 4)) + (1 & (mask[6] >> 5)) + (1 & (mask[6] >> 6)) + (1 & (mask[6] >> 7)) + (1 & (mask[6] >> 8)) ;
  arr_opt[7].not +=  (1 & (mask[7] >> 0)) + (1 & (mask[7] >> 1)) + (1 & (mask[7] >> 2)) + (1 & (mask[7] >> 3)) + (1 & (mask[7] >> 4)) + (1 & (mask[7] >> 5)) + (1 & (mask[7] >> 6)) + (1 & (mask[7] >> 7)) + (1 & (mask[7] >> 8)) ;
  arr_opt[8].not +=  (1 & (mask[8] >> 0)) + (1 & (mask[8] >> 1)) + (1 & (mask[8] >> 2)) + (1 & (mask[8] >> 3)) + (1 & (mask[8] >> 4)) + (1 & (mask[8] >> 5)) + (1 & (mask[8] >> 6)) + (1 & (mask[8] >> 7)) + (1 & (mask[8] >> 8)) ;
  arr_opt[9].not +=  (1 & (mask[9] >> 0)) + (1 & (mask[9] >> 1)) + (1 & (mask[9] >> 2)) + (1 & (mask[9] >> 3)) + (1 & (mask[9] >> 4)) + (1 & (mask[9] >> 5)) + (1 & (mask[9] >> 6)) + (1 & (mask[9] >> 7)) + (1 & (mask[9] >> 8)) ;
  arr_opt[10].not +=  (1 & (mask[10] >> 0)) + (1 & (mask[10] >> 1)) + (1 & (mask[10] >> 2)) + (1 & (mask[10] >> 3)) + (1 & (mask[10] >> 4)) + (1 & (mask[10] >> 5)) + (1 & (mask[10] >> 6)) + (1 & (mask[10] >> 7)) + (1 & (mask[10] >> 8)) ;
  arr_opt[11].not +=  (1 & (mask[11] >> 0)) + (1 & (mask[11] >> 1)) + (1 & (mask[11] >> 2)) + (1 & (mask[11] >> 3)) + (1 & (mask[11] >> 4)) + (1 & (mask[11] >> 5)) + (1 & (mask[11] >> 6)) + (1 & (mask[11] >> 7)) + (1 & (mask[11] >> 8)) ;
  arr_opt[12].not +=  (1 & (mask[12] >> 0)) + (1 & (mask[12] >> 1)) + (1 & (mask[12] >> 2)) + (1 & (mask[12] >> 3)) + (1 & (mask[12] >> 4)) + (1 & (mask[12] >> 5)) + (1 & (mask[12] >> 6)) + (1 & (mask[12] >> 7)) + (1 & (mask[12] >> 8)) ;
  arr_opt[13].not +=  (1 & (mask[13] >> 0)) + (1 & (mask[13] >> 1)) + (1 & (mask[13] >> 2)) + (1 & (mask[13] >> 3)) + (1 & (mask[13] >> 4)) + (1 & (mask[13] >> 5)) + (1 & (mask[13] >> 6)) + (1 & (mask[13] >> 7)) + (1 & (mask[13] >> 8)) ;
  arr_opt[14].not +=  (1 & (mask[14] >> 0)) + (1 & (mask[14] >> 1)) + (1 & (mask[14] >> 2)) + (1 & (mask[14] >> 3)) + (1 & (mask[14] >> 4)) + (1 & (mask[14] >> 5)) + (1 & (mask[14] >> 6)) + (1 & (mask[14] >> 7)) + (1 & (mask[14] >> 8)) ;
  arr_opt[15].not +=  (1 & (mask[15] >> 0)) + (1 & (mask[15] >> 1)) + (1 & (mask[15] >> 2)) + (1 & (mask[15] >> 3)) + (1 & (mask[15] >> 4)) + (1 & (mask[15] >> 5)) + (1 & (mask[15] >> 6)) + (1 & (mask[15] >> 7)) + (1 & (mask[15] >> 8)) ;
  arr_opt[16].not +=  (1 & (mask[16] >> 0)) + (1 & (mask[16] >> 1)) + (1 & (mask[16] >> 2)) + (1 & (mask[16] >> 3)) + (1 & (mask[16] >> 4)) + (1 & (mask[16] >> 5)) + (1 & (mask[16] >> 6)) + (1 & (mask[16] >> 7)) + (1 & (mask[16] >> 8)) ;
  arr_opt[17].not +=  (1 & (mask[17] >> 0)) + (1 & (mask[17] >> 1)) + (1 & (mask[17] >> 2)) + (1 & (mask[17] >> 3)) + (1 & (mask[17] >> 4)) + (1 & (mask[17] >> 5)) + (1 & (mask[17] >> 6)) + (1 & (mask[17] >> 7)) + (1 & (mask[17] >> 8)) ;
  arr_opt[18].not +=  (1 & (mask[18] >> 0)) + (1 & (mask[18] >> 1)) + (1 & (mask[18] >> 2)) + (1 & (mask[18] >> 3)) + (1 & (mask[18] >> 4)) + (1 & (mask[18] >> 5)) + (1 & (mask[18] >> 6)) + (1 & (mask[18] >> 7)) + (1 & (mask[18] >> 8)) ;
  arr_opt[19].not +=  (1 & (mask[19] >> 0)) + (1 & (mask[19] >> 1)) + (1 & (mask[19] >> 2)) + (1 & (mask[19] >> 3)) + (1 & (mask[19] >> 4)) + (1 & (mask[19] >> 5)) + (1 & (mask[19] >> 6)) + (1 & (mask[19] >> 7)) + (1 & (mask[19] >> 8)) ;
  arr_opt[20].not +=  (1 & (mask[20] >> 0)) + (1 & (mask[20] >> 1)) + (1 & (mask[20] >> 2)) + (1 & (mask[20] >> 3)) + (1 & (mask[20] >> 4)) + (1 & (mask[20] >> 5)) + (1 & (mask[20] >> 6)) + (1 & (mask[20] >> 7)) + (1 & (mask[20] >> 8)) ;
  arr_opt[21].not +=  (1 & (mask[21] >> 0)) + (1 & (mask[21] >> 1)) + (1 & (mask[21] >> 2)) + (1 & (mask[21] >> 3)) + (1 & (mask[21] >> 4)) + (1 & (mask[21] >> 5)) + (1 & (mask[21] >> 6)) + (1 & (mask[21] >> 7)) + (1 & (mask[21] >> 8)) ;
  arr_opt[22].not +=  (1 & (mask[22] >> 0)) + (1 & (mask[22] >> 1)) + (1 & (mask[22] >> 2)) + (1 & (mask[22] >> 3)) + (1 & (mask[22] >> 4)) + (1 & (mask[22] >> 5)) + (1 & (mask[22] >> 6)) + (1 & (mask[22] >> 7)) + (1 & (mask[22] >> 8)) ;
  arr_opt[23].not +=  (1 & (mask[23] >> 0)) + (1 & (mask[23] >> 1)) + (1 & (mask[23] >> 2)) + (1 & (mask[23] >> 3)) + (1 & (mask[23] >> 4)) + (1 & (mask[23] >> 5)) + (1 & (mask[23] >> 6)) + (1 & (mask[23] >> 7)) + (1 & (mask[23] >> 8)) ;
  arr_opt[24].not +=  (1 & (mask[24] >> 0)) + (1 & (mask[24] >> 1)) + (1 & (mask[24] >> 2)) + (1 & (mask[24] >> 3)) + (1 & (mask[24] >> 4)) + (1 & (mask[24] >> 5)) + (1 & (mask[24] >> 6)) + (1 & (mask[24] >> 7)) + (1 & (mask[24] >> 8)) ;
  arr_opt[25].not +=  (1 & (mask[25] >> 0)) + (1 & (mask[25] >> 1)) + (1 & (mask[25] >> 2)) + (1 & (mask[25] >> 3)) + (1 & (mask[25] >> 4)) + (1 & (mask[25] >> 5)) + (1 & (mask[25] >> 6)) + (1 & (mask[25] >> 7)) + (1 & (mask[25] >> 8)) ;
  arr_opt[26].not +=  (1 & (mask[26] >> 0)) + (1 & (mask[26] >> 1)) + (1 & (mask[26] >> 2)) + (1 & (mask[26] >> 3)) + (1 & (mask[26] >> 4)) + (1 & (mask[26] >> 5)) + (1 & (mask[26] >> 6)) + (1 & (mask[26] >> 7)) + (1 & (mask[26] >> 8)) ;
  arr_opt[27].not +=  (1 & (mask[27] >> 0)) + (1 & (mask[27] >> 1)) + (1 & (mask[27] >> 2)) + (1 & (mask[27] >> 3)) + (1 & (mask[27] >> 4)) + (1 & (mask[27] >> 5)) + (1 & (mask[27] >> 6)) + (1 & (mask[27] >> 7)) + (1 & (mask[27] >> 8)) ;
  arr_opt[28].not +=  (1 & (mask[28] >> 0)) + (1 & (mask[28] >> 1)) + (1 & (mask[28] >> 2)) + (1 & (mask[28] >> 3)) + (1 & (mask[28] >> 4)) + (1 & (mask[28] >> 5)) + (1 & (mask[28] >> 6)) + (1 & (mask[28] >> 7)) + (1 & (mask[28] >> 8)) ;
  arr_opt[29].not +=  (1 & (mask[29] >> 0)) + (1 & (mask[29] >> 1)) + (1 & (mask[29] >> 2)) + (1 & (mask[29] >> 3)) + (1 & (mask[29] >> 4)) + (1 & (mask[29] >> 5)) + (1 & (mask[29] >> 6)) + (1 & (mask[29] >> 7)) + (1 & (mask[29] >> 8)) ;
  arr_opt[30].not +=  (1 & (mask[30] >> 0)) + (1 & (mask[30] >> 1)) + (1 & (mask[30] >> 2)) + (1 & (mask[30] >> 3)) + (1 & (mask[30] >> 4)) + (1 & (mask[30] >> 5)) + (1 & (mask[30] >> 6)) + (1 & (mask[30] >> 7)) + (1 & (mask[30] >> 8)) ;
  arr_opt[31].not +=  (1 & (mask[31] >> 0)) + (1 & (mask[31] >> 1)) + (1 & (mask[31] >> 2)) + (1 & (mask[31] >> 3)) + (1 & (mask[31] >> 4)) + (1 & (mask[31] >> 5)) + (1 & (mask[31] >> 6)) + (1 & (mask[31] >> 7)) + (1 & (mask[31] >> 8)) ;
  arr_opt[32].not +=  (1 & (mask[32] >> 0)) + (1 & (mask[32] >> 1)) + (1 & (mask[32] >> 2)) + (1 & (mask[32] >> 3)) + (1 & (mask[32] >> 4)) + (1 & (mask[32] >> 5)) + (1 & (mask[32] >> 6)) + (1 & (mask[32] >> 7)) + (1 & (mask[32] >> 8)) ;
  arr_opt[33].not +=  (1 & (mask[33] >> 0)) + (1 & (mask[33] >> 1)) + (1 & (mask[33] >> 2)) + (1 & (mask[33] >> 3)) + (1 & (mask[33] >> 4)) + (1 & (mask[33] >> 5)) + (1 & (mask[33] >> 6)) + (1 & (mask[33] >> 7)) + (1 & (mask[33] >> 8)) ;
  arr_opt[34].not +=  (1 & (mask[34] >> 0)) + (1 & (mask[34] >> 1)) + (1 & (mask[34] >> 2)) + (1 & (mask[34] >> 3)) + (1 & (mask[34] >> 4)) + (1 & (mask[34] >> 5)) + (1 & (mask[34] >> 6)) + (1 & (mask[34] >> 7)) + (1 & (mask[34] >> 8)) ;
  arr_opt[35].not +=  (1 & (mask[35] >> 0)) + (1 & (mask[35] >> 1)) + (1 & (mask[35] >> 2)) + (1 & (mask[35] >> 3)) + (1 & (mask[35] >> 4)) + (1 & (mask[35] >> 5)) + (1 & (mask[35] >> 6)) + (1 & (mask[35] >> 7)) + (1 & (mask[35] >> 8)) ;
  arr_opt[36].not +=  (1 & (mask[36] >> 0)) + (1 & (mask[36] >> 1)) + (1 & (mask[36] >> 2)) + (1 & (mask[36] >> 3)) + (1 & (mask[36] >> 4)) + (1 & (mask[36] >> 5)) + (1 & (mask[36] >> 6)) + (1 & (mask[36] >> 7)) + (1 & (mask[36] >> 8)) ;
  arr_opt[37].not +=  (1 & (mask[37] >> 0)) + (1 & (mask[37] >> 1)) + (1 & (mask[37] >> 2)) + (1 & (mask[37] >> 3)) + (1 & (mask[37] >> 4)) + (1 & (mask[37] >> 5)) + (1 & (mask[37] >> 6)) + (1 & (mask[37] >> 7)) + (1 & (mask[37] >> 8)) ;
  arr_opt[38].not +=  (1 & (mask[38] >> 0)) + (1 & (mask[38] >> 1)) + (1 & (mask[38] >> 2)) + (1 & (mask[38] >> 3)) + (1 & (mask[38] >> 4)) + (1 & (mask[38] >> 5)) + (1 & (mask[38] >> 6)) + (1 & (mask[38] >> 7)) + (1 & (mask[38] >> 8)) ;
  arr_opt[39].not +=  (1 & (mask[39] >> 0)) + (1 & (mask[39] >> 1)) + (1 & (mask[39] >> 2)) + (1 & (mask[39] >> 3)) + (1 & (mask[39] >> 4)) + (1 & (mask[39] >> 5)) + (1 & (mask[39] >> 6)) + (1 & (mask[39] >> 7)) + (1 & (mask[39] >> 8)) ;
  arr_opt[40].not +=  (1 & (mask[40] >> 0)) + (1 & (mask[40] >> 1)) + (1 & (mask[40] >> 2)) + (1 & (mask[40] >> 3)) + (1 & (mask[40] >> 4)) + (1 & (mask[40] >> 5)) + (1 & (mask[40] >> 6)) + (1 & (mask[40] >> 7)) + (1 & (mask[40] >> 8)) ;
  arr_opt[41].not +=  (1 & (mask[41] >> 0)) + (1 & (mask[41] >> 1)) + (1 & (mask[41] >> 2)) + (1 & (mask[41] >> 3)) + (1 & (mask[41] >> 4)) + (1 & (mask[41] >> 5)) + (1 & (mask[41] >> 6)) + (1 & (mask[41] >> 7)) + (1 & (mask[41] >> 8)) ;
  arr_opt[42].not +=  (1 & (mask[42] >> 0)) + (1 & (mask[42] >> 1)) + (1 & (mask[42] >> 2)) + (1 & (mask[42] >> 3)) + (1 & (mask[42] >> 4)) + (1 & (mask[42] >> 5)) + (1 & (mask[42] >> 6)) + (1 & (mask[42] >> 7)) + (1 & (mask[42] >> 8)) ;
  arr_opt[43].not +=  (1 & (mask[43] >> 0)) + (1 & (mask[43] >> 1)) + (1 & (mask[43] >> 2)) + (1 & (mask[43] >> 3)) + (1 & (mask[43] >> 4)) + (1 & (mask[43] >> 5)) + (1 & (mask[43] >> 6)) + (1 & (mask[43] >> 7)) + (1 & (mask[43] >> 8)) ;
  arr_opt[44].not +=  (1 & (mask[44] >> 0)) + (1 & (mask[44] >> 1)) + (1 & (mask[44] >> 2)) + (1 & (mask[44] >> 3)) + (1 & (mask[44] >> 4)) + (1 & (mask[44] >> 5)) + (1 & (mask[44] >> 6)) + (1 & (mask[44] >> 7)) + (1 & (mask[44] >> 8)) ;
  arr_opt[45].not +=  (1 & (mask[45] >> 0)) + (1 & (mask[45] >> 1)) + (1 & (mask[45] >> 2)) + (1 & (mask[45] >> 3)) + (1 & (mask[45] >> 4)) + (1 & (mask[45] >> 5)) + (1 & (mask[45] >> 6)) + (1 & (mask[45] >> 7)) + (1 & (mask[45] >> 8)) ;
  arr_opt[46].not +=  (1 & (mask[46] >> 0)) + (1 & (mask[46] >> 1)) + (1 & (mask[46] >> 2)) + (1 & (mask[46] >> 3)) + (1 & (mask[46] >> 4)) + (1 & (mask[46] >> 5)) + (1 & (mask[46] >> 6)) + (1 & (mask[46] >> 7)) + (1 & (mask[46] >> 8)) ;
  arr_opt[47].not +=  (1 & (mask[47] >> 0)) + (1 & (mask[47] >> 1)) + (1 & (mask[47] >> 2)) + (1 & (mask[47] >> 3)) + (1 & (mask[47] >> 4)) + (1 & (mask[47] >> 5)) + (1 & (mask[47] >> 6)) + (1 & (mask[47] >> 7)) + (1 & (mask[47] >> 8)) ;
  arr_opt[48].not +=  (1 & (mask[48] >> 0)) + (1 & (mask[48] >> 1)) + (1 & (mask[48] >> 2)) + (1 & (mask[48] >> 3)) + (1 & (mask[48] >> 4)) + (1 & (mask[48] >> 5)) + (1 & (mask[48] >> 6)) + (1 & (mask[48] >> 7)) + (1 & (mask[48] >> 8)) ;
  arr_opt[49].not +=  (1 & (mask[49] >> 0)) + (1 & (mask[49] >> 1)) + (1 & (mask[49] >> 2)) + (1 & (mask[49] >> 3)) + (1 & (mask[49] >> 4)) + (1 & (mask[49] >> 5)) + (1 & (mask[49] >> 6)) + (1 & (mask[49] >> 7)) + (1 & (mask[49] >> 8)) ;
  arr_opt[50].not +=  (1 & (mask[50] >> 0)) + (1 & (mask[50] >> 1)) + (1 & (mask[50] >> 2)) + (1 & (mask[50] >> 3)) + (1 & (mask[50] >> 4)) + (1 & (mask[50] >> 5)) + (1 & (mask[50] >> 6)) + (1 & (mask[50] >> 7)) + (1 & (mask[50] >> 8)) ;
  arr_opt[51].not +=  (1 & (mask[51] >> 0)) + (1 & (mask[51] >> 1)) + (1 & (mask[51] >> 2)) + (1 & (mask[51] >> 3)) + (1 & (mask[51] >> 4)) + (1 & (mask[51] >> 5)) + (1 & (mask[51] >> 6)) + (1 & (mask[51] >> 7)) + (1 & (mask[51] >> 8)) ;
  arr_opt[52].not +=  (1 & (mask[52] >> 0)) + (1 & (mask[52] >> 1)) + (1 & (mask[52] >> 2)) + (1 & (mask[52] >> 3)) + (1 & (mask[52] >> 4)) + (1 & (mask[52] >> 5)) + (1 & (mask[52] >> 6)) + (1 & (mask[52] >> 7)) + (1 & (mask[52] >> 8)) ;
  arr_opt[53].not +=  (1 & (mask[53] >> 0)) + (1 & (mask[53] >> 1)) + (1 & (mask[53] >> 2)) + (1 & (mask[53] >> 3)) + (1 & (mask[53] >> 4)) + (1 & (mask[53] >> 5)) + (1 & (mask[53] >> 6)) + (1 & (mask[53] >> 7)) + (1 & (mask[53] >> 8)) ;
  arr_opt[54].not +=  (1 & (mask[54] >> 0)) + (1 & (mask[54] >> 1)) + (1 & (mask[54] >> 2)) + (1 & (mask[54] >> 3)) + (1 & (mask[54] >> 4)) + (1 & (mask[54] >> 5)) + (1 & (mask[54] >> 6)) + (1 & (mask[54] >> 7)) + (1 & (mask[54] >> 8)) ;
  arr_opt[55].not +=  (1 & (mask[55] >> 0)) + (1 & (mask[55] >> 1)) + (1 & (mask[55] >> 2)) + (1 & (mask[55] >> 3)) + (1 & (mask[55] >> 4)) + (1 & (mask[55] >> 5)) + (1 & (mask[55] >> 6)) + (1 & (mask[55] >> 7)) + (1 & (mask[55] >> 8)) ;
  arr_opt[56].not +=  (1 & (mask[56] >> 0)) + (1 & (mask[56] >> 1)) + (1 & (mask[56] >> 2)) + (1 & (mask[56] >> 3)) + (1 & (mask[56] >> 4)) + (1 & (mask[56] >> 5)) + (1 & (mask[56] >> 6)) + (1 & (mask[56] >> 7)) + (1 & (mask[56] >> 8)) ;
  arr_opt[57].not +=  (1 & (mask[57] >> 0)) + (1 & (mask[57] >> 1)) + (1 & (mask[57] >> 2)) + (1 & (mask[57] >> 3)) + (1 & (mask[57] >> 4)) + (1 & (mask[57] >> 5)) + (1 & (mask[57] >> 6)) + (1 & (mask[57] >> 7)) + (1 & (mask[57] >> 8)) ;
  arr_opt[58].not +=  (1 & (mask[58] >> 0)) + (1 & (mask[58] >> 1)) + (1 & (mask[58] >> 2)) + (1 & (mask[58] >> 3)) + (1 & (mask[58] >> 4)) + (1 & (mask[58] >> 5)) + (1 & (mask[58] >> 6)) + (1 & (mask[58] >> 7)) + (1 & (mask[58] >> 8)) ;
  arr_opt[59].not +=  (1 & (mask[59] >> 0)) + (1 & (mask[59] >> 1)) + (1 & (mask[59] >> 2)) + (1 & (mask[59] >> 3)) + (1 & (mask[59] >> 4)) + (1 & (mask[59] >> 5)) + (1 & (mask[59] >> 6)) + (1 & (mask[59] >> 7)) + (1 & (mask[59] >> 8)) ;
  arr_opt[60].not +=  (1 & (mask[60] >> 0)) + (1 & (mask[60] >> 1)) + (1 & (mask[60] >> 2)) + (1 & (mask[60] >> 3)) + (1 & (mask[60] >> 4)) + (1 & (mask[60] >> 5)) + (1 & (mask[60] >> 6)) + (1 & (mask[60] >> 7)) + (1 & (mask[60] >> 8)) ;
  arr_opt[61].not +=  (1 & (mask[61] >> 0)) + (1 & (mask[61] >> 1)) + (1 & (mask[61] >> 2)) + (1 & (mask[61] >> 3)) + (1 & (mask[61] >> 4)) + (1 & (mask[61] >> 5)) + (1 & (mask[61] >> 6)) + (1 & (mask[61] >> 7)) + (1 & (mask[61] >> 8)) ;
  arr_opt[62].not +=  (1 & (mask[62] >> 0)) + (1 & (mask[62] >> 1)) + (1 & (mask[62] >> 2)) + (1 & (mask[62] >> 3)) + (1 & (mask[62] >> 4)) + (1 & (mask[62] >> 5)) + (1 & (mask[62] >> 6)) + (1 & (mask[62] >> 7)) + (1 & (mask[62] >> 8)) ;
  arr_opt[63].not +=  (1 & (mask[63] >> 0)) + (1 & (mask[63] >> 1)) + (1 & (mask[63] >> 2)) + (1 & (mask[63] >> 3)) + (1 & (mask[63] >> 4)) + (1 & (mask[63] >> 5)) + (1 & (mask[63] >> 6)) + (1 & (mask[63] >> 7)) + (1 & (mask[63] >> 8)) ;
  arr_opt[64].not +=  (1 & (mask[64] >> 0)) + (1 & (mask[64] >> 1)) + (1 & (mask[64] >> 2)) + (1 & (mask[64] >> 3)) + (1 & (mask[64] >> 4)) + (1 & (mask[64] >> 5)) + (1 & (mask[64] >> 6)) + (1 & (mask[64] >> 7)) + (1 & (mask[64] >> 8)) ;
  arr_opt[65].not +=  (1 & (mask[65] >> 0)) + (1 & (mask[65] >> 1)) + (1 & (mask[65] >> 2)) + (1 & (mask[65] >> 3)) + (1 & (mask[65] >> 4)) + (1 & (mask[65] >> 5)) + (1 & (mask[65] >> 6)) + (1 & (mask[65] >> 7)) + (1 & (mask[65] >> 8)) ;
  arr_opt[66].not +=  (1 & (mask[66] >> 0)) + (1 & (mask[66] >> 1)) + (1 & (mask[66] >> 2)) + (1 & (mask[66] >> 3)) + (1 & (mask[66] >> 4)) + (1 & (mask[66] >> 5)) + (1 & (mask[66] >> 6)) + (1 & (mask[66] >> 7)) + (1 & (mask[66] >> 8)) ;
  arr_opt[67].not +=  (1 & (mask[67] >> 0)) + (1 & (mask[67] >> 1)) + (1 & (mask[67] >> 2)) + (1 & (mask[67] >> 3)) + (1 & (mask[67] >> 4)) + (1 & (mask[67] >> 5)) + (1 & (mask[67] >> 6)) + (1 & (mask[67] >> 7)) + (1 & (mask[67] >> 8)) ;
  arr_opt[68].not +=  (1 & (mask[68] >> 0)) + (1 & (mask[68] >> 1)) + (1 & (mask[68] >> 2)) + (1 & (mask[68] >> 3)) + (1 & (mask[68] >> 4)) + (1 & (mask[68] >> 5)) + (1 & (mask[68] >> 6)) + (1 & (mask[68] >> 7)) + (1 & (mask[68] >> 8)) ;
  arr_opt[69].not +=  (1 & (mask[69] >> 0)) + (1 & (mask[69] >> 1)) + (1 & (mask[69] >> 2)) + (1 & (mask[69] >> 3)) + (1 & (mask[69] >> 4)) + (1 & (mask[69] >> 5)) + (1 & (mask[69] >> 6)) + (1 & (mask[69] >> 7)) + (1 & (mask[69] >> 8)) ;
  arr_opt[70].not +=  (1 & (mask[70] >> 0)) + (1 & (mask[70] >> 1)) + (1 & (mask[70] >> 2)) + (1 & (mask[70] >> 3)) + (1 & (mask[70] >> 4)) + (1 & (mask[70] >> 5)) + (1 & (mask[70] >> 6)) + (1 & (mask[70] >> 7)) + (1 & (mask[70] >> 8)) ;
  arr_opt[71].not +=  (1 & (mask[71] >> 0)) + (1 & (mask[71] >> 1)) + (1 & (mask[71] >> 2)) + (1 & (mask[71] >> 3)) + (1 & (mask[71] >> 4)) + (1 & (mask[71] >> 5)) + (1 & (mask[71] >> 6)) + (1 & (mask[71] >> 7)) + (1 & (mask[71] >> 8)) ;
  arr_opt[72].not +=  (1 & (mask[72] >> 0)) + (1 & (mask[72] >> 1)) + (1 & (mask[72] >> 2)) + (1 & (mask[72] >> 3)) + (1 & (mask[72] >> 4)) + (1 & (mask[72] >> 5)) + (1 & (mask[72] >> 6)) + (1 & (mask[72] >> 7)) + (1 & (mask[72] >> 8)) ;
  arr_opt[73].not +=  (1 & (mask[73] >> 0)) + (1 & (mask[73] >> 1)) + (1 & (mask[73] >> 2)) + (1 & (mask[73] >> 3)) + (1 & (mask[73] >> 4)) + (1 & (mask[73] >> 5)) + (1 & (mask[73] >> 6)) + (1 & (mask[73] >> 7)) + (1 & (mask[73] >> 8)) ;
  arr_opt[74].not +=  (1 & (mask[74] >> 0)) + (1 & (mask[74] >> 1)) + (1 & (mask[74] >> 2)) + (1 & (mask[74] >> 3)) + (1 & (mask[74] >> 4)) + (1 & (mask[74] >> 5)) + (1 & (mask[74] >> 6)) + (1 & (mask[74] >> 7)) + (1 & (mask[74] >> 8)) ;
  arr_opt[75].not +=  (1 & (mask[75] >> 0)) + (1 & (mask[75] >> 1)) + (1 & (mask[75] >> 2)) + (1 & (mask[75] >> 3)) + (1 & (mask[75] >> 4)) + (1 & (mask[75] >> 5)) + (1 & (mask[75] >> 6)) + (1 & (mask[75] >> 7)) + (1 & (mask[75] >> 8)) ;
  arr_opt[76].not +=  (1 & (mask[76] >> 0)) + (1 & (mask[76] >> 1)) + (1 & (mask[76] >> 2)) + (1 & (mask[76] >> 3)) + (1 & (mask[76] >> 4)) + (1 & (mask[76] >> 5)) + (1 & (mask[76] >> 6)) + (1 & (mask[76] >> 7)) + (1 & (mask[76] >> 8)) ;
  arr_opt[77].not +=  (1 & (mask[77] >> 0)) + (1 & (mask[77] >> 1)) + (1 & (mask[77] >> 2)) + (1 & (mask[77] >> 3)) + (1 & (mask[77] >> 4)) + (1 & (mask[77] >> 5)) + (1 & (mask[77] >> 6)) + (1 & (mask[77] >> 7)) + (1 & (mask[77] >> 8)) ;
  arr_opt[78].not +=  (1 & (mask[78] >> 0)) + (1 & (mask[78] >> 1)) + (1 & (mask[78] >> 2)) + (1 & (mask[78] >> 3)) + (1 & (mask[78] >> 4)) + (1 & (mask[78] >> 5)) + (1 & (mask[78] >> 6)) + (1 & (mask[78] >> 7)) + (1 & (mask[78] >> 8)) ;
  arr_opt[79].not +=  (1 & (mask[79] >> 0)) + (1 & (mask[79] >> 1)) + (1 & (mask[79] >> 2)) + (1 & (mask[79] >> 3)) + (1 & (mask[79] >> 4)) + (1 & (mask[79] >> 5)) + (1 & (mask[79] >> 6)) + (1 & (mask[79] >> 7)) + (1 & (mask[79] >> 8)) ;
  arr_opt[80].not +=  (1 & (mask[80] >> 0)) + (1 & (mask[80] >> 1)) + (1 & (mask[80] >> 2)) + (1 & (mask[80] >> 3)) + (1 & (mask[80] >> 4)) + (1 & (mask[80] >> 5)) + (1 & (mask[80] >> 6)) + (1 & (mask[80] >> 7)) + (1 & (mask[80] >> 8)) ;


  BubbleSort(arr_opt, N);
  for(int i=0;i<81;i++){
    //printf("%i\n", arr_opt[i].not);
    printf("%hhu\n", arr_opt[i].not);
  }





}
