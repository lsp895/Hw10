//------------------------------------------------------------
// Name: Luke Parton   Date:11/06/13   File Name: business_header.h
// Assignment: 09      Section: C  
//------------------------------------------------------------
#ifndef BUSINESS_HEADER_H
#define BUSINESS_HEADER_H
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;
const int BUSINESS_SIZE = 10;
const int MAX_CASH = 250; //max a customer can randomly start with
const int MIN_CASH = 4; //min a customer can start with
const int COST = 40;
const int BUSINESS_VALUE = 100; //amount of money the business starts with
const string BFILE = "item_list.txt";


//Business();
//Description: Creates a business class with no parameters
//Pre: None
//Post: Creates an empty business with nothing in it

//Business(const string name, const float cash);
//Description: Creates a business class with given parameters
//Pre: cash should be positive
//Post: Creates a business with a name and an amount of money

//void printInfo() const;
//Description: Prints information about the business class to the screen
//Pre: none
//Post: Outputs information about the business class to the screen

//void newCustomer(Customer & customer_new);
//Description: Populates the customer array with a new customer
//Pre: Shouldnt be a customer class that was already passed
//Post: Sets a value in the array to the name of customer class

//void make_a_sale();
//Description: Makes a sale
//Pre: Must be customers and a business declared
//Post: Makes a sale if the customer has enough money and updates money
//      accordingly.



class Business
{
  public:                                                           
    Business();
    Business(const string name, const float cash);
    void printInfo() const;
    void newCustomer(Customer & customer_new);
    void make_a_sale();
  private:
    Customer m_customer_array[BUSINESS_SIZE];
    string m_business_name;
    string m_products[BUSINESS_SIZE]; 
    float m_register_cash;
    short m_product_size;
    short m_customers;
};
#endif