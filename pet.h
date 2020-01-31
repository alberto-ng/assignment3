# include <iostream>
# include <string>

using namespace std;


/*
Create a class called Pet with all the necessary files (.h , .cpp, etc.)

This class should have member variables:
    -name (string)
    -age (int)
    -type ([‘dog’, ‘cat’]) (string)
    -weight (double).

include:
    -accessor (getters)
    -mutator (setters)

create two instances of Pet and print their details to console output.
 */

class Pet{
    public:
        Pet(); // default constructor
        Pet(string petName, int petAge, string petType, double petWeight);

        int getAge();
        string getName();
        double getWeight();
        string getType();

        void setAge(int petAge);
        void setName(string petName);
        void setWeight(double petWeight);
        void setType(string petType);

        void print();

    private:
        string name;
        int age;
        string type;
        double weight;

};
