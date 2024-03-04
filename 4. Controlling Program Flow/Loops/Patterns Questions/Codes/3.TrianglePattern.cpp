#include <iostream>
using namespace std;

/*
Display below patterns : 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

/*
Algorithm - 
1. Start
2. Declare i,j,N
3. Read N
4. i=j, repeat till i<=N
      j=1, repeat till j<=i
	     print j
5. Stop 		 
*/

int main(){
    
	int i, j, num;
	cout<<"Enter a number : \n";
    cin>>num;
	
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
        cout<<"\n";
	}
	
	return 0;
}
/*
Flowchart Link - 
https://drive.google.com/file/d/1XKymcgNbiRmOCYO7BUVkjAluhSWWOCLh/view?usp=sharing
*/