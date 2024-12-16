# OS_241_assignment_HCMUT
# Simple Operating System

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
