#include<iostream>


using namespace std;

class rectangle
{
    int height;
    int width;
public:
    int getarea(int h,int w)
    {
        int area;
        area = h * w;
        cout << "The area of the rectangle = " << area << "\n";
    }

int getperimeter(int h,int w)
    {
        int peri;
        peri = 2 * (h + w);
        cout << "Perimeter = " << peri << "\n";
    }
};
int main()
{
    int h,w;
    rectangle r;
    cout << "Enter length of rectangle ";
    cin >> h ;
    cout << "Enter breadth of rectangle ";
    cin >> w ;
    r.getarea(h,w);
    r.getperimeter(h,w);

return 0;
}
