/* <! SUPERMARKET BILLING SYSTEM

            MADE BY :
 			1) ANIKET BATABYAL
			2) ANAL KUMAR
            LANGUAGES USED: C++

	    TEACHER INCHARGE : MISS JASMEET KAUR...
*/

#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
#include<cstdlib>
#include<winsock.h>
#include<mysql.h>
#include<unistd.h>
#include<mysql_com.h>
#include<sstream>


/* COST LISTING OF THE WHOLESALE PRICES OF THE WHOLE INDUSTRY */

/*NOKIA MOBILES */
#define NOKIA_3  3500
#define NOKIA_6  16500
#define NOKIA_8  17500
#define NOKIA_1  35000
/*SAMSUNG PHONES*/
#define SAMSUNG_J5 20000
#define SAMSUNG_J7 25000
#define SAMSUNG_S6 25000
#define SAMSUNG_S7 30000
#define SAMSUNG_S8 35000
#define SAMSUNG_NOTE_5 56000
#define SAMSUNG_S8_EDGE 41000
#define SAMSUNG_S9 75200

/* MOTOROLLA */
#define MOTOX4 23000
#define MOTOG3 9500
#define MOTOG4 12000
#define MOTOG4_PLUS 15200
#define MOTO_x_fORCE 29500
#define MOTOG5 16700

/*XIAOMI MOBILES*/

#define REDMI_NOTE4 11000
#define REDMI_NOTE5  12000
#define REDMI_NOTE5_PRO 15000

/*laptops*/
/* HP LAPTOPS */
#define HP_ENVY 85000
#define HP_OMEN 172560
#define HP_14AM 45000
#define HP_SPECTRE 95000
/*LENOVO LAPTOPS */
#define LENOVO_LEGION 125000
#define LENOVO_YOGA 50000
#define LENOVO_Y  120000

/*MOBILE ACCESSORIES */
/* HEADPHONES CATEGORY */
#define HEADPHONES_SONY_MDR 1999
#define HEADPHONES_SONY_MDR_5 3199
#define HEADPHONES_SKULL_CANDY 5100
#define HEADPHONES_SAMSUNG_ULTRA 1200
#define HEADPHONES_JBL_1 7100
#define HEADPHONES_JBL_MEGA_BASS 11500
#define HEADPHONES_BOSE_SOUNDCHECK 21000
#define HEADPHONES_BOSE_PRO 51000
/*TEMPERED GLASS */
#define FIVE_DYNAMIC_TEMPERED_GLASS 500
#define NINE_DENSITY_TEMPERED_GLASS 1200
#define GORILLA_BRAND_TEMPERED 2100
/* ************************************************************************************************** */
/* lAPTOP accessories */
#define LAPTOP_SKINS 500
/*LAPTOP CHARGERS */

#define LAPTOP_CHARGER_HP 2000
#define LAPTOP_CHARGER_LENOVO 3000
#define LAPTOP_CHARGER_ACER 4000
#define LAPTOP_CHARGER_ASUS 5000

/* ************************************************************************************************************** */


using namespace std;
/*CLASS OF ELECTRONIC PRODUCTS WHICH ARE AVIALABLE TO THE USER'S SHOP */

class Electronics  /*PARENT CLASS*/
{
protected:
char customer_name[20];
int choice;
   public:
int enter_choice();
void display();
};
    class Mobile :public virtual Electronics
    {
    protected:

    int Serial_of_mobile;
    int quantity;
    int final_price;
    int brand_choice;

    public:
    void calc_total_mobile();
    void display();
    };

    class Laptops :public virtual Electronics,public virtual Mobile
    {
    protected:
int serial_of_laptop;
    public:
    void calc_total_laptop();
    void display();
    };


    class Mobile_Accessories :public virtual Electronics,public virtual Mobile,public virtual Laptops
    {
    protected:
    int serial_MA;
    public:
    void clac_total_mob_acc();
    void display();
    };







/* ******************************************************************************************/

