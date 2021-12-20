#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int y = rand()%9 + 1;
    if(y == 1){
        cout << "You will get A in this 261102.";
    }else if(y==2){
        cout << "You will get B+ in this 261102.";
    }else if(y==3){
        cout << "You will get B in this 261102.";
    }else if(y==4){
        cout << "You will get C+ in this 261102.";
    }else if(y==5){
        cout << "You will get C in this 261102.";
    }else if(y==6){
        cout << "You will get D+ in this 261102.";
    }else if(y==7){
        cout << "You will get D in this 261102.";
    }else if(y==8){
        cout << "You will get F in this 261102.";
    }else if(y==9){
        cout << "You will get W in this 261102.";
    }
    return 0;
}


