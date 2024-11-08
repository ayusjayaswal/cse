#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 0; i < N; ++i)


class BigNumber {
private:
    vector<int> digits;
    bool is_negative;

    void removeLeadingZeros() {
        while (digits.size() > 1 && digits.back() == 0) {
            digits.pop_back();
        }
    }

public:
    // Constructor from string
    BigNumber(string num) {
        is_negative = (num[0] == '-');
        for (int i = num.size() - 1; i >= (is_negative ? 1 : 0); --i) {
            digits.push_back(num[i] - '0');
        }
        removeLeadingZeros();
    }

    // Constructor from vector
    BigNumber(vector<int> vec, bool negative = false) {
        digits = vec;
        is_negative = negative;
        removeLeadingZeros();
    }

    // Default constructor
    BigNumber() : is_negative(false) {}

    // Addition
    static BigNumber addition(const BigNumber &a, const BigNumber &b) {
        if (a.is_negative == b.is_negative) {
            vector<int> result;
            int carry = 0, sum = 0;
            for (size_t i = 0; i < max(a.digits.size(), b.digits.size()) || carry; ++i) {
                sum = carry;
                if (i < a.digits.size()) sum += a.digits[i];
                if (i < b.digits.size()) sum += b.digits[i];
                result.push_back(sum % 10);
                carry = sum / 10;
            }
            return BigNumber(result, a.is_negative);
        } else {
            return a.is_negative ? subtraction(b, -a) : subtraction(a, -b);
        }
    }

    // Subtraction
    static BigNumber subtraction(const BigNumber &a, const BigNumber &b) {
        if (a.is_negative == b.is_negative) {
            if (a.abs() >= b.abs()) {
                vector<int> result;
                int carry = 0, diff = 0;
                for (size_t i = 0; i < a.digits.size() || carry; ++i) {
                    diff = a.digits[i] - carry - (i < b.digits.size() ? b.digits[i] : 0);
                    carry = diff < 0;
                    if (carry) diff += 10;
                    result.push_back(diff);
                }
                return BigNumber(result, a.is_negative);
            } else {
                return -subtraction(b, a);
            }
        } else {
            return addition(a, -b);
        }
    }

    // Multiplication
    static BigNumber multiplication(const BigNumber &a, const BigNumber &b) {
        vector<int> result(a.digits.size() + b.digits.size(), 0);
        for (size_t i = 0; i < a.digits.size(); ++i) {
            int carry = 0;
            for (size_t j = 0; j < b.digits.size() || carry; ++j) {
                long long current = result[i + j] +
                    a.digits[i] * 1LL * (j < b.digits.size() ? b.digits[j] : 0) + carry;
                result[i + j] = current % 10;
                carry = current / 10;
            }
        }
        return BigNumber(result, a.is_negative != b.is_negative);
    }

    // Division (integer division)
    static pair<BigNumber, BigNumber> division(const BigNumber &a, const BigNumber &b) {
        if (b == BigNumber("0")) {
            throw runtime_error("Division by zero!");
        }
        BigNumber quotient("0"), remainder("0");
        BigNumber dividend = a.abs(), divisor = b.abs();
        for (int i = dividend.digits.size() - 1; i >= 0; --i) {
            remainder = multiplication(remainder, BigNumber("10")).addition(remainder, BigNumber(to_string(dividend.digits[i])));
            int count = 0;
            while (remainder >= divisor) {
                remainder = subtraction(remainder, divisor);
                ++count;
            }
            quotient = multiplication(quotient, BigNumber("10")).addition(quotient, BigNumber(to_string(count)));
        }
        quotient.is_negative = a.is_negative != b.is_negative;
        quotient.removeLeadingZeros();
        remainder.is_negative = a.is_negative;
        remainder.removeLeadingZeros();
        return {quotient, remainder};
    }

    // Comparison operators
    bool operator==(const BigNumber &other) const {
        return digits == other.digits && is_negative == other.is_negative;
    }

    bool operator<(const BigNumber &other) const {
        if (is_negative != other.is_negative) {
            return is_negative;
        }
        if (digits.size() != other.digits.size()) {
            return digits.size() < other.digits.size() ^ is_negative;
        }
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] != other.digits[i]) {
                return digits[i] < other.digits[i] ^ is_negative;
            }
        }
        return false;
    }

    bool operator>(const BigNumber &other) const {
        return other < *this;
    }

    bool operator<=(const BigNumber &other) const {
        return !(*this > other);
    }

    bool operator>=(const BigNumber &other) const {
        return !(*this < other);
    }

    BigNumber operator-() const {
        return BigNumber(digits, !is_negative);
    }

    BigNumber abs() const {
        return BigNumber(digits, false);
    }

    friend ostream& operator<<(ostream &os, const BigNumber &num) {
        if (num.is_negative && !(num.digits.size() == 1 && num.digits[0] == 0)) {
            os << '-';
        }
        for (int i = num.digits.size() - 1; i >= 0; --i) {
            os << num.digits[i];
        }
        return os;
    }
};



void solve(){
  int n;
  cin >> n;
  vector<int> num;
  fi(i, n){
    char t;
    cin >> t;
    num.push_back(t-'0');
  }


  
}

int main(){
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifdef ONLINE_JUDGE
  std::cerr.rdbuf(nullptr);
#endif
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
