#include <iostream>
using namespace std;
#define LengthA 15
#define LengthB 10

char GetElem(char Lb[],int i,char e);
int LocateElem(char La[],char e,int lengthA);
void ListInsert(char La[],char e,int lengthA);

char GetElem(char Lb[],int i,char e){
	e=Lb[i];
	return e;
}

int LocateElem(char La[],char e,int lengthA){
	int i;
	for(i=0;i<lengthA;i++){
		if(La[i]==e)
			return 1;
	}
	return 0;
}

void ListInsert(char La[],char e,int lengthA){
	lengthA=lengthA+1;
	La[lengthA]=e;
	
}

main(){
char La[LengthA]={'A','B','C','D','E','F','G','H','I','J','K','I','J','M','N'};
char Lb[LengthB]={'A','B','C','D','E','M','N','Q','P','O'};
int La_len,Lb_len,i,lengthA,lengthB;
char e;
lengthA=LengthA;
lengthB=LengthB;
//cin>>La;
//cin>>Lb;
La_len=sizeof(La);
Lb_len=sizeof(Lb);
for(i=0;i<Lb_len;i++){
	GetElem(Lb,i,e);
	if(!(LocateElem(La,e,lengthA))){
		ListInsert(La,e,lengthA);
	}
}
for(i=0;i<lengthA;i++){
	cout<<La[i]<<endl;
}
}

