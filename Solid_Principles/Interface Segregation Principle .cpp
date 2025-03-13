






// Interface Segregation Principle (ISP): Separate interfaces for different responsibilities
//not folllowing ISP


// Single interface with all responsibilities
class RestaurantEmployee {
public:
    virtual void washDishes() = 0;
    virtual void serveCustomers() = 0;
    virtual void cookFood() = 0;
    virtual ~RestaurantEmployee() {}
};

// Waiter class implements unnecessary functions
class Waiter : public RestaurantEmployee {
public:
    void washDishes() override {
        throw logic_error("Waiter cannot wash dishes");
    }
    
    void serveCustomers() override {
        cout << "Serving customers" << endl;
    }
    
    void cookFood() override {
        throw logic_error("Waiter cannot cook food");
    }
};

// DishwasherEmployee class implements unnecessary functions
class DishwasherEmployee : public RestaurantEmployee {
public:
    void washDishes() override {
        cout << "Washing dishes" << endl;
    }
    
    void serveCustomers() override {
        throw logic_error("Dishwasher cannot serve customers");
    }
    
    void cookFood() override {
        throw logic_error("Dishwasher cannot cook food");
    }
};

// Chef class implements unnecessary functions
class Cook : public RestaurantEmployee {
public:
    void washDishes() override {
        throw logic_error("Chef cannot wash dishes");
    }
    
    void serveCustomers() override {
        throw logic_error("Chef cannot serve customers");
    }
    
    void cookFood() override {
        cout << "Cooking food" << endl;
    }
};

class Dishwasher {
public:
    virtual void washDishes() = 0;
    virtual ~Dishwasher() {}
};

class Server {
public:
    virtual void serveCustomers() = 0;
    virtual ~Server() {}
};

class Chef {
public:
    virtual void cookFood() = 0;
    virtual ~Chef() {}
};

// Waiter class implements only the Server interface
class Waiter : public Server {
public:
    void serveCustomers() override {
        cout << "Serving customers" << endl;
    }
};

// DishwasherEmployee class implements only the Dishwasher interface
class DishwasherEmployee : public Dishwasher {
public:
    void washDishes() override {
        cout << "Washing dishes" << endl;
    }
};

// Chef class implements only the Chef interface
class Cook : public Chef {
public:
    void cookFood() override {
        cout << "Cooking food" << endl;
    }
};
