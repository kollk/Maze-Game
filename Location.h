/**
  * @author Koll Klienstuber
  */
#ifndef LOCATION_H
#define LOCATION_H
#include <string>

using namespace std;

enum Direction{
    NORTH = 0,
    EAST = 1 ,
    WEST = 2,
    SOUTH = 3
};

class Location{
public:
    /**
     * @brief Location sets the name to "?" all neighbors to null and everything
     * else to false.
     */
    Location();

    /**
     * @brief Location sets name, exit, and sets the rest to null or false as appropriate.
     * @param locName name of location
     * @param isTheExit true or false statement
     */
    Location(string locName, bool isTheExit);

    /**
     * @brief getDescription returns a string containing the name of the location, a list of the directions
       possible to leave in, and if it has been visited before.
     * @return a description of location
     */
    string getDescription();

    /**
     * @brief hasNeighbor returns true if a location exists in the specified direction, false if there is
       not (nullptr)
     * @param dir direction of neighbor
     * @return true or false
     */
    bool hasNeighbor(Direction dir);

    /**
     * @brief getNeighbor returns a pointer to the neighbor in the indicated direction or nullptr if there is not
       a neighbor
     * @param dir direction of location
     * @return pointer to neighbor indicated by direction given
     */
    Location* getNeighbor(Direction dir);

    /**
     * @brief setNeighbor stores the indicated Location pointer as the correct neighbor
     * @param dir direction of designated neighbor
     * @param neighborLoc location of neighbor
     */
    void setNeighbor(Direction dir, Location* neighborLoc);

    /**
     * @brief isExit returns true if the Location is an exit
     * @return true or false
     */
    bool isExit();

    /**
     * @brief visit Marks if room has or has not been visited/
     */
    void visit();


private:
    string name;
    bool visited;
    bool exit;
    Location* neighbors[4];

};

#endif // LOCATION_H
