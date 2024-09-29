#include "GiaoVien.h"
#include <iostream>
using namespace std;

void GiaoVien::nhap()
{
    cin.ignore();
    cout << "Nhập tên giáo viên: ";
    getline(cin, ten);
    cout << "Nhập tuổi: ";
    cin >> tuoi;
    cin.ignore();
    cout << "Nhập giới tính: ";
    getline(cin, gioiTinh);
    cout << "Nhập mã giáo viên: ";
    getline(cin, maGiaoVien);
    cout << "Nhập chức danh: ";
    getline(cin, chucDanh);
    cout << "Nhập khoa: ";
    getline(cin, khoa);
}

void GiaoVien::hienThi()
{
    cout << "Tên: " << ten << "\nTuổi: " << tuoi << "\nGiới tính: " << gioiTinh
         << "\nMã giáo viên: " << maGiaoVien << "\nChức danh: " << chucDanh
         << "\nKhoa: " << khoa << endl;
}
