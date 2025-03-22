#include <iostream>
#include <string>
using namespace std;

namespace sosi{
    string zem() {return "sosina zemichael zerga";}
}
template <typename myname>
myname sum (myname a, myname b, myname c){
    return a+b+c;
}
struct car{
    string colour;
    double speed;
};
int sum(int a){ 
    return a;
}
int sum(int a, string b){
    return a+b.length();
}  
int sum(int a, string b, double c){
    return a+b.length()+c;
}
int main() {
    cout<<sum(1)<<endl;
    cout<<sum (1,"abebe")<<endl;
    cout<<sum(1,"tsion",3.2)<<endl;
    cout<<sum(1,2,3)<<endl;
    car mycar;
    mycar.colour="red";
    mycar.speed=1000;
    cout<<mycar.colour<<endl<<mycar.speed<<endl;
    cout<<sosi::zem()<<endl;
    return 0;

}
