                                                                                                                                                                                                                                                                                                                                                                                  #include <iostream>
using namespace std;

class Box {
public:
    Box() : length(0), breadth(0), height(0) {}

    Box(const double newLength, const double newBreadth, const double newHeight)
        : length(newLength), breadth(newBreadth), height(newHeight) {}

    ~Box() {};

    double GetVolume() {
        return length * breadth * height;
    }

    void SetLength(double len) {
        length = len;
    }

    void SetBreadth(double bre) {
        breadth = bre;
    }

    void SetHeight(double hei) {
        height = hei;
    }

    // Overload + operator to add two Box objects.
    Box operator+(const Box& b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }

private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
};

int main() {
    // Example usage:
    Box box1(3.0, 4.0, 5.0);
    Box box2(2.0, 3.0, 4.0);
    Box box3(3.0, 7.0, 6.1);

    Box sumBox = box1 + box2 + box3;
    cout << "Volume of sumBox: " << sumBox.GetVolume() << endl;

    return 0;
}