/*CLASS OF FOODS AND BEVERAGES WHICH CAN BE CATEGORISED AS PER THE CUSTOMERS NEED */
class Foods_and_Beverages
{
protected:
string PRODUCT_NAME[100];
int quantity[100];
float price[10];

                public:
                void read_price();
                void display_price();
};

/*********************************************************************************************/

/* Class for SOAPS AND SUBDIVISION OF SOAPS ,Perticularly the FMCG PRODUCTS THAT WE CAN USE */
class Soaps
{
protected:
    string nameofsoap[100];
    int qty_required[100];
    float priceofsoap[100];
    public:

        void get_soapdata();
         void display();
};
           /* class Detergent : public virtual Soaps
			{
			protected:
            string nameofdetergent[10];
            public:
                void getdetergentdata();
                void display();
			};
            class Body_Wash : public Soaps
            {
            protected:
                string nameofwash[20];
                public:
                    void get_washdata();
            };

            class Shampoos :public Soaps
            {
            protected:

            public:

                void getshampoodata();
            }; */


class MATERIAL_CHOICES:public virtual Electronics,public virtual Mobile,public virtual Laptops,public virtual Mobile_Accessories,public virtual Foods_and_Beverages,public virtual Soaps
{
public:
void go_to_choice();
};












/* *********************************************************************************************************************** */

int Electronics::enter_choice()
{
cout<<"ENTER THE NAME OF THE CUSTOMER "<<endl;
cin>>customer_name;
cout<<"Please Enter the choice \n 1> MOBILES  \n2> LAPTOPS  \n3> MOBILE ACCESSORIES \n 4> LAPTOP ACCESSORIES\n"<<endl;
cin>>choice;

return choice;
}

