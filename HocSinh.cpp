#include "HocSinh.h"
#include <iostream>
using namespace std;

void HocSinh::nhap() {
    cin.ignore();
    cout << "Nhập tên học sinh: ";
    getline(cin, ten);
    cout << "Nhập tuổi: ";
    cin >> tuoi;
    cin.ignore();
    cout << "Nhập giới tính: ";
    getline(cin, gioiTinh);
    cout << "Nhập mã học sinh: ";
    getline(cin, maHocSinh);
    cout << "Nhập khoa: ";
    getline(cin, khoa);
}

void HocSinh::hienThi() {
    cout << "Tên: " << ten << "\nTuổi: " << tuoi << "\nGiới tính: " << gioiTinh
             << "\nMã học sinh: " << maHocSinh << "\nKhoa: " << khoa
             << endl;
}
