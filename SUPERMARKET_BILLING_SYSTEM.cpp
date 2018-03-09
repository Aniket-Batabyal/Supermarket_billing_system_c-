/* <! SUPERMARKET BILLING SYSTEM 

            MADE BY :    
 			1) ANIKET BATABYAL
			2) ANAL KUMAR
            LANGUAGES USED: C++

	    TEACHER INCHARGE : MISS JASMEET KAUR...
*/

#include<iostream>
using namespace std;
/*CLASS OF ELECTRONIC PRODUCTS WHICH ARE AVIALABLE TO THE USER'S SHOP */

class Electronics
{
};
class Mobile : public Electronics
{
};
class Laptops : public Electronics
{
};
class Mobile_Accessories : public Electronics
{
};
class Laptop_Accessories :public Electronics
{
};

/* ******************************************************************************************/

/*CLASS OF FOODS AND BEVERAGES WHICH CAN BE CATEGORISED AS PER THE CUSTOMERS NEED */
class Foods
{

};

class Beverages
{

};

/*********************************************************************************************/

/* Class for SOAPS AND SUBDIVISION OF SOAPS ,Perticularly the FMCG PRODUCTS THAT WE CAN USE */
class Soaps
{

};
class Detergent : public Soaps
			{

		        };	
class Body_Wash : public Soaps
{

};	

class Shampoos :public Soaps
{

};

/*********************************************************************************************/

