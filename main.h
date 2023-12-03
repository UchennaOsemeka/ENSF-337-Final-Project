// File: main.h
// ENSF 337 Final Project
// By: Wilson Zheng
#include "flight.h"




string formatReading(const string& line);


void display_header();


int getSelection();


void returnToContinue();


void showSeatMap(const vector<vector<Seat>>& seating);


void displayPassInfo(Flight& flight);


bool menu(Flight& currentFlight);
