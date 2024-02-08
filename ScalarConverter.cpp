#include "ScalarConverter.hpp"

bool contains_only_digits(const std::string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (!std::isdigit(str[i])) {
            return false; 
        }
    }
    return true;
}

bool contains_no_letters(const std::string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (std::isalpha(str[i])) {
            return false;
        }
    }
    return true;
}

bool contains_no_letters_except_last(const std::string& str) {
    for (size_t i = 0; i < str.length() - 1; ++i) {
        if (std::isalpha(str[i])) {
            return false;
        }
    }
    return true;
}

void ScalarConverter::convert(const std::string& str) {
    
    if(contains_only_digits(str) == true){

        std::istringstream iss(str);
        int int_number;
        iss >> int_number;
        char char_value = static_cast<char>(int_number);
        if(std::isprint(char_value) != 0)
        {
            std::cout << "char: '" << char_value << "'" <<std::endl;
        }
        else
        {
            std::cout << "char: Non displayable" << std::endl;
        }
        std::cout << "int: " << int_number << std::endl;
        float float_value = static_cast<float>(int_number);
        std::cout << "float: " << std::fixed << std::setprecision(1) << float_value << "f" << std::endl;
        double double_value = static_cast<double>(int_number);
        std::cout << "double: " << double_value << std::endl; 
    }
    else if(contains_no_letters(str) == true && std::count(str.begin(),str.end(),'.') == 1)
    {
        std::istringstream iss(str);
        double double_number;
        iss >> double_number;
        char char_value = static_cast<char>(double_number);
        if(std::isprint(char_value) != 0)
        {
            std::cout << "char: '" << char_value << "'" <<std::endl;
        }
        else
        {
            std::cout << "char: Non displayable" << std::endl;
        }
        int int_value = static_cast<float>(double_number);
        std::cout << "int: " << int_value << std::endl;
        float float_value = static_cast<float>(double_number);
        std::cout << "float: " << float_value << "f" <<std::endl;
        std::cout << "double: " << double_number << std::endl;
    }
     else if(contains_no_letters_except_last(str) == true && std::count(str.begin(),str.end(),'.') == 1 
        && str[str.length() - 1] == 'f')
    {
        std::istringstream iss(str);
        float float_number;
        iss >> float_number;
        char char_value = static_cast<char>(float_number);
        if(std::isprint(char_value) != 0)
        {
            std::cout << "char: '" << char_value << "'" <<std::endl;
        }
        else
        {
            std::cout << "char: Non displayable" << std::endl;
        }
        int int_value = static_cast<int>(float_number);
        std::cout << "int: " << int_value << std::endl;
        double double_value = static_cast<double>(float_number);
        std::cout << "double: " << double_value << std::endl;
        std::cout << "float: " << float_number << "f" << std::endl;
    }
    else if(str == "nan" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if(str == "-inff" || str == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else if(str == "+inff" || str == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
}
