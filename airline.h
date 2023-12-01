#ifndef AIRLINE_H
#define AIRLINE_H
#include <string>
#include <vector>
#include "flight.cpp"




class Airline {
    private:
        string name;
        int numOfFlights;
        vector<Flight>* flights;

    public:
        //ctor
        Airline() ;

        //copy-ctor
        Airline(const Airline& rhs);

        //dtor
        ~Airline();

        //getters
        string getName() const;

        int getNumOfFlights() const;

        vector<Flight>* getFlights() const;

        //setters
        void setName(string val);

        void setNumOfFlights(int val);

        void setFlight(vector<Flight>* val);

        void addFlight(Flight val);

};

#endif