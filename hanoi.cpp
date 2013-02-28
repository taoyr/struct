void hanoi(int n,char x,char y,char z){
	if(n==1)
		move(x,1,z);
	else{
		hanoi(n-1,x,z,y);
		move(x,n,z);
		hanoi(n-1,y,x,z);
	}
}	
