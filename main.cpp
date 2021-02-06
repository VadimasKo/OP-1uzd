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


int main(){  

   

    std::string name;
    std::cout<<"Iveskite savo varda "<<std::endl;
    std::cin>>name;


    //clean cin buffer
    std::cin.clear();
    std::cin.ignore(10000, '\n');   

    greetingCard card(name);

    char ats;
    while(1){
        std::cout<<"Ar norite pakeisti remelio dydi (y/n)"<<std::endl;
        std::cin>>ats;
        if (ats == 'y'){

            int length;
        
            while(1){
                std::cout<<"iveskite nauja ilgi (jeigu nenoryte iveskite '0') "<<std::endl;
                std::cin>>length;

                if( length>=card.message.length()){
                     card.changeWidth(length - card.message.length());
                     break;
                }
                else if(length==0){
                    break;
                }
                else{
                    std::cout<<"ilgis per mazas arba ivestis netinkama "<<std::endl;

                    std::cin.clear();
                    std::cin.ignore(10000, '\n');   
        
                }

            
            }
            break;
        }
        else if(ats =='n'){
            break;
        }

        //clean cin buffer
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
   
    
    card.makeLines();
    card.draw();

}