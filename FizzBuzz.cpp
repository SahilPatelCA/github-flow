#include <iostream>
#include <string>

using namespace std;

int main(){
    for(int i = 1; i <= 100; i++){
        if(i % 4 == 0){
            cout << "Fizz";
            if(i % 6 == 0){
                cout << "Buzz";
            }
            if(i % 5 == 0){
                cout << "bool";
            }
        }else if (i % 6 == 0){
            cout << "Buzz";
            if(i % 4 == 0){
                cout << "Fizz";
            }
            if(i % 5 == 0){
                cout << "bool";
            }
        }else if (i % 5 == 0){
            cout << "bool";
        }else {
            cout << i;
        }
        cout << " ";
    }
    return 0;
}