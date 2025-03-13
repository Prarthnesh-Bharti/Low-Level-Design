#include <iostream>
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

// Invoice class 
class Invoice {
private:
    int quantity;

public:
    Marker marker; // Marker object associated with the invoice

    // Constructor initializes marker and quantity
    Invoice(const Marker& marker, int quantity) {
        this->marker = marker;
        this->quantity = quantity;
    }

    // Function to calculate total price
    int calculateTotal() const {
        int totalprice=this->marker.price * this->quantity;
        return totalprice;
    }

    // Function to get quantity
    int getQuantity() const {
        return this->quantity;
    }
};

// InvoicePrinter class 
class InvoicePrinter {
private:
    Invoice invoice; // Invoice instance (Copy)
    /*An instance is a specific object created from a class. When you define a class, you are creating a blueprint, and when you create an object of that class, you are creating an instance of it.*/

public:
    // Constructor to initialize InvoicePrinter with an invoice
    InvoicePrinter(const Invoice& invoice) {
        this->invoice = invoice;
    }

    // Function to print invoice details
    void printInvoice() const {
       //print code
    }
};

// InvoiceDAO class (Handles database interactions)
class InvoiceDAO {
private:
    Invoice invoice; // Invoice instance (Copy)

public:
    // Constructor to initialize InvoiceDAO with an invoice
    InvoiceDAO(const Invoice& invoice) {
        this->invoice = invoice;
    }

    // Function to save invoice to database
    void saveToDB() const {
        cout << "Invoice saved to database successfully!" << endl;
    }
};

int main() {
    Marker marker("Camlin", "Blue", 2023, 50);
    Invoice invoice(marker, 10);

    // Creating InvoicePrinter and printing invoice
    InvoicePrinter printer(invoice);
    printer.printInvoice();

    // Creating InvoiceDAO and saving invoice to DB
    InvoiceDAO dao(invoice);
    dao.saveToDB();

    return 0;
}
