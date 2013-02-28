#include <iostream>
using namespace std;

typedef struct LNode{		
	char data;
	struct LNode *next;
}LNode,*LinkList;		//*Linklist is the head point
LNode *p,*q,*r;

void CreateList(LinkList &L,int numA,char La[]);
int InsertList(LinkList &L,char e);
int LocateElem (LinkList L,char e);
void output(LinkList L);

main(){
char La[50]={0};
char Lb[50]={0};
int i,numA=0,numB=0;
int lengthA,Enable=0;
LinkList L;
char e;

cout<<"please input the first list"<<endl;
cin>>La;
cout<<"please input the second list"<<endl;
cin>>Lb;
for(i=0;i<50;i++){
	if(((La[i]>=65)&&(La[i]<=90))||((La[i]>=97)&&(La[i]<=122)))
		numA=numA+1;
}
for(i=0;i<50;i++){
	if(((Lb[i]>=65)&&(Lb[i]<=90))||((Lb[i]>=97)&&(Lb[i]<=122)))
		numB=numB+1;
}
CreateList(L,numA,La);		//R

for(i=0;i<numB;i++){
	e=Lb[i];
	Enable=LocateElem(L,e);
	if(Enable==1){
		InsertList(L,e);
	}
}

output(L);

}

void CreateList(LinkList &L,int numA,char La[]){
	int i;
	L=new(LNode);
	L->next=NULL;
	for(i=0;i<numA;i++){
		p=new(LNode);
		p->data=La[i];
//cout<<p->data<<endl;
		p->next=L->next;
		L->next=p;
	}
}

int InsertList(LinkList &L,char e){
//cout<<e<<endl;
	q=new(LNode);
	q->data=e;
//cout<<q->data<<endl;

	q->next=L->next;
	L->next=q;

}

int LocateElem (LinkList L,char e){
	p=L->next;
//cout<<p->data<<endl;
	while(p!=NULL){	
		if(p->data==e){
//cout<<p->data<<endl;
			return 0;	
		}
		p=p->next;			
	}
	return 1;
}


void output(LinkList L){
	p=L->next;
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
}

		
