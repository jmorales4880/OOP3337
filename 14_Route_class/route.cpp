#include <iostream>
#include <cstdlib> //rand function

// Create Route strucutre (source, destination)
class Route {
private: // Access specifier. You won't be able to access anything in the structure.
    std::string source; // this is a string struct
    std::string destination;
    int length;

    // Private method
    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 50;
    }

public: // Everything below is public

    // // Constractor: must be public, have the same name as the class, have no return type (not even void).
    // Route() { // No arguement constructor. We will create an object and this will be called.
    //     length = 0;
    // }

    // No arguement constructor (second version)
    Route() : source("-"), destination("-"), length(0) {

    }

    // Constructor with arguments
    Route(const std::string& s, const std::string& d) {
        setSource(s);
        setDestination(d);
    }

    
    // Create method of the structure
    void print() { // () can be blank b/c is inside typedef
        //std::cout << source << " -> " << destination << std::endl;
        std::cout << source << " -> " << destination;
        std::cout << ": " << length << std::endl;
    }
    // Get Methods (accessor method/functions, or getters) and Set Methods.
    std::string getSource() {
        return source;
    }
    
    std::string getDestination() {
        return destination;
    }
    
    int getLength() {
        return length;
    }

    // Set functions (setters, mutator functions)
    void setSource(const std::string& new_source) {
        source = new_source;
        updateLength();
    }
    void setDestination(const std::string& new_dest) {
        destination = new_dest;
        updateLength();
    }
};

int main(void) {
    // Create an object of Route structure
    Route spring_trip;

    spring_trip.setSource("Lakeland");
    spring_trip.setDestination("Honolulu");
    // spring_trip.length = 4700;
    spring_trip.print();


    // ...

    spring_trip.setDestination("New York"); // We decided to go somewhere else and need to add new length. We have to hide these properties

    // Call structure method
    spring_trip.print();

// Create second Route Object
    Route summer_vacation("Lakeland", "Tokyo");
    summer_vacation.print();

    return 0;
}


/*Structure is a collection of different attributes.
Use dot notation to do something

What if the change of one property affected other attributes? You don't want to forget to update things so we do it automatically
    by preventing access to the parameters, by using access specifiers (public and private).
    
Classes: defines the properties and behviors for objects. An object 
    automartically private

strucutres are automatically public

We use get fucntions to get the value of the private property. Set functions are to modify the value of the private property of the class

Every class has a constructor. Constructors have no arguements and are called when we create an object of the class.
    If we have a "Class A" and create an object inside we 1.create a variable of "A name_obj;"

    Public property: use dot notation: "name_obj.size, = 10;"
    
    
    */