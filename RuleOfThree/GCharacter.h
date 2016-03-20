//
// Created by root on 10/30/15.
//

#ifndef LABS_GCHARACTER_H
#define LABS_GCHARACTER_H

#include<iostream>
#include<string>

class GCharacter{

    friend std::ostream&operator<<(std::ostream& os, const GCharacter& gc);

public:

    static const int DEFAULT_CAPACITY = 5;


    //Constructor
    GCharacter(std::string name = "John", int capacity = DEFAULT_CAPACITY);

    //Copy Constructor
    GCharacter(const GCharacter& source);

    //Overloaded Assignment
    GCharacter&operator=(const GCharacter& source);

    //Destructor

    ~GCharacter();

    //Member Funtion(insert)
    //insert a new tool into the tool holder
    void insert(const std::string& toolName);

private:
    //date members
    std::string name;
    int capacity;
    int used;
    std::string* toolHolder;







};

#endif //LABS_GCHARACTER_H
