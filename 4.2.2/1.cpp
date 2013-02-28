#include <iostream>
using namespace std;

class Hstring {
	char *chars;
	char *charsinit;
	public:
		Hstring();
		char *StrAssign(int length,char Input[]);
};

Hstring::Hstring(){
	char *chars=NULL;
	char *charsinit;
}

char *Hstring::StrAssign(int length,char Input[]){
	int i;
	char *chars=new char[length];
	charsinit=chars;
	for(i=0;i<length;i++){
		*chars=Input[i];
		chars=chars+1;
	}
	return charsinit;
}

void Match(char *ch1,char *ch2,int length1,int length2);

main(){
	char *ch1,*ch2;
	char Input1[40]={'r','f','a','d','1','3'},Input2[40];
	int length1,length2;
	int i;
	Hstring H1,H2;
//	Input1[40]={'r','f','a','d','1','3'};
	cout<<"please input the string!"<<endl;
	cin>>Input2[40];
	for(length1=0;(Input1[length1])!=0;length1++);
	for(length2=0;(Input2[length2])!=0;length2++);
	length1=length1+1;
	length2=length2+1;
	ch1=H1.StrAssign(length1,Input1);	//initial the string1
	ch2=H2.StrAssign(length2,Input2);
	Match(ch1,ch2,length1,length2);
}
void Match(char *ch1,char *ch2,int length1,int length2){
	int i,j;
	char *ch1init,*ch2init;
	char *ch1new,*ch2new;
	int count1=0,count2=0;
	char *temp2,*temp1;
	ch1new=ch1init=ch1;
	ch2new=ch2init=ch2;
	for(i=0;i<length2;i++,ch2init++){
		temp2=ch2init;
		for(j=0;j<length1;j++,ch1init++){
			temp1=ch1init;
			if(temp2=temp1){
				count1=count1+1;
				if(count1=length2){
					cout<<"two string mathed!"<<endl;
					return;
				}
					break;	
			}
			if((temp2!=temp1)&&(count1!=0)){
					count1=0;
			}

		}
	}
	char *chnew=new char[length1+length2];
	for(i=0;i<length1;i++,ch1new++){
		chnew=ch1new;
		chnew=chnew+1;		
	}
	for(i=0;i<length2;i++,ch2new++){
		chnew=ch2new;
		chnew=chnew+1;		
	}
	chnew=chnew-(length1+length2);
	cout<<"two string connecting!"<<endl;
	for(i=0;i<(length1+length2);i++)
	cout<<*chnew;
}	
			
	
