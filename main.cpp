#include <iostream>
#include <string>

class greetingCard{
    public:
        std::string line;
        std::string space;
        std::string message;

    greetingCard(std::string name){
        
        char last = name.back();
        if(last == 'a' || last=='A'){
             message = "Sveika, ";
            message += name;
        }
        else{
            message = "Sveikas, ";
            message += name;
        }
    }
  
    void changeWidth(int length){
        std::string upperSpace( length%2 + length/2, ' ');
        std::string lowerSpace (length/2, ' ');
        
        upperSpace += message + lowerSpace;
        
        message = upperSpace;
        
    }

    void makeLines(){

        int length = message.length();

        std::string line_1(length +4,'*');
        std::string space_1(length,' ');
        line = line_1;
        space = space_1;

        //add walls
        space.insert(0,"* ");
        space.append(" *");
        message.insert(0,"* ");
        message.append(" *");
    }
    
    void draw(){
        std::cout<<line<<std::endl;
        std::cout<<space<<std::endl;
        std::cout<<message<<std::endl;
        std::cout<<space<<std::endl;
        std::cout<<line<<std::endl;
    }


};

// void getGender( std::string name, std::string * message){    //nustato vardo lyti ir pakeicia zinute
//     char last = name.back();
//     if(last == 'a' || last=='A'){
//         *message = "Sveika, ";
//         *message += name;
//     }
//     else{
//         *message = "Sveikas, ";
//         *message += name;
//     }

// }

// std::string setWidth( std::string message, int length){ //nenaudoju pointerio nes kylo problemu su metodo naudojimu (tikriausiai kadangi string yra char[])

//     std::string upperSpace( length%2 + length/2, ' ');
//     std::string lowerSpace (length/2, ' ');
    
//     upperSpace += message + lowerSpace;
    
//     message = upperSpace;
    

//     return message;
//     }

int main(){  

    // std::string name;
    // std::string message;
    // int length;
    // char ats = 'y';

    std::string name;
    std::cout<<"Iveskite savo varda "<<std::endl;
    std::cin>>name;
    greetingCard card(name);

    char ats;
    std::cout<<"Ar norite pakeisti remelio dydi (y/n)"<<std::endl;
    std::cin>>ats;
       if (ats == 'y'){

        int length;
        std::cout<<"iveskite nauja ilgi"<<std::endl;
        std::cin>>length;

       card.changeWidth(length - card.message.length());
    }
    
    card.makeLines();
    card.draw();











    // std::cout<<std::endl<<std::endl;
    // getGender(name, &message);

    // 

    // length = message.length();

   
    // std::cout<<length;


   
    // std::string line(length +4,'*');
    // std::string space(length,' ');

    // //add walls  
    // space.insert(0,"* ");
    // space.append(" *");
    // message.insert(0,"* ");
    // message.append(" *");


    // std::cout<<line<<std::endl;
    // std::cout<<space<<std::endl;
    // std::cout<<message<<std::endl;
    // std::cout<<space<<std::endl;
    // std::cout<<line<<std::endl;
}