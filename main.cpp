#include <iostream>
#include <string>


int main()
{
    std::string message = "Sveiki, ";      
    std::string name;
    
    std::cout<<"Iveskite savo varda "<<std::endl;
    std::cin>>name;
    std::cout<<std::endl<<std::endl;
   
    message += name;

    int length = message.length();
   
    std::string line(length +4,'*');
    std::string space(length,' ');

    //add walls  
    space.insert(0,"* ");
    space.append(" *");
    message.insert(0,"* ");
    message.append(" *");


    std::cout<<line<<std::endl;
    std::cout<<space<<std::endl;
    std::cout<<message<<std::endl;
    std::cout<<space<<std::endl;
    std::cout<<line<<std::endl;
}