#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<ctime>
#include<list>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<deque>

using namespace std;

struct product
{
    int productID;
    string productName;
    string productCategory;
};

struct customer
{
    string customerID;
    //string customerName;
};

struct order {
    int orderID;
    string customerID;
    int productId;
    int quality;
    time_t orderTime;

};

int main(){

    vector<product> productDetails = {
        {100 , "Laptop", "Electronics"},
        {101 , "SmartPhone", "Electronics"},
        {102 , "Cooker", "Kitchen"},
        {103 , "Wadrope", "RoomDecor"},
    };

    cout << "Product Details: \n";
    for (const auto& productDetailsPrint : productDetails) {
        cout << "Product ID: " << productDetailsPrint.productID << endl;
           cout  << " Name: " <<productDetailsPrint.productName << endl;
            cout << " Category: " << productDetailsPrint.productCategory << endl;
    }

    deque <customer> customerVisit = {{"CS20"}, {"CS30"}, {"CS50"}};

    customerVisit.push_back({"CS60"});
    customerVisit.push_front({"CS10"});

    cout << "\nCustomer Visits: \n";
    for (const auto& CustomerVisitPrint : customerVisit) {
        cout << "Customer ID: " << CustomerVisitPrint.customerID << endl;
    }

    list <order> orderHistory;

    orderHistory.push_front({1, "CS10", 100, 1, time(0)});
    orderHistory.push_front({2, "CS30", 103, 2, time(0)});
    orderHistory.push_front({3, "CS50", 101, 3, time(0)});

    cout << "\nOrder History: \n";
    for (const auto& orderPrint : orderHistory) {
        cout << "Order ID: " << orderPrint.orderID  << endl;
          cout   << " Customer ID: " << orderPrint.customerID << endl;
            cout << " Product ID: " << orderPrint.productId  << endl;
           cout  << " Quantity: " << orderPrint.quality << endl;
           cout  << " Order Time: " << ctime(&orderPrint.orderTime);
    }

    set<string> orderCategory;
    for (const auto& Product : productDetails) {
        orderCategory.insert(Product.productCategory);
    }
    
    cout << "\nOrder Categories: \n";
    for (const auto& category : orderCategory) {
        cout << "Category: " << category << endl;
    }

    map<int, int> productStock = {
        {100, 10},
        {101, 20},
        {102, 30},
        {103, 40},
    };

    cout << "\nProduct Stock: \n";
    for (const auto& stock : productStock) {
        cout << "Product ID: " << stock.first 
             << ", Stock: " << stock.second << endl;
    }


    multimap<string, order> customerOrder;
    for(const auto &Order : orderHistory){
        customerOrder.insert({Order.customerID, Order});
    }

    unordered_map <string, string> customerData = {
        {"CS10" , "Ram"},
        {"CS20" , "Sam"},
        {"CS30" , "Jadu"},
    };


    cout << "\nCustomer Data: \n";
   
    for (const auto& cust : customerData) {
        cout << "Customer ID: " << cust.first 
             << ", Name: " << cust.second << endl;
    }

   

    return 0;
}
