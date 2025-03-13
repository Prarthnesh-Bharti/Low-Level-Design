// 1.Single Responsibility Principle : Class should have only one reason to change
#include<bits/stdc++.h>
using namespace std;

// Marker entity
class Marker {
  public:
      string name;
      string color;
      int year;
      int price;
  
      // Constructor to initialize Marker attributes
      Marker(string name, string color, int year, int price) {
          this->name = name;
          this->color = color;
          this->year = year;
          this->price = price;
      }
  };
  
  // Invoice class responsible for handling marker transactions
  class Invoice {
  private:
      int quantity;
  public:
      Marker marker; // Marker object associated with the invoice
  
      // Constructor initializes marker and quantity
      // Passing marker as a "const reference" to avoid unnecessary copying
      Invoice(const Marker& marker, int quantity) {
        this->marker = marker;  // Assigning marker (copy happens here)
        this->quantity = quantity;
    }

      int calculateTotal() {
          return marker.price * quantity;
      }
  
      void printInvoice() {
          // Print invoice
      }
  
      void saveDB() {
          // Save to database
      }
  };
  
  int main() {
      // Creating a Marker object with name "Camlin", color "Blue", year 2023, and price ₹50
      Marker marker("Camlin", "Blue", 2023, 50);
      Invoice invoice(marker, 10);
  
      cout << "Total Price: " << invoice.calculateTotal() << endl;
  
      return 0;
  }
  