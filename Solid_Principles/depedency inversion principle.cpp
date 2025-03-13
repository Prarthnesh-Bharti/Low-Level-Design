//depedency inversion principle

//class should  depend on interfaces rather than concrete classes

// Issue: Macbook is tightly coupled to WiredKeyboard and WiredMouse.
// Without Dependency Inversion Principle (DIP)
class WiredKeyboard {};
class WiredMouse {};

class Macbook {
private:
    const WiredKeyboard keyboard;
    const WiredMouse mouse;

public:
    Macbook() {
        this->keyboard = WiredKeyboard();
        this->mouse = WiredMouse();
    }
};

// Following Dependency Inversion Principle (DIP)
class Keyboard {
public:
    virtual ~Keyboard() = default;
};

class Mouse {
public:
    virtual ~Mouse() = default;
};

// Concrete implementations
class WiredKeyboard : public Keyboard {};
class WiredMouse : public Mouse {};

class Macbook {
private:
    const Keyboard& keyboard;
    const Mouse& mouse;

public:
    Macbook(const Keyboard& kb, const Mouse& ms) : keyboard(kb), mouse(ms) {
        this->keyboard = kb;
        this->mouse = ms;
    }
};
