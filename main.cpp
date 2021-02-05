#include <iostream>
#include <string>

void getGender( std::string name, std::string * message){    //nustato vardo lyti ir pakeicia zinute
    char last = name.back();
    if(last == 'a' || last=='A'){
        *message = "Sveika, ";
        *message += name;
    }
    else{
        *message = "Sveikas, ";
        *message += name;
    }

}

int main(){
        
    std::string name;
    std::string message;v
    
    std::cout<<"Iveskite savo varda "<<std::endl;
    std::cin>>name;
    std::cout<<std::endl<<std::endl;
   

    getGender(name, &message);


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