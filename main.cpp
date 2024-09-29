#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "HocSinh.h"
#include "GiaoVien.h"
#include "MonHoc.h"

vector<HocSinh> danhSachHocSinh;
vector<GiaoVien> danhSachGiaoVien;
vector<MonHoc> danhSachMonHoc;

void themHocSinh()
{
    HocSinh hocSinh;
    hocSinh.nhap();
    danhSachHocSinh.push_back(hocSinh);
}

void themGiaoVien()
{
    GiaoVien giaoVien;
    giaoVien.nhap();
    danhSachGiaoVien.push_back(giaoVien);
}

void taoMonHoc()
{
    MonHoc monHoc;
    monHoc.nhap();
    danhSachMonHoc.push_back(monHoc);
}

void dangKyHocSinhVaoMonHoc()
{
    string maHocSinh, tenMonHoc;
    cout << "Nhập mã học sinh: ";
    cin >> maHocSinh;
    cout << "Nhập tên môn học: ";
    cin >> tenMonHoc;

    for (auto &monHoc : danhSachMonHoc)
    {
        if (monHoc.tenMonHoc == tenMonHoc)
        {
            monHoc.danhSachHocSinhDangKy.push_back(maHocSinh);
            cout << "Đăng ký học sinh thành công!" << endl;
            return;
        }
    }
    cout << "Không tìm thấy môn học!" << endl;
}

void luuDuLieu()
{
    ofstream tepHocSinh("hoc_sinh.txt"), tepGiaoVien("giao_vien.txt"),
        tepMonHoc("mon_hoc.txt");

    for (const auto &hocSinh : danhSachHocSinh)
    {
        tepHocSinh << hocSinh.ten << " " << hocSinh.tuoi << " " << hocSinh.gioiTinh
                    << " " << hocSinh.maHocSinh << " " << hocSinh.khoa
                    << endl;
    }
    for (const auto &giaoVien : danhSachGiaoVien)
    {
        tepGiaoVien << giaoVien.ten << " " << giaoVien.tuoi << " " << giaoVien.gioiTinh
                    << " " << giaoVien.maGiaoVien << " " << giaoVien.chucDanh << " "
                    << giaoVien.khoa << endl;
    }
    for (const auto &monHoc : danhSachMonHoc)
    {
        tepMonHoc << monHoc.tenMonHoc << " " << monHoc.maGiaoVien << " ";
        for (const auto &hocSinh : monHoc.danhSachHocSinhDangKy)
        {
            tepMonHoc << hocSinh << " ";
        }
        tepMonHoc << endl;
    }

    cout << "Lưu dữ liệu thành công!" << endl;
}

void taiDuLieu()
{
    ifstream tepHocSinh("hoc_sinh.txt"), tepGiaoVien("giao_vien.txt"),
        tepMonHoc("mon_hoc.txt");
    HocSinh hocSinh;
    GiaoVien giaoVien;
    MonHoc monHoc;

    while (tepHocSinh >> hocSinh.ten >> hocSinh.tuoi >> hocSinh.gioiTinh >>
           hocSinh.maHocSinh >> hocSinh.khoa)
    {
        danhSachHocSinh.push_back(hocSinh);
    }
    while (tepGiaoVien >> giaoVien.ten >> giaoVien.tuoi >> giaoVien.gioiTinh >>
           giaoVien.maGiaoVien >> giaoVien.chucDanh >> giaoVien.khoa)
    {
        danhSachGiaoVien.push_back(giaoVien);
    }
    while (tepMonHoc >> monHoc.tenMonHoc >> monHoc.maGiaoVien)
    {
        string maHocSinh;
        while (tepMonHoc >> maHocSinh)
        {
            monHoc.danhSachHocSinhDangKy.push_back(maHocSinh);
        }
        danhSachMonHoc.push_back(monHoc);
    }

    cout << "Tải dữ liệu thành công!" << endl;
}

int main()
{
    int luaChon;
    taiDuLieu();

    do
    {
        cout << "\n1. Thêm học sinh\n2. Thêm giáo viên\n3. Tạo môn học\n4. Đăng ký học sinh vào môn học\n5. Lưu dữ liệu\n6. Thoát\n";
        cout << "Nhập lựa chọn: ";
        cin >> luaChon;

        switch (luaChon)
        {
        case 1:
            themHocSinh();
            break;
        case 2:
            themGiaoVien();
            break;
        case 3:
            taoMonHoc();
            break;
        case 4:
            dangKyHocSinhVaoMonHoc();
            break;
        case 5:
            luuDuLieu();
            break;
        case 6:
            break;
        default:
            cout << "Lựa chọn không hợp lệ!" << endl;
        }
    } while (luaChon != 6);

    return 0;
}