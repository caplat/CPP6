#include "Data.hpp"

Data::Data():name_("default_name"),data_(0) {};

Data::Data(const std::string& name,int data):name_(name),data_(data){};

Data::Data(const Data& src):name_(src.name_),data_(src.data_){};

Data& Data::operator=(const Data& rhs){

    if(this != &rhs)
    {
        this->name_ = rhs.getName();
        this->data_ = rhs.getData();
    }
    return(*this);
}

Data::~Data(){};

const std::string& Data::getName()const{

    return name_;
}

int Data::getData()const{

    return data_;
}