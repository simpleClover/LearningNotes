#include <iostream>
using namespace std;
double convert(double ly){
    return ly*63240;
}
int main(){
    double ly;
    cout << "Enter the number of light years:";
    cin >> ly;
    double au = convert(ly);
    cout << ly << " light years = " << au << " astronomical units." << endl;
    return 0;
}