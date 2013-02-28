#include <iostream>
#include<string>
using namespace std;
class file{

	public:
	typedef struct Node{                   //a node of a tree
          	 string data;
          	 struct Node *ch1,*ch2;
        }Node,*Tree;

        public:
	Node *CreateInitFS{		//initial a file system
   		Node *p,*q;
		Tree L;
		L=new(Node);
		p=new(Node);
		q=new(Node);
		L->data='/';
		L->ch1=p;
		L->ch2=NULL;
		p->data="bin";
		p->ch1=NULL;
		p->ch2=q;
		q->data="dev";
		q->ch1=NULL;
		p=new(Node);
		q->ch2=p;
		p->date="boot";
		p->ch1=NULL;
		q=new(Node);
		p->ch2=q;
		q->data="etc";
		q->ch1=NULL;
		p=new(Node);
		q->ch2=p;
		p->data="home";
		p->ch1=NULL;
		p->ch2=NULL;
		return L;	
	}

	char *FilterPath(char A[],const int k){		//filter the path to a number of node
		int i=0,j=0;
		int m=0,n=0;
		int p=1,q=0;
		string *B=new string[k];
		string C;
		char D[];
		for(i=0;i<50;i++){
			if(A[i]=='/'){
				m=i;
			}
			if(m!=0){
				for(j=0,q=0;j<=m;j++,q++){
					D[q]=A[i];
				}
					strcpy(C,D,m);
					B[0]=C;
				break;
			}
		for(i=1;i<50;i++){
			if((A[i]=='/')&&(m==0)){
				m=i;
			}
			if((A[i]=='/')&&(n==0)){
				n=i;
			}
			if((m!=0)&&(n!=0)){
				for(j=m,q=0;j<=n;j++,q++){
					D[q]=A[j];
				}
				strcpy(C,D,q);
				B[p]=C;	
				m=0;
				n=0;
				p=p+1;
			}
		return B;	
	}

	DeleteNode(char B[],Node *L){		//delete a directory
		int i,PathNum=0;
		Node *p,*q,*r;
		for(i=0;i<50;i++){
			if(B[i]!=0){
				PathNum=PathNum+1;
			}
		}
		p=L->ch1;
		q=L->ch2;
		for(i=0;i<(PathNum-1);i++){
			if(p->data==B[i]){
				p=p->ch1;
				q=p->ch2;
			}
			else{
				p=q->ch1;
				q=q->ch2;
			}	
		}
		if((B[i]==p->data)||(B[i]==q->data)){
			cout<<"find the derectory"B[i]<<endl;
		}
		if(B[i]==p->data){
			RecursionDelete(p);
		}
		else{
			RecursionDelete(q);
		}
	}

	Free(Node *p){
		delete p;
	}			 

	Status RecursionDelete(Node *p;){
		if((p->ch1==0)&&(p->ch2)==0){
			Free p;
		}
		if(RecursionDelete(p->ch1))
		if(RecursionDelete(p->ch2))
		return 1;
	}

	AddNode(Node *L;string B[];string D,int PathNum){
		int i=0;
                Node *p,*q,*r;
                p=L->ch1;
                q=L->ch2;
                for(i=0;i<(PathNum-1);i++){
                     if(p->data==B[i]){
                             p=p->ch1;
                             q=p->ch2;
                      }
                     else{
                             p=q->ch1;
                             q=q->ch2;
                      }
                }
		if(B[i]=p->data){
			r=new(Node);
			r->data=D;
			p->ch1=r;
		}
		if(B[i]=q->data){
			r=new(Node);
			r->data=D;
			q->ch1=r;
		}
	}	
}

main(){
	typedef struct Node{
		char data;
		struct Node *ch1,*ch2;
	}Node,*Tree;
	Tree L;
	char C,D;
	char A[50];
	string *B;
	int CharNum=50;
	int i,j=0;
	L=file.CreateInitFS();
	cout<<"If you want to add a derectory,please input A.\nIf you want to delete a derectory,please input D."<<endl;
	cin>>C;
	cout<<"Please input the path that you want to create or delete!"<<endl;
	cin>>A;
	for(i=0;i<50;i++){
		if(A[i]='/'){
			j=j+1;
		}
	}
	B=file.FilterPath(A,j);
	if(C=='A'){
		file.AddNode(L,B,B[j]);
	}
	if(C=='D'){
		file.DeleteNode(B,L);
	}	
}	