void Mobile ::calc_total_mobile()
{

cout<<"Enter the Brand Of of mobile you want"<<endl;
cout<<"1 for Nokia"<<endl;
cout<<"2 for Samsung"<<endl;
cout<<"3 for Motorolla"<<endl;
cout<<"4 for Redmi(XIAOMI)"<<endl;
cin>>brand_choice;


switch(brand_choice)
{

case 1: cout<<"LIST OF ALL THE NOKIA MOBILES AVIALABLE AT THE STORE-->"<<endl;
cout<<"*********************************************************************************"<<endl;
cout<<"1 for Nokia 3\n2 for Nokia 6\n3 for Nokia 8\n4 for Nokia 1"<<endl;
cout<<"********************************************************************************"<<endl;
cout<<"Enter the Serial No of the mobile"<<endl;
cin>>Serial_of_mobile;
cout<<"Enter the quantity [No of mobiles you want]"<<endl;
cin>>quantity;
/* CASE 1 for NOKIA MOBILES */
if(Serial_of_mobile==1)
{
final_price=NOKIA_3*quantity;
}
else
    if(Serial_of_mobile==2)
    {
    final_price=NOKIA_6*quantity;
    }
    else
        if(Serial_of_mobile==3)
        {
        final_price=NOKIA_8*quantity;
        }
        else
            {
            final_price=NOKIA_1*quantity;
            }

            break;
            /*Case 2 for Samsung MOBILES */
            case 2:
            cout<<"LIST OF ALL SAMSUNG MOBILES AVIALABLE AT THE STORE-->"<<endl;
            cout<<"************************************************************************"<<endl;
            cout<<"1 for SAMSUNG J5"<<endl;
            cout<<"2 for SAMSUNG J7"<<endl;
            cout<<"3 for SAMSUNG S6"<<endl;
            cout<<"4 for SAMSUNG S7"<<endl;
            cout<<"5 for SAMSUNG S8"<<endl;
            cout<<"6 for SAMSUNG NOTE 5"<<endl;
            cout<<"7 for SAMSUNG S8 EDGE"<<endl;
            cout<<"8 for SAMSUNG S9"<<endl;
            cout<<"**************************************************************************"<<endl;
cout<<"Enter the Serial No of the mobile"<<endl;
cin>>Serial_of_mobile;
cout<<"Enter the quantity [No of mobiles you want]"<<endl;
cin>>quantity;
            if(Serial_of_mobile==1)
            {
            final_price= SAMSUNG_J5*quantity;
            }
            else
                if(Serial_of_mobile==2)
                {
                final_price=SAMSUNG_J7*quantity;
                }
                else
                    if(Serial_of_mobile==3)
                    {
                    final_price=SAMSUNG_S6*quantity;
                    }
                    else
                        if(Serial_of_mobile==4)
                        {
                        final_price=SAMSUNG_S7*quantity;
                        }
                        else
                            if(Serial_of_mobile==5)
                            {
                            final_price=SAMSUNG_S8*quantity;
                            }
                            else
                                if(Serial_of_mobile==6)
                                {
                                final_price=SAMSUNG_NOTE_5*quantity;
                                }
                                else
                                    if(Serial_of_mobile==7)
                                    {
                                    final_price=SAMSUNG_S8_EDGE*quantity;
                                    }
                                    else
                                        if(Serial_of_mobile==8)
                                        {
                                        final_price=SAMSUNG_S9*quantity;
                                        }
                                        break;

                                        /*CASE 3 for MOTOROLLA MOBILES */


            case 3:
                    cout<<"LIST OF ALL MOTOROLLA MOBILES AVIALABLE AT THE STORE-->"<<endl;
                    cout<<"*********************************************************************"<<endl;
                    cout<<"1 for MOTO X4"<<endl;
                    cout<<"2 for MOTO G3"<<endl;
                    cout<<"3 for MOTO G4"<<endl;
                    cout<<"4 for MOTO G4 PLUS"<<endl;
                    cout<<"5 for MOTO G5"<<endl;
                    cout<<"6 for MOTO X FORCE"<<endl;
                    cout<<"*********************************************************************"<<endl;
cout<<"Enter the Serial No of the mobile"<<endl;
cin>>Serial_of_mobile;
cout<<"Enter the quantity [No of mobiles you want]"<<endl;
cin>>quantity;

                   if(Serial_of_mobile==1)
                   {
                   final_price=MOTOX4*quantity;
                   }
                   else
                        if(Serial_of_mobile==2)
                        {
                        final_price=MOTOG3*quantity;
                        }
                        else
                            if(Serial_of_mobile==3)
                            {
                            final_price=MOTOG4*quantity;
                            }
                            else
                                if(Serial_of_mobile==4)
                                {
                                final_price=MOTOG4_PLUS*quantity;
                                }
                                else
                                    if(Serial_of_mobile==5)
                                    {
                                    final_price=MOTOG5*quantity;
                                    }
                                    else
                                        if(Serial_of_mobile==6)
                                        {
                                        final_price=MOTO_x_fORCE*quantity;
                                        }
                                        break;
              case 4:
              cout<<"LIST OF ALL REDMI MOBILES AVIALABLE AT THE STORE-->"<<endl;
              cout<<"************************************************************"<<endl;
              cout<<"1 for REDMI NOTE4"<<endl;
              cout<<"2 for REDMI NOTE5"<<endl;
              cout<<"3 for REDMI NOTE5 PRO"<<endl;
              cout<<"*************************************************************"<<endl;
cout<<"Enter the Serial No of the mobile"<<endl;
cin>>Serial_of_mobile;
cout<<"Enter the quantity [No of mobiles you want]"<<endl;
cin>>quantity;

                    if(Serial_of_mobile==1)
                    {
                    final_price=REDMI_NOTE4*quantity;
                    }
                    else
                        if(Serial_of_mobile==2)
                        {
                        final_price=REDMI_NOTE5*quantity;
                        }
                        else
                            if(Serial_of_mobile==3)
                            {
                            REDMI_NOTE5_PRO*quantity;
                            }



              default:
            cout<<"THANK YOU FOR SHOPPING WITH US"<<endl;

            }
}

            void Mobile::display()
            {ofstream file;
            file.open("Electronicsinvoice.txt",ios::app);
            file<<"Total Bill for  "<<customer_name<<" is "<<final_price<<endl;
            file.close();
            }



            /*****************************************************************************************/

