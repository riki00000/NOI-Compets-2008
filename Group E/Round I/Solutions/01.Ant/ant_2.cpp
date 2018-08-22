#include <iostream>
using namespace std;
int main() {
    int n;
    int dist = 0;
    cout<<"N = ";
    cin>>n;


    for(int counter = 1; counter <= n; counter++){
        dist += counter;
    }

    dist *= 2;
    cout<<dist<<endl;
    return  0;
}
