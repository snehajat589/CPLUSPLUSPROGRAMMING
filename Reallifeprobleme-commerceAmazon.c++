#include <iostream>
#include <string>
using namespace std;

class User
{
protected:
    int userID;
    string name;

public:
    void getUser()
    {
        cout << "Enter User ID: ";
        cin >> userID;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayUser()
    {
        cout << "\nUser ID : " << userID;
        cout << "\nName    : " << name << endl;
    }
};

class Customer : public User
{
private:
    string address;
    long phone;

public:
    void getCustomer()
    {
        getUser();

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Phone Number: ";
        cin >> phone;
    }

    void displayCustomer()
    {
        displayUser();

        cout << "Address : " << address << endl;
        cout << "Phone   : " << phone << endl;
    }
};

class Product
{
private:
    int productID;
    string productName;
    float price;

public:
    void addProduct()
    {
        cout << "\nEnter Product ID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Product Price: ";
        cin >> price;
    }

    void displayProduct()
    {
        cout << "\n------ Product Details ------";
        cout << "\nProduct ID   : " << productID;
        cout << "\nProduct Name : " << productName;
        cout << "\nPrice        : " << price << endl;
    }

    float getPrice()
    {
        return price;
    }

    string getProductName()
    {
        return productName;
    }
};


class Cart
{
private:
    string cartProduct;
    int quantity;
    float total;

public:
    void addToCart(Product p)
    {
        cartProduct = p.getProductName();

        cout << "\nEnter Quantity: ";
        cin >> quantity;

        total = quantity * p.getPrice();

        cout << "\nProduct Added To Cart Successfully.\n";
    }

    void showCart()
    {
        cout << "\n------ Cart Details ------";
        cout << "\nProduct  : " << cartProduct;
        cout << "\nQuantity : " << quantity;
        cout << "\nTotal    : " << total << endl;
    }

    float getTotal()
    {
        return total;
    }
};


class Order
{
private:
    int orderID;
    string status;

public:
    void placeOrder()
    {
        cout << "\nEnter Order ID: ";
        cin >> orderID;

        status = "Confirmed";

        cout << "\nOrder Placed Successfully.\n";
    }

    void displayOrder()
    {
        cout << "\n------ Order Details ------";
        cout << "\nOrder ID : " << orderID;
        cout << "\nStatus   : " << status << endl;
    }
};


class Payment
{
private:
    float amount;
    string method;

public:
    void makePayment(float total)
    {
        amount = total;

        cin.ignore();

        cout << "\nEnter Payment Method (UPI/Card/Cash): ";
        getline(cin, method);

        cout << "\nPayment Successful.\n";
    }

    void displayPayment()
    {
        cout << "\n------ Payment Details ------";
        cout << "\nAmount Paid : " << amount;
        cout << "\nMethod      : " << method << endl;
    }
};


int main()
{
    Customer c;
    Product p;
    Cart cart;
    Order o;
    Payment pay;

    cout << "\n===== E-Commerce System =====\n";

    // Customer Details
    c.getCustomer();

    // Product Details
    p.addProduct();

    // Display Product
    p.displayProduct();

    // Add To Cart
    cart.addToCart(p);

    // Show Cart
    cart.showCart();

    // Place Order
    o.placeOrder();
    o.displayOrder();

    // Payment
    pay.makePayment(cart.getTotal());
    pay.displayPayment();

    // Display Customer Details
    c.displayCustomer();

    cout << "\n\nThank You For Shopping!\n";

    return 0;
}