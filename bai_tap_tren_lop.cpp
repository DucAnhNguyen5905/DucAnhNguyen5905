#include <iostream>

using namespace std;
void doi_gia_tri(int*x, int*y) {
	int temp = *x;
	*x = *y;
	*y = temp;
	}
int main () {
	int so_thu_nhat = 10;
	int so_thu_hai = 20;
	
	doi_gia_tri(&so_thu_nhat, &so_thu_hai);
	
	cout << "Sau khi thay doi gia tri: " << so_thu_nhat << so_thu_hai << endl;
	
	return 0;
	}
