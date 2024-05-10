#include <iostream>
#include <cmath>

using namespace std;
/*
// Bai 1
int main() 

{
    float so_thu_nhat, so_thu_hai;
    cout << "Nhap so thu nhat: " << endl;
    cin >> so_thu_nhat;
	cout << "Nhap so thu hai: " << endl;
    cin >> so_thu_hai;
    float tong = so_thu_nhat + so_thu_hai;
    cout << "Tong: " << tong << endl;
    float tich = so_thu_nhat * so_thu_hai;
    cout << "Tich cua hai so la: " << tich << endl;
    float hieu = so_thu_nhat - so_thu_hai;
    cout << "Hieu cua hai so la: " << hieu << endl;
    
    return 0;
}
*/
/*
// Bai 2

int main ()
{
	double he_so_1, he_so_2, he_so_3;
	
	cout << "nhap he so 1: " << endl;
	cin >> he_so_1;
	cout << "nhap he so 2: " << endl;
	cin >> he_so_2;
	cout << "nhap he so 3: " << endl;
	cin >> he_so_3;
	
	double ket_qua = pow(he_so_2,2) - 4 * he_so_1 * he_so_3;
	if (he_so_1 && he_so_2 != 0)
	{ 
	cout << ket_qua << endl; 
	}
	else {
		cout << "Gia tri cua he so 1 va he so 2 phai khac 0 !" << endl; 
		}
	
	return 0;
	}
*/
/*
//Bai 3
int main()

{
	double nhiet_do_C;
	cout << "Nhap nhiet do C: " << endl;
	cin >> nhiet_do_C;
	double nhiet_do_K = nhiet_do_C + 273;
	double nhiet_do_F = nhiet_do_C * 18/10 + 32;

	cout << "Nhiet do K la: " << nhiet_do_K << endl;
	cout << "Nhiet do F la: " << nhiet_do_F << endl;
	
	return 0;
}
*/
/*
//Bai 4
int main () {
	int so_can_tinh_giai_thua, giai_thua = 1;
	cout << "Nhap mot so nguyen duong de tinh giai thua: ";
	cin >> so_can_tinh_giai_thua;
	
	for (int i = 1; i <= so_can_tinh_giai_thua; i++){
		giai_thua *= i;
		}
		cout << "giai thua cua so tren la: " << giai_thua << endl;
		
		return 0;
		}
*/
/*
//Bai 7

int main() {
	int so_can_check;
	cout << "Nhap so can kiem tra: ";
	cin >> so_can_check;
	if (so_can_check < 2) {
		cout << "So can kiem tra phai < 2! ";
		}
	
	bool so_nguyen_to = true;
	for (int i = 2; i < so_can_check; i++) {
		if (so_can_check % i == 0) {
			so_nguyen_to = false;
			break; }
			}
	if (so_nguyen_to == true)
		cout << so_can_check << " la so nguyen to" << endl;
		else
			cout << so_can_check << " khong la so nguyen to" << endl;
		return 0;
	}
			
	*/
	/*
	//Bai 6
int main (){
	int so_can_check;
	cout << "nhap so can kiem tra: " << endl;
	cin >> so_can_check;
	if (so_can_check == 0) {
		cout << "so can kiem tra phai khac 0! " << endl; }
		else if (so_can_check % 2 == 0) {
		cout << so_can_check << " la mot so chan" << endl; }
		else {
			cout << so_can_check << " la mot so le" << endl; }
			return 0;
	}
	*/
	
	//Bai 5
int main() {
    int so_can_check;
    cout << "nhap so can kiem tra: ";
    cin >> so_can_check;

    cout << "Cac so nguyen to < " << so_can_check << " la: ";
    for (int i = 2; i < so_can_check; i++) {
        bool so_nguyen_to = true;
        for (int k = 2; k * k <= i; k++) {
            if (i % k == 0) {
                so_nguyen_to = false;
                break;
            }
        }
        if (so_nguyen_to == true) {
            cout << i << " ";
        }
    }

    return 0;
}

		
				
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	

	
