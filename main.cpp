#include <iostream>
#include <string>

using namespace std;




int main()
{
    string message = "Sveiki, ";      
    string name;
    
    cout<<"Iveskite savo varda "<<endl;
    cin>>name;
    cout<<endl<<endl;
   
    message += name;

    int length = message.length();
   
    string line(length +4,'*');
    string space(length,' ');

    //add walls  
    space.insert(0,"* ");
    space.append(" *");
    message.insert(0,"* ");
    message.append(" *");


    cout<<line<<endl;
    cout<<space<<endl;
    cout<<message<<endl;
    cout<<space<<endl;
    cout<<line<<endl;
}