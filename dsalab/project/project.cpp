#include <iostream>
#include <string>
#define tax_rate_preprocessor 0.15f
using namespace std;
int main() {
    cout<<"THIS IS A C++ PROGRAM WHICH IS A COMPILED LANGUAGE THAT ANALYZE PRODUCT SALES AND INVENTORY FOR A STORE."<<endl;
    string product_name;
    int product_category;
    int initial_inventory_quantity;
    float product_price_per_unit;
    int the_number_of_items_sold;
    cout<<"enter the product_name: ";
    cin>> product_name;
    cout<<"enter category product catgory (1-5) pelase:  ";
    cin>>product_category ;
    cout<<"enter the_initial_inventory_quantity:";
    cin>>initial_inventory_quantity;
    cout<<"enter the product_price_per_unit: ";
    cin>> product_price_per_unit;
    cout<<"enter the number of items sold: ";
    cin>> the_number_of_items_sold;
    int The_new_inventory;
    The_new_inventory= initial_inventory_quantity - the_number_of_items_sold;
    float total_sales;
    total_sales= the_number_of_items_sold*product_price_per_unit;
    string inventory_status;
    if (The_new_inventory<=10) {
        cout<<"this is low inventory"<<endl;
        }
    else{
        cout<<"sufficient"<<endl;
    }
    auto total_sales_copy= total_sales;
    decltype (initial_inventory_quantity) extra_stock=15;
    cout << "For tax rate the result will be " << (int)( tax_rate_preprocessor * 100) << " %" << endl;
     //detail information
     cout<<"product information"<< endl ;
     cout<<"NAME :" << product_name << endl;
     cout<<"INTTUAL INVENTORY :" << initial_inventory_quantity << endl ;
     cout << "PRICE PER UNIT : $" << (int)product_price_per_unit << endl;
     cout <<"INVENTORY STATUS : " << inventory_status << endl;
     cout << "Helper Variable (Total Sales Copy): $" << total_sales_copy << endl;
    cout << "Extra Stock (decltype example): " << extra_stock <<  endl ;
    if(product_category >=1 && product_category <=5 ) {
    switch (product_category) {
        case 1:
            cout << "Electronics is your product category"<<endl;
        break;
        case 2:
            cout << "Gloceries is your product category"<<endl;
        break;
        case 3:
            cout << "Clothing is your product categor"<<endl;
        break;
        case 4:
            cout<<"Stationary is your product categor"<<endl;
        break;
        case 5:
            cout<<"Miscellaneous is your product categor"<<endl;
        break;
    }
} else{
    cout<<"you have entered invalid product category please enter the number that between 1 and 5";
}
cout<<"Receipt"<<endl;
    int i;
    for (i = 1; i <= the_number_of_items_sold; i += 1) {
        cout << "item" << i << " the price of the product is " << product_price_per_unit << " birr" << endl;
    }
    return 0;
}