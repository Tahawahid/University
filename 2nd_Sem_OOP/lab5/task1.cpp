#include <iostream>
using std::cin;
using std::cout;

class volume
{
private:
    float *length;
    float width;
    float height;

public:
    volume()
    {
    }
    volume(float l, float w, float h)
    {
        length = new float;
        *length = l;
        width = w;
        height = h;
    }
    volume(const volume &obj)
    {
        length = new float;

        height = obj.height;
        width = obj.width;
        *length = *obj.length;
    }
    void setLength(float l)
    {
        *length = l;
    }
    void setWidth(float w)
    {
        width = w;
    }
    void setHeight(float h)
    {
        height = h;
    }
    float getWidth() const
    {
        return width;
    }
    float getHeight() const
    {
        return height;
    }
    float getLength() const
    {
        return *length;
    }
    float calcVolume()
    {
        float volume;
        volume = *length * width * height;
        return volume;
    }
};

int main()
{
    volume v1(12.5, 23.3, 19.9), v2(v1);
    cout << "\nThe length of volume 1: " << v1.getLength();
    cout << "\nThe length of volume 1: " << v1.getWidth();
    cout << "\nThe length of volume 1: " << v1.getHeight();
    cout << "\nThe length of volume 2: " << v2.getLength();
    cout << "\nThe length of volume 2: " << v2.getWidth();
    cout << "\nThe length of volume 2: " << v2.getHeight();
    cout << "\nThe volume of Volume-1: " << v1.calcVolume();
    cout << "\nThe volume of Volume-2: " << v2.calcVolume();
    v1.setHeight(25.3f);
    v1.setHeight(32.4f);
    v1.setHeight(14.9f);
    cout << "\nThe volume of Volume-1(changed)  : " << v1.calcVolume();
    cout << "\nThe volume of Volume-2(unchanges): " << v2.calcVolume();
}