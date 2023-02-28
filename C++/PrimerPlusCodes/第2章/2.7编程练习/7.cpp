#include <iostream>
using namespace std;
void show(int h,int m){
    cout << "Time: " << h << ":" << m << endl;
}
int main(){
    int hour,min;
    cout << "Enter the number of hours:";
    cin >> hour;
    cout << "Enter the number of minutes:";
    cin >> min;
    show(hour,min);
    return 0;
}