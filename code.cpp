#include <iostream>
using namespace std;

static int totalIncome = 0;
class Customer;
class Mobile;
class Charger;

class Mobile {
public:
    string company;
    string model;
    int price;
    int quantity;

    void addMobile(string comp, string mod, int p, int q) {
        company = comp;
        model = mod;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Model: " << model 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class Charger {
public:
    string company;
    string type;
    int price;
    int quantity;

    void addCharger(string comp, string typ, int p, int q) {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class Headphone {
public:
    string company;
    string type;
    int price;
    int quantity;

    void addHeadphone(string comp, string typ, int p, int q) {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};



class Customer {
public:
    void buy(Mobile &mob, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (mob.quantity >= qty) 
		{
            mob.quantity -= qty;
            totalIncome += mob.price - ((mob.price*d)/100) * qty;
            cout << " You purchased " << qty << " phone(s) in discount "<< ((mob.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        mob.show();
     
    }
    
    void buyc(Charger &charg, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (charg.quantity >= qty) 
		{
            charg.quantity -= qty;
            totalIncome += charg.price - ((charg.price*d)/100) * qty;
            cout << " You purchased " << qty << " Charger (s) in discount "<< ((charg.price*d)/100)   
			;
        } 
		else 
		{
            cout << "charger Not enough stock available." << endl;   
			cout<<endl;
        }
        charg.show();
     
    }
     void buyh(Headphone &head, int qty,double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (head.quantity >= qty) 
		{
            head.quantity -= qty;
            totalIncome +=head.price - ((head.price*d)/100) * qty;
            cout << " You purchased " << qty << " Headphone (s) in discount "<< ((head.price*d)/100)   
			;
        } 
		else 
		{
            cout << "headphone stock not available" << endl;   
			cout<<endl;
        }
        head.show();
     
    }
    
    
};

int main() {
    Mobile m1,m2,m3;
    m1.addMobile("Oppo", "Cute PRO Max", 20000, 10);
    m2.addMobile("APPLE", "Sweet PRO Max", 40000, 10);
    m3.addMobile("Samsung", "Taddy PRO Max", 15000, 10);
    
    Charger ch1,ch2;
    ch1.addCharger("Samsung","C-Type", 1100, 15);
    ch2.addCharger("Apple","Lightning-Type", 2000, 15);
    
    Headphone h1 , h2;
    h1.addHeadphone("Samsung","wired",599,5);
    h2.addHeadphone("Apple","wireless", 2907, 15);
    
    
    

    Customer c1[11];
    c1[0].buy(m1, 1, 10);
    c1[1].buy(m2, 5,5);
    c1[2].buy(m3, 2,1);
    c1[3].buy(m2, 1,12);
    c1[4].buy(m3, 0,2); 
    c1[5].buy(m1, 2,45); 
    c1[6].buy(m1, 3,12);
    c1[7].buyc(ch1,1,10) ; 
	c1[8].buyc(ch2,1,5) ; 
	c1[9].buyh(h1,5,7); 
		c1[10].buyh(h2,9,15); 
	cout<<endl;
    cout << "Total Income: " << totalIncome << endl;

    return 0;
}