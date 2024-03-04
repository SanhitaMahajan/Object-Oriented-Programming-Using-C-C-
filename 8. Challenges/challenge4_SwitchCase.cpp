/*
Problem Statement - 
Build Calculator to calculate add,substract,multiply,divide,mode.
User should be able to choose from the options. 
*/

/*
Example - 
*** Welcome to My Calculator ***
1. Add
2. Substract 
3. Multiply
4. Divide 
5. Mod 
6. Exit
Enter your choice : 1
Enter two numbers : 10 20 
Result = 30 

*** Welcome to My Calculator ***
1. Add
2. Substract 
3. Multiply
4. Divide 
5. Mod 
6. Exit 
Enter your choice : 5
Enter two numbers : 123 10 
Result: 12 

*** Welcome to My Calculator ***
1. Add
2. Substract 
3. Multiply
4. Divide 
5. Mod 
6. Exit 
Enter your choice : 6
*/

/*
Algorithm:
1. Start 
2. Display calcOptionsMenu() 
3. Read choice 
4. Read n1, n2 
5. switch on choice:
   case-1 : add(n1,n2),break
   case-2 : sub(n1,n2),break
   case-3 : mul(n1,n2),break
   case-4 : div(n1,n2),break
   case-5 : mod(n1,n2),break
6. If choice !=6, go to step-2  
7. Stop  
*/

#include<iostream>
using namespace std;

void showMenu(){
    cout<<"****** Welcome to My Calculator ***"<<endl;
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"5. Mod\n";
    cout<<"6. Exit\n";
    cout<<"Enter your choice : ";
}

void add(){
    int num1 , num2;
    cout<<"\nEnter two numbers : ";
    cin>>num1>>num2;
    cout<<"Addition: "<<num1+num2;
    cout<<"\n";
}

void sub(){
    int num1 , num2;
    cout<<"\nEnter two numbers : ";
    cin>>num1>>num2;
    cout<<"Subtraction: "<<num1-num2;
    cout<<"\n";
}

void mul(){
    int num1 , num2;
    cout<<"\nEnter two numbers : ";
    cin>>num1>>num2;
    cout<<"Multiplication: "<<num1*num2;
    cout<<"\n";
}

void div(){
    int num1 , num2;
    cout<<"\nEnter two numbers : ";
    cin>>num1>>num2;
    cout<<"Division: "<<num1/num2;
    cout<<"\n";
}

void mod(){
    int num1 , num2;
    cout<<"\nEnter two numbers : ";
    cin>>num1>>num2;
    cout<<"Mod: "<<num1%num2;
    cout<<"\n";
}

int main(){

    int choice;
    do{
        showMenu();
        cin>>choice;

        switch(choice){
            case 1:
            add();
            break;
            case 2: 
            sub();
            break;
            case 3: 
            mul();
            break;
            case 4:
            div();
            break;
            case 5:
            mod();
            break;
            case 6:
            break;
            default: 
            cout<<"Invalid choice, try again."<<endl;
            break;
        }
    }while(choice!=6);

    return 0;
}