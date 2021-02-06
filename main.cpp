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

std::string setWidth( std::string message, int length){ //nenaudoju pointerio nes kylo problemu su metodo naudojimu (tikriausiai kadangi string yra char[])

    std::string upperSpace( length%2 + length/2, ' ');
    std::string lowerSpace (length/2, ' ');
    
    upperSpace += message + lowerSpace;
    
    message = upperSpace;
    

    return message;
    }

int main(){  

    std::string name;
    std::string message;
    int length;
    char ats = 'y';

    std::cout<<"Iveskite savo varda "<<std::endl;
    std::cin>>name;
    std::cout<<std::endl<<std::endl;
    getGender(name, &message);

    std::cout<<"Ar norite pakeisti remelio dydi (y/n)"<<std::endl;
    std::cin>>ats;
    if (ats == 'y'){
        std::cout<<"iveskite zinutes ploti"<<std::endl;
        std::cin>>length;

        message = setWidth(message, (length-message.length()));
    }

    length = message.length();

   
    // std::cout<<length;


   
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