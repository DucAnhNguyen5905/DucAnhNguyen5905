#include <iostream>
#include <string>
#include <limits>
#include <ctime>
#include <vector>
#include <cstdio>

using namespace std;

struct Employee {
    int id;
    string ten;
    string ngay_vao_cong_ty;
    float salary = he_so_luong * luong_co_ban;
    int he_so_luong;
    int luong_co_ban;
};

Employee nhap_thong_tin() {
    Employee thong_tin;
    cout << "Nhap ma nhan vien: ";
    cin >> thong_tin.id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nhap ten nhan vien: ";
    getline(cin, thong_tin.ten);
    cout << "Nhap ngay vao cong ty (dd/mm/yyyy): ";
    getline(cin, thong_tin.ngay_vao_cong_ty);
    cout << "Nhap he so luong: ";
    cin >> thong_tin.he_so_luong;
    cout << "Nhap luong co ban:";
    cin >> thong_tin.luong_co_ban;
    thong_tin.salary = thong_tin.he_so_luong * thong_tin.luong_co_ban; 
    cout << "Tien luong cua nhan vien " << thong_tin.ten << " la:" << thong_tin.salary << " trieu dong";
    return thong_tin;
}

void hien_thi_danh_sach(const Employee& thong_tin, vector<string>& nhan_vien_thuong) {
    cout << "Ma nhan vien: " << thong_tin.id << endl;
    cout << "Ten nhan vien: " << thong_tin.ten << endl;
    cout << "Ngay vao cong ty: " << thong_tin.ngay_vao_cong_ty << endl;
    cout << "Tien luong: " << thong_tin.salary << " trieu dong" << endl;

    time_t now = time(0);
    tm* now_tm = localtime(&now);

    int nam_vao_lam, thang_vao_lam, ngay_vao_lam;
    sscanf(thong_tin.ngay_vao_cong_ty.c_str(), "%d/%d/%d", &ngay_vao_lam, &thang_vao_lam, &nam_vao_lam);

    int so_nam_lam_viec = now_tm->tm_year + 1900 - nam_vao_lam;

    if (so_nam_lam_viec > 10) {
        cout << "Nhan vien nay duoc thuong vi co thoi gian lam viec tren 10 nam." << endl;
        nhan_vien_thuong.push_back(thong_tin.ten);
    }
}

int main() {
    Employee employees[100];
    int choice;
    int so_luong_nv = 0;
    vector<string> nhan_vien_thuong;

    do {
        cout << "\nMENU\n";
        cout << "1. Nhap danh sach nhan vien\n";
        cout << "2. Hien thi danh sach nhan vien\n";
        cout << "3. Hien thi danh sach nhan vien duoc thuong\n";
        cout << "0. Thoat\n";
        cout << "Lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Nhap so luong nhan vien: ";
                cin >> so_luong_nv;
                for (int i = 0; i < so_luong_nv;i++) {
                    cout << "\nNhap thong tin cho nhan vien " << i + 1 << ":\n";
                    employees[i] = nhap_thong_tin();
                }
                break;
            }
            case 2: {
                cout << "\nDanh sach nhan vien:\n";
                for (int i = 0; i < so_luong_nv; i++) {
                    const Employee &thong_tin = employees[i];
                    hien_thi_danh_sach(thong_tin, nhan_vien_thuong);
                    cout << endl;
                }
                break;
            }
            case 3: {
                cout << "\nDanh sach nhan vien duoc thuong:\n";
                for (size_t i = 0; i < nhan_vien_thuong.size();i++) {
                    cout << nhan_vien_thuong[i] << endl;
                }

                FILE* file = fopen("buoi_8.txt", "a");
                if (file != NULL) {
                    for (size_t i = 0; i < nhan_vien_thuong.size();i++) {
                        fputs(nhan_vien_thuong[i].c_str(), file);
                        fputs("\n", file);
                    }
                    fclose(file);
                } else {
                    cout << "Khong the mo file.\n";
                }

                break;
            }
            case 0:
                cout << "Ket thuc chuong trinh.\n";
                break;
            default:
                cout << "Lua chon khong hop le. Vui long thu lai.\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (choice != 0);

    return 0;
}

