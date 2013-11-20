//------------------------------------------------------------
// Name: Luke Parton   Date:11/06/13   File Name: driver_main.cpp
// Assignment: 09      Section: C  
//------------------------------------------------------------
// Description: This program tests the Customer and Business classes by
// simulating a business and customer interaction.
#include "customer_header.h"
#include "business_header.h"


#include <iostream>
using namespace std;
int main()
{
  srand(time(NULL));

  Customer customer_default;
  Customer customer_poor("Poor", COST-1);
  Customer customer_wealthy("Wealthy", COST*3);
  Customer customer_average("Average", COST);

  Business business_default;
  Business business_non_default("Luke CO", BUSINESS_VALUE);

  business_non_default.newCustomer(customer_poor);
  business_non_default.newCustomer(customer_wealthy);
  business_non_default.newCustomer(customer_average);

  business_non_default.make_a_sale();
  business_non_default.make_a_sale();

  return 0;
}