void Laptops::calc_total_laptop()
{
cout<<"Enter the brand of laptop you want-->"<<endl;
cout<<"1 for HP"<<endl;
cout<<"2 for Lenovo"<<endl;
cin>>brand_choice;

switch(brand_choice)
{
case 1: cout<<"INVENTORY LIST OF HP LAPTOP-->"<<endl;
cout<<"************************************************************"<<endl;
cout<<"1 for HP ENVY"<<endl;
cout<<"2 for HP OMEN"<<endl;
cout<<"3 for HP 14 series AM laptop"<<endl;
cout<<"4 for HP Spectre buisness laptop"<<endl;
cout<<"Enter the Serial No of the laptop"<<endl;
cin>>serial_of_laptop;
cout<<"Enter the quantity [No of laptops you want]"<<endl;
cin>>quantity;

        if(serial_of_laptop==1)
        {
        final_price=HP_ENVY*quantity;
        }
        else
            if(serial_of_laptop==2)
            {
            final_price=HP_OMEN*quantity;
            }
            else
                if(serial_of_laptop==3)
                {
                final_price=HP_14AM*quantity;
                }
                else
                    if(serial_of_laptop==4)
                    {
                    final_price=HP_SPECTRE*quantity;
                    }
                    break;
case 2:
cout<<"INVENTORY LIST OF LENOVO LAPTOP"<<endl;
cout<<"**************************************************************************"<<endl;
cout<<"1 for LENOVO LEGION LAPTOP"<<endl;
cout<<"2 for LENOVO YOGA LAPTOP"<<endl;
cout<<"3 for LENOVO Y SERIES LAPTOPS"<<endl;
cout<<"***************************************************************************"<<endl;
cout<<"Enter the Serial No of the laptop"<<endl;
cin>>serial_of_laptop;
cout<<"Enter the quantity [No of laptop you want]"<<endl;
cin>>quantity;

        if(serial_of_laptop==1)
        {
        final_price=LENOVO_LEGION*quantity;
        }
        else
            if(serial_of_laptop==2)
            {
            final_price=LENOVO_YOGA*quantity;
            }
            else
                if(serial_of_laptop==3)
                {
                final_price=LENOVO_Y*quantity;
                }
                break;

                default:
                cout<<"SORRY! WE DONT HAVE THIS BRAND AT OUR STORE"<<endl;
                }
}

        void Laptops::display()
        {
        ofstream file;
            file.open("Electronicsinvoice.txt",ios::app);
        file<<"Total Bill for "<<customer_name<<" is "<<final_price<<endl;
        file.close();
        }

