//------------------------------------------------------------
// Name: Luke Parton   Date:11/06/13   File Name: business_class.cpp
// Assignment: 09      Section: C  
//------------------------------------------------------------
#include "customer_header.h"
#include "business_header.h"

#include <iostream>
using namespace std;

Business::Business() 
{
  m_business_name = "";
  m_register_cash = 0;
  m_product_size = 0;
  m_customers = 0;
}

Business::Business(const string name, const float cash)
{
  m_business_name = name;
  m_register_cash = cash;
  m_product_size = 0;
  m_customers = 0;
  ifstream fin;
  fin.open("item_list.txt");

  while(fin >> m_products[m_product_size])
    m_product_size++; //counts the number of products inputted
}

void Business::printInfo() const
{
  cout << "Business name: " << m_business_name << endl;
  cout << "Customers names:" << endl;
  for (int i = 0; i < m_customers; i++)
  {//makes a list of customers
    cout << i+1 << ". " << m_customer_array[i].getName() << endl;
  }
  cout << "The following items are in stock: " << endl;
  for (int i = 0; i < m_product_size; i++)
  {//makes a list of items in stock

    cout << i+1 << ". " << m_products[i] << endl;
  }
  cout << endl;
  return;
}


void Business::newCustomer(Customer & customer_new)
{
  m_customer_array[m_customers] = customer_new; 
  m_customers++;
  return;
}

void Business::make_a_sale()
{  
  printInfo();
  for(int i = 0; i< m_customers; i++)
  {
    if(m_customer_array[i].purchase(m_products[rand()%m_product_size]))
    {//if the customer has enough money
      m_register_cash += COST;
    }
    m_customer_array[i].printInfo();
    cout << endl;
  }

  return;
}

