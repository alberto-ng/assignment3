# include "pet.h"
# include <iostream>
using namespace std;

Pet::Pet(){
    age = 0;
    name = "un-named";
}

Pet::Pet(string petName, int petAge, string petType, double petWeight){
    name = petName;
    age = petAge;
    type = petType;
    weight = petWeight;
}

int Pet::getAge(){
    return age;
}

string Pet::getName(){
    return name;
}

double Pet::getWeight(){
    return weight;
}

string Pet::getType(){
    return type;
}

void Pet::setAge(int petAge){
    age = petAge;
}

void Pet::setName(string petName){
    name = petName;
}
void Pet::setWeight(double petWeight){
    weight = petWeight;
}

void Pet::setType(string petType){
    type = petType;
}

void Pet::print(){
    cout << "Name: " << name << "." << endl;
    cout << "Age: " << age << "." << endl;
    cout << "Pet type: " << type << "." << endl;
    cout << "Weight: " << weight << "." << endl;
}
