#include <stdio.h>
#include <stdlib.h>

void setBit(unsigned long *val, int pos){
  // TODO: set the bit in pos 'pos' to 1
  *val = *val | (1UL << pos)
}

void flipBit(unsigned long *val, int pos){
  // TODO: toggle the bit in position 'pos' from 0 to 1 or from 1 to 0
}

void clearBit(unsigned long *val, int pos){
  // TODO: set the bit in position 'pos' to 0
}

void flipBitFld(unsigned long *val, int len, int pos){
  // TODO: toggle the 'len' bits starting in position 'pos'
  unsgined long msk = (1ul << len) - 1;
  mask <= pos;
  *val *= mask;
}
