#include<iostream>
#include <vector>
using namespace std;

int main(){

    int scores[] = {10,20,30};
    for(auto score : scores){
        cout<<score<<endl;
    }
      cout<<endl;

    for(auto c:"This is a test"){
        cout<<c;
    }
    cout<<endl;

    for(auto c:"This is a test"){
        if(c!=' '){
            cout<<c;
        }
    }
  cout<<endl;

    return 0;
}