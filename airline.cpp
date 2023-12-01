#include "airline.h"
#include <algorithm>




Airline::Airline() : 
    name(""), numOfFlights(0), flights(new vector <string>) {}


Airline::Airline(const Airline& rhs) : 
    name(rhs.name), numOfFlights(rhs.numOfFlights), flights(new vector <string> (*rhs.flights)) {}


Airline::~Airline() {
    delete flights;
}


string Airline::getName() const {
    return name;
}


int Airline::getNumOfFlights() const {
    return numOfFlights;
}


vector<string> Airline::getFlights() const {
    return *flights;
}


void Airline::setName(string val) {
    name = val;
}


void Airline::setNumOfFlights(int val) {
    numOfFlights = val;
}


void Airline::addFlight(string val) {
    flights->push_back(val);
    ++numOfFlights;
}


void Airline::delFlight(string val) {
    auto itr = find(flights->begin(), flights->end(), val);
    if (itr != flights->end()) {
        flights->erase(itr);
        --numOfFlights;
    }
}

