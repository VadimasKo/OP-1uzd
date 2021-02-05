#include <iostream>
#include <string>

using namespace std;




int main()
{
    string message = "Sveiki, ";       // main line with message

    string name;
    cout<<"Iveskite savo varda "<<endl;
    cin>>name;
    cout<<endl<<endl;
   
    message += name;
    string wall(1,'*');

    int length = message.length();
   
    string line(length +4,'*');
    string space(length,' ');
    space.insert(0,"* ");
    space.append(" *");
    
    message.insert(0,"* ");
    message.append(" *");

 
    // string line = makeLine('*', message.length() + 2);          // *****
   // *   *

    cout<<line<<endl;
    cout<<space<<endl;
    cout<<message<<endl;
    cout<<space<<endl;
    cout<<line<<endl;
}