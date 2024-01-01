#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int base = 311;
const int mod = 1e9+7;
ll POW[50005], hashS[50005], n, k;
string s;

ll get(int i, int j) {
    return (hashS[j] - hashS[i-1]*POW[j-i+1] + mod*mod) % mod;
}

bool check(int mid) {
    unordered_map<ll, int> m;
    for (int i=1; i<=n-mid+1; i++) {
        ll hashValue = get(i, i+mid-1);
        m[hashValue]++;
        if (m[hashValue] >= k) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGTHU.INP", "r", stdin);
    freopen("LONGTHU.OUT", "w", stdout);
    cin >> n >> k;
    cin >> s;
    s = " " + s;
    POW[0] = 1;
    for (int i=1; i<=n; i++) {
        POW[i] = (POW[i-1]*base) % mod;
        hashS[i] = (hashS[i-1]*base + s[i]) % mod;
    }
    int l = 1, r = n, res = 0;
    while (l <= r) {
        int mid = (l+r) >> 1;
        if (check(mid)) {
            res = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    cout << res;
    return 0;
}
/*
Đoạn mã trên sử dụng thuật toán tìm kiếm nhị phân và thuật toán băm chuỗi Rabin-Karp để giải quyết bài toán. Dưới đây là giải thích chi tiết về cách hoạt động của đoạn mã:

1. Đầu tiên, chúng ta khởi tạo một số hằng số như base và mod để sử dụng trong thuật toán băm chuỗi Rabin-Karp.

2. Hàm get(i, j) được sử dụng để tính giá trị băm của chuỗi con từ vị trí i đến j trong chuỗi s.

3. Hàm check(mid) kiểm tra xem có tồn tại chuỗi con nào có độ dài mid xuất hiện ít nhất k lần trong chuỗi s hay không. Để làm điều này, hàm tạo một map m để lưu trữ số lần xuất hiện của mỗi giá trị băm trong chuỗi s. Nếu tìm thấy giá trị băm nào xuất hiện ít nhất k lần, hàm trả về true.

4. Trong hàm main, chúng ta đọc dữ liệu từ file đầu vào, bao gồm số nguyên n và k, và chuỗi s.

5. Tiếp theo, chúng ta tính toán giá trị băm của chuỗi s và lưu trữ nó trong mảng hashS.

6. Sau đó, chúng ta sử dụng thuật toán tìm kiếm nhị phân để tìm độ dài lớn nhất của chuỗi con thỏa mãn yêu cầu. Trong mỗi lần lặp, chúng ta kiểm tra xem có tồn tại chuỗi con nào có độ dài mid xuất hiện ít nhất k lần trong chuỗi s hay không bằng cách gọi hàm check(mid). Nếu tồn tại, chúng ta cập nhật res và tiếp tục tìm kiếm trong nửa phần tử lớn hơn của khoảng tìm kiếm. Nếu không, chúng ta tiếp tục tìm kiếm trong nửa phần tử nhỏ hơn của khoảng tìm kiếm.

7. Cuối cùng, chúng ta in ra độ dài lớn nhất tìm được, tức là res.

*/