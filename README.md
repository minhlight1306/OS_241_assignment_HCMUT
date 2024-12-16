<div align="center">
VIETNAM NATIONAL UNIVERSITY, HO CHI MINH CITY
<br />
UNIVERSITY OF TECHNOLOGY
<br />
FACULTY OF COMPUTER SCIENCE AND ENGINEERING
<br />
<br />

[![N|Solid](https://upload.wikimedia.org/wikipedia/commons/thumb/d/de/HCMUT_official_logo.png/238px-HCMUT_official_logo.png)](https://www.hcmut.edu.vn/vi)
<br />
<br />
<img src="https://img.shields.io/github/stars/minhlight1306/OS_241_assignment_HCMUT?color=white&logo=github">&emsp;<img src="https://img.shields.io/github/last-commit/minhlight1306/OS_241_assignment_HCMUT?color=blue">
<br />
<img src="https://img.shields.io/github/languages/top/minhlight1306/OS_241_assignment_HCMUT?color=yellow&logo=c&logoColor=yellow">&emsp;<img src="https://img.shields.io/github/repo-size/minhlight1306/OS_241_assignment_HCMUT?color=orange&label=size&logo=git&logoColor=orange">
<br />

**Simple Operating System / Semester 241**
<br/>

</div>

# Languages & Tools

<img src="https://img.icons8.com/color/96/000000/c-programming.png" align="center" style="margin-left:10px;margin-bottom:5px;" width=70px/><img src="https://img.icons8.com/color/96/000000/linux--v1.png" align="center" style="margin-left:10px;margin-bottom:5px;" width=70px/>

# OS_241_assignment_HCMUT

## Tiên quyết: Phải được thực thi trên Linux. Nếu máy tính là Window, có thể cân nhắc sử dụng ứng dụng cho phép dùng terminal của Linux
- `Ubuntu` 22.04 LTS
  
## Commands
- `make all`: để compile tất cả các file code
- `./os [tên file input] `: chạy code  

Ví dụ:
make all
./os sched_1


## Cấu trúc của BTL:
```
 ┣ 📂include        # Các file header.
 ┣ 📂input          # Một vài Input có sẵn.
 ┣ 📂obj            # Các Object file dùng cho sau khi make all.
 ┣ 📂output         # Một vài output mẫu.
 ┣ 📂src            # File code.
 ┣ 📂.vscode        # Chứa file .json của VSCode, không ảnh hưởng tới bài tập lớn này.
 ┣ 📜Makefile       # File để compile toàn bộ code.
 ┣ 📜os             # File thực thi sau khi được tạo ra bởi lệnh "make all"
```