void Mobile_Accessories::clac_total_mob_acc()
{
cout<<"what accessories does the user want?"<<endl;
cout<<"*********************************************************************************************************"<<endl;
cout<<"1 for HEADPHONES FOR MOBILE "<<endl;
cout<<"2 for TEMPERED GLASS FOR MOBILES"<<endl;
cin>>brand_choice;

switch(brand_choice)
{
case 1:  cout<<"Enter the type of HEADPHONES THAT THE USER WANTS"<<endl;
/*#define HEADPHONES_SONY_MDR 1999
#define HEADPHONES_SONY_MDR_5 3199
#define HEADPHONES_SKULL_CANDY 5100
#define HEADPHONES_SAMSUNG_ULTRA 1200
#define HEADPHONES_JBL_1 7100
#define HEADPHONES_JBL_MEGA_BASS 11500
#define HEADPHONES_BOSE_SOUNDCHECK 21000
#define HEADPHONES_BOSE_PRO 51000 */
        cout<<"1 for SONY MDR"<<endl;
        cout<<"2 for SONY MDR 5"<<endl;
        cout<<"3 for SKULL cANDY "<<endl;
        cout<<"4 for SAMSUNG ULTRA"<<endl;
        cout<<"5 for JBl 1"<<endl;
        cout<<"6 for JBL MEGA BASS "<<endl;
        cout<<"7 for BOSE SOUNDCHECK"<<endl;
        cout<<"8 for BOSE PRO"<<endl;
        cout<<"Enter the Serial No of the mobile"<<endl;
cin>>serial_MA;
cout<<"Enter the quantity [No of mobiles you want]"<<endl;
cin>>quantity;

        if(serial_MA==1)
        {
        final_price=HEADPHONES_SONY_MDR*quantity;
        }
        else
            if(serial_MA==2)
            {
            final_price=HEADPHONES_SONY_MDR_5*quantity;
            }
            else
                if(serial_MA==3)
                {
                final_price=HEADPHONES_SKULL_CANDY*quantity;
                }
                else
                    if(serial_MA==4)
                     {
                     final_price=HEADPHONES_SAMSUNG_ULTRA*quantity;
                     }
                     else
                     if(serial_MA==5)
                     {
                     final_price=HEADPHONES_JBL_1*quantity;
                     }
                     else
                        if(serial_MA==6)
                        {
                        final_price=HEADPHONES_JBL_MEGA_BASS*quantity;
                        }
                        else
                            if(serial_MA==7)
                            {
                            final_price=HEADPHONES_BOSE_SOUNDCHECK*quantity;
                            }
                            else
                                if(serial_MA==8)
                                {
                                final_price=HEADPHONES_BOSE_PRO*quantity;
                                }
                                break;


  case 2: cout<<"ENTER THE CHOICE OF TEMPERED GLASS THE PERSON WANTS"<<endl;
  cout<<"**************************************************************************************"<<endl;
  cout<<"1 for Five dynamic tempered glass "<<endl;
  cout<<"2 for NINE HARD DENSITY TEMPERED GLASS "<<endl;
  cout<<"3 for EXTREME QUALITY TEMPERED GLASS "<<endl;
  cout<<"***************************************************************************************"<<endl;
  cout<<"Enter the Serial No of the mobile"<<endl;
cin>>serial_MA;
cout<<"Enter the quantity [No of mobiles you want]"<<endl;
cin>>quantity;

        if(serial_MA==1)
        {
        final_price=FIVE_DYNAMIC_TEMPERED_GLASS*quantity;
        }
        else
            if(serial_MA==2)
            {
            final_price=NINE_DENSITY_TEMPERED_GLASS*quantity;
            }
            else
                if(serial_MA==3)
                {
                final_price=GORILLA_BRAND_TEMPERED*quantity;
                }

                break;

            default:
            cout<<"Please Enter again-->"<<endl;

}


}

void Mobile_Accessories::display()
{
ofstream file;
            file.open("Electronicsinvoice.txt",ios::app);
file<<"The final price is"<<final_price<<endl;
file.close();
}


/* FOooooD anddddddddddddddddddddddddddddd BEVERAGESSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSss */

void Foods_and_Beverages::read_price()
{
int noofitems;
float sum=0.0;
cout<<"Enter the no of items"<<endl;
cin>>noofitems;
for(int i=0;i<noofitems;i++)
{
cout<<"Name ";              cin>>PRODUCT_NAME[i];
cout<<"quantity ";           cin>>quantity[i];
cout<<"price ";            cin>>price[i];
}
cout<<"\n \n \n \n \n \n \n"<<endl;
ofstream file; //file made
file.open("invoice.txt",ios::trunc);
for(int i=0;i<noofitems;i++)
{
file<<"Name:"<<PRODUCT_NAME[i]<<" \t  Quantity: "<<quantity[i]<<"\t Price \t"<<price[i]*quantity[i]<<endl;

sum+=(price[i]*quantity[i]);
}
file<<"**********************************************************************"<<endl;
file<<sum<<endl;
file.close();

}



