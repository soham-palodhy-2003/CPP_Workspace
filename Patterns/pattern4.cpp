//     *
//   * * *
// * * * * *
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of Rows: ";
    cin>>n;

    for( int i = 1; i<=n ; i++){
        //spaces n-i-1
        for (int j = 1; j <= n-i ; j++){
            cout <<" ";
        }
        //*
        for (int k = 1; k <= (2*i-1) ; k++){
            cout << "*";
        }
        cout <<endl;   
    }                  
    return 0;          
}                      