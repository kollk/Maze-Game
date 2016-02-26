/**
  * @author Koll Klienstuber
  */
#include "Location.h"
#include <iostream>
#include <string>
using namespace std;

Location::Location(){
    name = "?";
    visited == false;
    exit = false;
    neighbors[0] = {nullptr};
    neighbors[1] = {nullptr};
    neighbors[2] = {nullptr};
    neighbors[3] = {nullptr};
}

Location::Location(string locName, bool isTheExit){
    name = locName;
    visited = false;
    exit = isTheExit;
    neighbors[0] = {nullptr};
    neighbors[1] = {nullptr};
    neighbors[2] = {nullptr};
    neighbors[3] = {nullptr};
}

string Location::getDescription(){
    if(name == "A deep, dark Cave"){
        if(visited == true){
            return"You are in a deep, dark Cave, you have already been here before. \n"
                  "Possible exits are South, North, and East. \n" ;

        }
        else{
            visited = true;
            return "You are now in a deep, dark Cave. \n"
                   "Possible exits are South, North, and East. \n" ;

        }
    }

    else if(name == "A collapsed Cavern"){
        if(visited == true){
            return "You are now in a collapsed Cavern, you have already been here before.\n"
                   "The only possible exit is North. \n";
        }
        else{
            visited = true;
            return "You are now in a collapsed Cavern. \n"
                   "The only possible exit is North. \n";
        }
    }

    else if(name == "A musty passage"){
        if(visited == true){
            return "You are now in a musty passage, you have already been here before.\n"
                   "Possible exits are East and South. \n" ;
        }
        else{
            visited = true;
            return "You are now in a musty passage \n"
                   "Possible exits are East and South. \n"  ;
        }
    }

    else if(name == "The shores of an underground lake"){
        if(visited == true){
            return "You are now on the shores of an underground lake, you have already been here before. \n"
                   "Possible exits are North, and West. \n" ;

        }
        else{
            visited = true;
            return "You are now on the shores of an underground lake \n"
                   "Possible exits are North, and West. \n" ;
        }
    }

    else if(name == "A twisting shaft"){
        if(visited == true){
            return "You are now in a twisting shaft, you have already been here before. \n"
                   "Possible exits are East and South. \n" ;
        }
        else{
            visited = true;
            return "You are now in a twisting shaft \n"
                   "Possible exits are East and South. \n" ;

        }
    }
    else if (name == "A dusty alcove"){
        if(visited == true){
            return "You are now in a dusty alcove, you have already been here before.\n"
                   "The only exit is South. \n";

        }
        else{
            visited = true;
            return "You are now in a dusty alcove \n"
                   "The only exit is South. \n" ;
        }
    }

    else if(name == "A passage to the surface"){
        if(visited == true){
            return "You are now in a passage to the surface, you have already been here before.\n"
                   "Possible exits are West and North. \n" ;

        }
        else{
            visited = true;
            return "You are now in a passage to the surface \n"
                   "Possible exits are West and North. \n" ;
        }
    }

    else if(name == "The surface"){
        return "You made it to the surface. \n"
               "Congratulations! \n" ;
    }
}



bool Location::hasNeighbor(Direction dir){
    if(neighbors[dir] == nullptr){
        return false;
    }
    else{
        return true;
    }
}


Location* Location::getNeighbor(Direction dir){
    return neighbors[dir];
}


void Location::setNeighbor(Direction dir, Location* neighborLoc){
    neighbors[dir] = neighborLoc;
}

bool Location::isExit(){
    if(name == "The surface"){
        return true;
    }
    else {
        return false;
    }
}


void Location::visit(){

    if(name == "A deep, dark Cave"){
        visited = true;
    }

    else if(name == "A collapsed Cavern"){
        visited = true;
    }

    else if(name == "A musty passage"){
        visited = true;
    }

    else if(name == "The shores of an underground lake"){
        visited = true;
    }

    else if(name == "A twisting shaft"){
        visited = true;
    }

    else if (name == "A dusty alcove"){
        visited = true;
    }

    else if(name == "A passage to the surface"){

        visited = true;

    }

    else if(name == "The surface"){
        visited = true;
    }
}




