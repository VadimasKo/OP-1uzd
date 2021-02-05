#include <iostream>
#include <string>

std::string getGender( std::string name){    //nustato vardo lyti ir pakeicia zinute
    char last = name.back();
    std::string message;
    if(last == 'a' || last=='A'){
        message = "Sveika, ";
        message += name;
    }
    else{
        message = "Sveikas, ";
        message += name;
    }

    return message;
}

int main(){
        
    std::string name;
    
    std::cout<<"Iveskite savo varda "<<std::endl;
    std::cin>>name;
    std::cout<<std::endl<<std::endl;
   
    std::string message = getGender(name);


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