//------------------------------------------------------------
// Name: Luke Parton   Date:11/06/13   File Name: customer_header.h
// Assignment: 09      Section: C  
//------------------------------------------------------------
#ifndef CUSTOMER_HEADER_H
#define CUSTOMER_HEADER_H
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
const int PURCHASES = 20;
//Customer();
//Description: Makes a customer class if there is nothing passed
//Pre: none
//Post: Makes a customer with no name and a random amount of money 
//      and no purchases.

//Customer(const string name, const short cash);
//Description: Makes a customer class if there is something passed
//Pre: none
//Post: Creates a customer with the past name and money with no purchases

//bool purchase(const string item);
//Description: Determines if a sale can be made
//Pre: none
//Post: Returns a bool and decrements spending_cash accordingly

//string getName() const {return customer_name;}
//Description: Getter function for name
//Pre: name has been assigned
//Post: returns a string

//float getCash() const {return spending_cash;}
//Description: Getter function for spending_cash
//Pre: spending_cash has been assigned
//Post: returns a float

//void setCash(const int cost) {spending_cash-=cost; return;}
//Description: Setter function for spending_cash
//Pre: spending_cash has been assigned
//Post: Decrements spending_cash by COST

//void printInfo() const;
//Description: Prints information about the customer class
//Pre: Obects of Customer type have been declared
//Post: Prints information about wealth and purchases of the customer


class Customer
{
  public:
    Customer();
    Customer(const string name, const short cash);
    bool purchase(const string item);
    string getName() const {return m_customer_name;}
    float getCash() const {return m_spending_cash;}
    void setCash(const int cost) {m_spending_cash-=cost; return;}
    void printInfo() const;

  private:
    string m_customer_purchases[PURCHASES];
    string m_customer_name;
    short m_num_purchases;
    float m_spending_cash;
};
#endif