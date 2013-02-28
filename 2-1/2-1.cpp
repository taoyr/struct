//#include <stdio.h>
//#include <stdlib.h>
#include <iostream.h>

typedef struct{
  int elem[MAX];
  int length;
}Sqlist;

void charu(char &LA,char LB){
  int LA_len,LB_len;
  LA_len=sizeof(LA);
  LB_len=sizeof(LB);
}

void ListInsert_sq(Sqlist &L, int i, int e){
  int *p,*q;
  if(i<1||i>L_length+1)
