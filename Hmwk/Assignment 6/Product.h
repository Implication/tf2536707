/* 
 * File:   Product.h
 * Author: Trajon Felton
 * Created on July 24, 2014, 1:19 PM
 */

#include <string>


#ifndef PRODUCT_H
#define	PRODUCT_H
class Product{
public:
    Product(){
       _jars = 0;
       _name = "no name";
    }
    Product(short j, std::string n){
        _jars = j;
        _name = n;
    }
    
    string getName
    
private:
    short _jars;
    std::string _name;
};



#endif





