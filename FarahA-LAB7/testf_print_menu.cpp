#include <iostream>
#include <string>

using namespace std;

void print_menu(string choice1, string choice2, string choice3, string choice4)
{
    cout<<"1    "<<choice1<<endl;
    cout<<"2    "<<choice2<<endl;
    cout<<"3    "<<choice3<<endl;
    cout<<"4    "<<choice4<<endl;
}

int main ()
{
    const string s1="Prima scelta";
    const string s2="Seconda scelta";
    const string s3="Terza scelta";
    const string s4="Quarta scelta";
    print_menu (s1, s2, s3, s4);

}