#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of Rows: ";
    cin>>n;

    for( int i = 1; i<=n ; i++){
        for (int j = 1; j <= n ; j++){
            cout << j;
        }
        cout <<endl;   //1234
    }                  //1234
    return 0;          //1234
}                      //1234