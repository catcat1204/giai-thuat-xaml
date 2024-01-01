#include <bits/stdc++.h>
using namespace std;

bool check(int countA[], int countB[]) {
    for (int i = 0; i < 256; i++)
        if (countA[i] != countB[i])
            return false;
    return true;
}

int solve(string A, string B) {
    int countA[256] = {0}, countB[256] = {0};
    for (int i = 0; i < A.size(); i++) {
        countA[A[i]]++;
        countB[B[i]]++;
    }

    int res = 0;
    for (int i = A.size(); i < B.size(); i++) {
        if (check(countA, countB))
            res++;

        countB[B[i]]++;
        countB[B[i - A.size()]]--;
    }

    if (check(countA, countB))
        res++;

    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    string A, B;
    cin >> A >> B;
    cout << solve(A, B);
    return 0;
}

/*
Thuật toán này dựa trên ý tưởng về "sliding window" và đếm số lượng các ký tự.

1. Khởi tạo: Tạo hai mảng countA và countB với kích thước 256 (đại diện cho tất cả các ký tự ASCII có thể có) và khởi tạo tất cả các giá trị là 0. Mảng countA sẽ lưu trữ số lượng các ký tự trong chuỗi A, trong khi countB sẽ lưu trữ số lượng các ký tự trong một cửa sổ của chuỗi B có cùng độ dài với A.

2. Đếm ký tự: Duyệt qua chuỗi A và cửa sổ đầu tiên của chuỗi B, tăng giá trị tương ứng trong countA và countB.

3. Duyệt qua chuỗi B: Duyệt qua chuỗi B bắt đầu từ vị trí thứ A.size() đến cuối chuỗi B. Với mỗi vị trí, kiểm tra xem countA và countB có giống nhau không. Nếu giống nhau, tăng biến đếm res. Sau đó, cập nhật countB bằng cách tăng giá trị tương ứng với ký tự hiện tại của B và giảm giá trị tương ứng với ký tự ở vị trí i - A.size() của B.

4. Kiểm tra cuối cùng: Sau khi duyệt qua chuỗi B, kiểm tra một lần nữa xem countA và countB có giống nhau không. Nếu giống nhau, tăng biến đếm res.

5. Trả về kết quả: Trả về giá trị của res, đại diện cho số lần xuất hiện của chuỗi A hoặc hoán vị của A trong chuỗi B.

Độ phức tạp thời gian của thuật toán này là O(n), với n là độ dài của chuỗi B, do chúng ta chỉ duyệt qua chuỗi B một lần.

*/