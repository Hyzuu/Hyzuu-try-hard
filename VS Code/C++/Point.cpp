class Point {
private:
    double x, y;
public: 
    Point() {

    }
    Point(double x, double y) {
        this -> x = x;
        this -> y = y;
    }
    void setX(double x) {
        this -> x = x;
    }
    double getX() {
        return x;
    }
    void setY(double y) {
        this -> y = y;
    }
    double getY() {
        return y;
    }
    void setXY(double x, double y) {
        this -> x = x;
        this -> y = y;
    }
    

};