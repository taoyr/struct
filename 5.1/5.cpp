#include <iostream>
using namespace std;

class tree{
	private:	
	typedef struct chain{			//a node of a tree
		int data;
		struct chain *ch1,*ch2;
	}chain,*firstpoint;
	public:
	CreateTree{				//create a ercha tree for a normal tree
				

