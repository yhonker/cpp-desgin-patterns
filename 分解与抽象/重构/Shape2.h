class Shape {
    public:
        virtual void Draw(const Graphics& g);
        virtual ~Shape(){}
};

class Point {
    public:
        int x;
        int y;
};


class Line : public Shape {
    public:
        Point start;
        Point end;

        Line(const Point& start, const Point& end){
            this->start = start;
            this->end = end;
        }

        virtual void Draw(const Graphic& g){
            g.DrawLine(Pens.red, start.x, start.y, end.x, end.y);
        }

};

class Rect : public Shape {
    public:
        Point LeftUp;
        int height;
        int width;
    
        Rect(const Point& LeftUp, int height, int width){
            this->LeftUp = LeftUp;
            this->height = height;
            this->width = width;

        }

        virtual void Draw(const Graphic& g){
            g.DrawRectangle(Pens.Red,
                leftUp,width,height);
        }
};

//改变

class Circle : public Circle {
    //...
};