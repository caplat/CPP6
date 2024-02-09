#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>

class Data{

    public :

        Data();
        Data(const std::string& name,int data);
        Data(Data const & src);
        Data & operator=(Data const & rhs);
        ~Data();

        const std::string& getName()const;
        int getData()const;

    private :

        std::string name_;
        int data_;

};

#endif