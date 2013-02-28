#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

class stack{
	int m_stack[MAX];
	int m_index;
	public:
		stack();
		bool push(int number);
		bool pop(int &num);
};


stack::stack(){
	m_index=0;
	memset(m_stack,0,sizeof(m_stack));
}

bool stack::push(int number){
	if(m_index>=MAX){
		cout<<"stack is overflow\n";
		return false;
	}
	m_stack[m_index]=number;
	m_index=m_index+1;
	return true;
}

bool stack::pop(int &num){
	if(m_index<=0){
		cout<<"stack is empty\n";
		return false;
	}
	m_index=m_index-1;
	num=m_stack[m_index];
	m_stack[m_index]=0;
	return 1;
}

void InitialX(stack&,int n);
void hanoi(int n, stack&,stack&,stack&);
void move(stack&,stack&);

main(){
stack X,Y,Z;
int i,num=0;
int n=5;
int m,a;
//cout<<"please input the number of circle"<<endl;
//cin>>n;
m=n;
//cout<<m<<endl;
//cout<<n<<endl;
InitialX(X,n);
hanoi(n,X,Y,Z); 
for(i=0;i<m;i++){
	Z.pop(num);
	cout<<num<<endl;
}

}

void InitialX(stack& X,int n){
	int i;
	for(i=n;i>0;i--){
		X.push(i);
	}
}

void hanoi(int n, stack& X,stack& Y,stack& Z){
	if(n==1){
		move(X,Z);
	}
	else{
		hanoi(n-1,X,Z,Y);
		move(X,Z);
		hanoi(n-1,Y,X,Z);
	}
}

void move(stack& X,stack& Z){
	int num1=0,num2;
	X.pop(num1);
	num2=num1;
	Z.push(num2);
}



