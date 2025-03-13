// 3. Liskov substitution principle:  a subclass should not remove or alter the fundamental behavior of its parent class.



// Bike interface
class Bike {
public:
    virtual void turnOnEngine() = 0;
    virtual void accelerate() = 0;
    virtual ~Bike() {} // Virtual destructor for proper cleanup
    /*A virtual destructor ensures that when a base class pointer is used to delete a derived class object, the derived class's destructor is called before the base class destructor.*/
};

// Motorcycle class (Properly extends the capabilities of Bike)
class Motorcycle : public Bike {
private:
    bool isEngineOn = false;
    int speed = 0;

public:
    void turnOnEngine() override {
        isEngineOn = true;
        cout << "Motorcycle engine turned on." << endl;
    }

    void accelerate() override {
        if (!isEngineOn) {
            throw runtime_error("Cannot accelerate: Engine is off!");
        }
        speed += 10;
        cout << "Motorcycle accelerating. Speed: " << speed << " km/h" << endl;
    }
};

// Bicycle class (Incorrectly implements Bike, violating Liskov Substitution)
class Bicycle : public Bike {
private:
    int speed = 0;

public:
    void turnOnEngine() override {
        throw logic_error("Bicycle has no engine!"); // Exception for incorrect behavior
    }

    void accelerate() override {
        speed += 5;
        cout << "Bicycle accelerating. Speed: " << speed << " km/h" << endl;
    }
};


//follow liskov principle
// Base class for all vehicles
class Vehicle {
protected:
    int wheels;
    int speed;
public:
    Vehicle(int w) {
        this->wheels = w;
        this->speed = 0;
    }

    virtual void accelerate() = 0; // Common behavior for all vehicles
    virtual ~Vehicle() {}
};

// Subclass for vehicles that have an engine
class EngineVehicle : public Vehicle {
protected:
    bool isEngineOn;

public:
    EngineVehicle(int w) : Vehicle(w) {
        this->isEngineOn = false;
    }

    void turnOnEngine() {
        this->isEngineOn = true;
        cout << "Engine turned on." << endl;
    }

    void accelerate() override {
        if (!this->isEngineOn) {
            throw runtime_error("Cannot accelerate: Engine is off!");
        }
        this->speed += 10;
        cout << "Accelerating. Speed: " << this->speed << " km/h" << endl;
    }
};

// Motorcycle class (inherits from EngineVehicle)
class Motorcycle : public EngineVehicle {
public:
    Motorcycle() : EngineVehicle(2) {}
};

// Car class (inherits from EngineVehicle)
class Car : public EngineVehicle {
public:
    Car() : EngineVehicle(4) {}
};

// Bicycle class (inherits from Vehicle but does NOT have an engine)
class Bicycle : public Vehicle {
public:
    Bicycle() : Vehicle(2) {}

    void accelerate() override {
        this->speed += 5;
        cout << "Bicycle accelerating. Speed: " << this->speed << " km/h" << endl;
    }
};
