//------------------------------------------------------------
// Name: Luke Parton   Date:11/06/13   File Name: customer_class.cpp
// Assignment: 09      Section: C  
//------------------------------------------------------------
#include "customer_header.h"
#include "business_header.h"
#include <iostream> 
using namespace std;

Customer::Customer()
{
  for(int i=0; i<PURCHASES-1;i++)
  {
    m_customer_purchases[i] = ""; 
  }
  m_customer_name = ""; //gives them a random amount of money
  m_spending_cash = ((rand()%((MAX_CASH-MIN_CASH)+1)+MIN_CASH));
  m_num_purchases = 0;
}
Customer::Customer(const string input_name, const short cash)
{
  m_customer_name = input_name;
  m_spending_cash = cash;
  m_num_purchases = 0;
}
bool Customer::purchase(const string item)
{
  bool able;
  if(COST<=m_spending_cash && m_num_purchases<=PURCHASES)
  { //makes sure the customer can purchase before running
    m_spending_cash -= COST;
    m_customer_purchases[m_num_purchases] = item;
    m_num_purchases++;
    able = true;
  }
  return able;
}


void Customer::printInfo() const
{
  cout << m_customer_name << " has $" << m_spending_cash << " and has purchased ";
  if (m_num_purchases == 0)
    cout << "nothing.";
  for(int i = 0; i<m_num_purchases; i++)
  {
    if (m_num_purchases == 1) //sentence formatting
      cout << m_customer_purchases[i] << ".";
    else if (i!=m_num_purchases-1)
      cout << m_customer_purchases[i] << ", ";
    else if (i == m_num_purchases-1)
      cout << "and " << m_customer_purchases[i] << ".";
  }
  cout << endl;
  return;
}
