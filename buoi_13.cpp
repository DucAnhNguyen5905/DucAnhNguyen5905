#include <iostream>

using namespace std;

class Shape {
public:
	virtual int tinh_dien_tich() = 0;
	void setWidth(int w) {
		chieu_rong = w;
		}
	void setHeight(int h) {
		chieu_cao = h;
		}
protected :
	int chieu_rong;
	int chieu_cao;
	};
	
class Rectangle: public Shape {
	public:
		int tinh_dien_tich () {
			return (chieu_rong * chieu_cao);
			}
			};
class Triangle: public Shape {
	public:
		int tinh_dien_tich() {
			return (chieu_rong * chieu_cao) /2;
			}
			};
int main (void) {
	Rectangle rec;
	Triangle tri;
	
	rec.setHeight(20);
	rec.setWidth(7);
	
	cout << "Dien tich hinh chu nhat: " << rec.tinh_dien_tich() << endl;
	
	tri.setHeight(10);
	tri.setWidth(5);
	
	cout << "Dien tich hinh tam giac: " << tri.tinh_dien_tich() << endl;
	return 0;
	}