void Foods_and_Beverages::display_price()
{
}
/* ************************************************************************************************************************** */

/* THIS IS FOR THE SOAPS AND DETERGENTS */

void Soaps::get_soapdata()
{
int noofitems;
float sum=0.0;
cout<<"Enter the no of items"<<endl;
cin>>noofitems;
for(int i=0;i<noofitems;i++)
{
    cout<<"Enter the name of the soap"<<endl;
    cin>>nameofsoap[i];
    cout<<"Enter the quantity of the soap bars  required"<<endl;
    cin>>qty_required[i];
    cout<<"Enter the price of the soap"<<endl;
    cin>>priceofsoap[i];
}

ofstream file; //file made
file.open("soap.txt",ios::trunc);
for(int i=0;i<noofitems;i++)
{
file<<"Name:"<<nameofsoap[i]<<" \t  Quantity: "<<qty_required[i]<<"\t Price \t"<<priceofsoap[i]*qty_required[i]<<endl;

sum+=(priceofsoap[i]*qty_required[i]);

}

file<<"**********************************************************************"<<endl;
file<<sum<<endl;
file.close();

    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    int qstate; //0 if error , non zero if no error

conn = mysql_init(0);

if(conn)
{

    cout<<"Connection established "<<endl;
}
else
{

    cout<<"connection failed bruh"<<mysql_error(conn)<<endl;
}
conn=mysql_real_connect(conn,"localhost","root","","cpp",0,NULL,0);

if(conn)
{

    cout<<"Connection to cpp done!!!"<<conn<<endl;
    /* ************************************************************************************** */
    string name;
    stringstream sum1;
    sum1<<sum;
    string sum2=sum1.str();
cout<<sum2<<endl;
        cout<<"enter s_name: "<<endl;
        cin>>name;



       // string query="insert into summation(sum) values('"+sum1+"')";
       string query="insert into ABCD(Name,SUM) values('"+name+"','"+sum2+"')";
        const char* q = query.c_str();

        cout<<"query is: "<<q<<endl;
        qstate = mysql_query(conn,q);

        if(!qstate)
            cout<<"record inserted successfully..."<<endl;
        else
            cout<<"query problem: "<<mysql_error(conn)<<endl;

    /* ****************************************************************************************************/

    qstate=mysql_query(conn,"select * from ABCD");

    if(!qstate)  // get records from the connectionn to the res pointer
    {
        res=mysql_store_result(conn);

        //now read and display

        while(row=mysql_fetch_row(res))
        {

            cout<<"NAME="<<row[0]<<" "<<endl;
            cout<<"SUM="<<row[1]<<" "<<endl;
        }
    }
    else
    {

        cout<<"query cant be executed"<<endl;
    }
}
else
{

    cout<<"connection database problem"<<mysql_error(conn)<<endl;
}




}



void MATERIAL_CHOICES::go_to_choice()
{int inventory;
cout<<"-->Enter 1 for ELECTRONICS \n-->2 for FOOD AND BEVERAGES \n--> 3 for Soaps and Detergents"<<endl;
cin>>inventory;

switch(inventory)
{


case 1:
    enter_choice();

if(choice==1)
{
calc_total_mobile();
Mobile::display();
}
else
    if(choice==2)
    {
    calc_total_laptop();
    Laptops::display();
    }
    else
        if(choice==3)
        {
        Mobile_Accessories::clac_total_mob_acc();
        Mobile_Accessories::display();
        }

        break;
    case 2:

         Foods_and_Beverages::read_price();
            Foods_and_Beverages::display_price();
           break;
    case 3:
        Soaps::get_soapdata();
        break;

    default:
        cout<<"SORRY THIS CATEGORY DOSENT EXIST!!!"<<endl;
}
    }


int main()
{
MATERIAL_CHOICES *M,M1; /* a pointer to the base class */
M=&M1;
M->go_to_choice(); /* pointer pointing to the go to choice func in its own class */

}
