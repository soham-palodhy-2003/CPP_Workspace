#include <iostream>
using namespace std;

int main(){
    int n;
    int num = 1;
    cout<<"Enter the no of Rows: ";
    cin>>n;

    for( int i = 1; i<=n ; i++){
        for (int j = 1; j <= n ; j++){
            cout << num  <<" ";
            num++;
        }
        cout <<endl;   //1 2 3
    }                  //4 5 6
    return 0;          //7 8 9
}                      //10 11 12