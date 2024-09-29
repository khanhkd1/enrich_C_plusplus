#include "MonHoc.h"
#include <iostream>
using namespace std;

void MonHoc::nhap()
{
    cout << "Nhập tên môn học: ";
    cin >> tenMonHoc;
    cout << "Nhập mã giáo viên: ";
    cin >> maGiaoVien;
}

void MonHoc::hienThi()
{
    cout << "Môn học: " << tenMonHoc << "\nMã giáo viên: " << maGiaoVien
         << "\nDanh sách học sinh đăng ký: ";
    for (const auto &hocSinh : danhSachHocSinhDangKy)
    {
        cout << hocSinh << " ";
    }
    cout << endl;
}
