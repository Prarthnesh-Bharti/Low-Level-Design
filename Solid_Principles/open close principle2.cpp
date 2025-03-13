
class Invoice {
public:
    string markerName;
    int quantity;
    int price;

    Invoice(string markerName, int quantity, int price) {
        this->markerName = markerName;
        this->quantity = quantity;
        this->price = price;
    }

    int calculateTotal() {
        return quantity * price;
    }
};

// Abstract class (acts as an interface)
class InvoiceDao {
public:
virtual void save(const Invoice& invoice) = 0; // Pure virtual function
virtual ~InvoiceDao() {} // Virtual destructor

    /*A virtual function in C++ is a function that is declared in a base class and overridden in a derived class. It allows dynamic (runtime) polymorphism, meaning that the function that gets called is determined at runtime based on the actual type of the object.*/
};

// Database implementation (derived class from InvoiceDao)
class DatabaseInvoiceDao : public InvoiceDao {
public:
    void save(const Invoice& invoice) override {
        cout << "Invoice saved to database." << endl;
    }
};

// File implementation
class FileInvoiceDao : public InvoiceDao {
public:
    void save(const Invoice& invoice) override {
        cout << "Invoice saved to file." << endl;
    }
};


