#include "convert.hpp"

void ScalarConverter::convert(std::string value)
{
    int i = 0;
    int db = 0;
    int flo = 0;
    double dou_ble;
    float floa_t;

    i = atoi(value.c_str());
    dou_ble = atof(value.c_str());
    floa_t = atof(value.c_str());

    if (value.find('.') != std::string::npos && value.find('f') != std::string::npos)
        flo = 1;
    if (value.find('.') != std::string::npos)
        db = 1;
    if(value == "nan")
    {
        double n = atof(value.c_str());
        std::cout <<n<<std::endl;
    }
    if (flo)
    {
        double bb = static_cast<double>(floa_t);
        int inter_ = static_cast<int>(floa_t);
        char c = static_cast<char>(floa_t);
        std::cout << "Char:" << c << std::endl;
        std::cout << "Int: " << inter_ << std::endl;
        std::cout << "Float: " << std::fixed << std::setprecision(1) << floa_t << "f" << std::endl;
        std::cout << "Double: " << std::fixed << std::setprecision(1) << bb << std::endl;
        return;
    }
    if (db)
    {
        float bb = static_cast<float>(dou_ble);
        int inter_ = static_cast<int>(dou_ble);
        char c = static_cast<char>(dou_ble);
        std::cout << "Char: " << c << std::endl;
        std::cout << "Int: " << inter_ << std::endl;
        std::cout << "Float: " << std::fixed << std::setprecision(1) << bb << "f" << std::endl;
        std::cout << "Double: " << std::fixed << std::setprecision(1) << dou_ble << std::endl;
        return;
    }
    if (value.length() == 1)
    {
        if ((value[0] >= 'a' && value[0] <= 'z') || (value[0] >= 'A' && value[0] <= 'Z'))
        {

            char v = value[0];
            int in = static_cast<int>(v);
            double bb = static_cast<double>(v);
            float ff = static_cast<float>(v);
            std::cout << "Char:  " << v << std::endl;
            std::cout << "Int: " << in << std::endl;
            std::cout << std::fixed << std::setprecision(2) << "Float: " << ff << "f" << std::endl;
            std::cout << "Double: " << bb << std::endl;
            return;
        }
        else
        {
            double bb = static_cast<double>(i);
            float ff = static_cast<float>(i);
            char c = static_cast<char>(i);
            if(c == 0)
                std::cout << "Char:" <<"impossible"<< std::endl;
            std::cout << "Int: " << i << std::endl;
            std::cout << std::fixed << std::setprecision(1) << "Float: " << ff << "f" << std::endl;
            std::cout << "Double:" << bb << std::endl;
            return;
        }
    }
    else
    {
            double bb = static_cast<double>(i);
            float ff = static_cast<float>(i);
            char c = static_cast<char>(i);
            if(c > 126 || c <= 32)
                std::cout << "Char:" << "Not printable" << std::endl;  
            else  
                std::cout << "Char:" << c << std::endl;
            std::cout << "Int: " << i << std::endl;
            std::cout << std::fixed << std::setprecision(1) << "Float: " << ff << "f" << std::endl;
            std::cout << "Double:" << bb << std::endl;
    }
}