#include <string>
#include <vector>
#include "seat.cpp"




class Airline {
    private:
        string name;
        int numOfFlights;
        vector<string>* flights;

    public:
        //ctor
        Airline();

        //copy-ctor
        Airline(const Airline& rhs);

        //dtor
        ~Airline();

        //getters
        string getName() const;

        int getNumOfFlights() const;

        vector<string> getFlights() const;

        //setters
        void setName(string val);

        void setNumOfFlights(int val);

        void addFlight(string val);

        void delFlight(string val);

};

