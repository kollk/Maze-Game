/**
  * @author Koll Klienstuber
  */

#include <iostream>
#include "Location.h"
using namespace std;

const int NUM_LOCATIONS = 8;


void buildMap(Location allLocations[]){
    allLocations[0] = Location("A deep, dark Cave", false);
    allLocations[1] = Location("A collapsed Cavern", false);
    allLocations[2] = Location("A musty passage", false);
    allLocations[3] = Location("The shores of an underground lake", false);
    allLocations[4] = Location("A twisting shaft", false);
    allLocations[5] = Location("A dusty alcove", false);
    allLocations[6] = Location("A passage to the surface", false);
    allLocations[7] = Location("The surface", true);


    allLocations[0].setNeighbor(SOUTH,&allLocations[1]);
    allLocations[0].setNeighbor(NORTH,&allLocations[2]);
    allLocations[0].setNeighbor(EAST,&allLocations[3]);

    allLocations[1].setNeighbor(NORTH,&allLocations[0]);

    allLocations[2].setNeighbor(EAST,&allLocations[4]);
    allLocations[2].setNeighbor(SOUTH,&allLocations[0]);

    allLocations[3].setNeighbor(NORTH,&allLocations[4]);
    allLocations[3].setNeighbor(WEST,&allLocations[0]);

    allLocations[4].setNeighbor(EAST, &allLocations[5]);
    allLocations[4].setNeighbor(SOUTH, &allLocations[3]);

    allLocations[5].setNeighbor(SOUTH,&allLocations[6]);

    allLocations[6].setNeighbor(WEST,&allLocations[7]);
    allLocations[6].setNeighbor(NORTH, &allLocations[5]);


}

int main()
{
    Location allLocations[NUM_LOCATIONS];

    buildMap(allLocations);

    Location* currentLocation = &allLocations[0];

    while(currentLocation->isExit() == false){

        cout << currentLocation->getDescription();
        cout << "Pick a direction" << endl;

        char direction;
        cin >> direction;
        Direction dir;


        if (direction == 'N' ){
            dir = NORTH;
        }

        else if (direction == 'S' ){
            dir = SOUTH;
        }

        else if ( direction == 'E' ){
            dir = EAST;

        }

        else if ( direction == 'W'){
            dir = WEST;

        }

        else if (direction != 'N' || direction != 'S' || direction != 'E' || direction != 'W'){
            cout << "That's not a valid direction!" << endl;
        }

        if (currentLocation->hasNeighbor(dir) == true ){
            currentLocation = currentLocation->getNeighbor(dir);
        }

    }

    cout << "You emerge safely from the maze!" << endl;

}
