#include <iostream>
using namespace std;
typedef long long ll;

// Fast exponentiation: (base^exp) % mod
ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// Euler's Totient Function φ(n)
ll phi(ll n) {
    ll result = n;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

// Recursively calculates power tower modulo mod
ll power_tower(ll *arr, int n, ll mod) {
    if (n == 1) return arr[0] % mod;
    ll next_mod = phi(mod);
    ll exp = power_tower(arr + 1, n - 1, next_mod);
    return mod_pow(arr[0], exp + next_mod, mod); // +next_mod ensures correctness
}

int main() {
    int choice;
    cout << "Select Calculator:\n";
    cout << "1. Power Tower Calculator (a^(b^(c^...)) % g)\n";
    cout << "2. Product Exponent Calculator (a^(b * c * ...) % z)\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int n;
            cout << "\nEnter number of elements in power tower (e.g., 6 for a^(b^(c^...))) : ";
            cin >> n;

            ll* arr = new ll[n];
            cout << "Enter the elements a, b, c, ..., from bottom to top:\n";
            for (int i = 0; i < n; ++i) {
                cin >> arr[i];
            }

            ll g;
            cout << "Enter the modulo value (g): ";
            cin >> g;

            ll result = power_tower(arr, n, g);
            cout << "\nResult of a^(b^(c^(...))) % g is: " << result << endl;
            delete[] arr;
            break;
        }

        case 2: {
            int n;
            cout << "\nEnter number of elements in exponent (excluding base): ";
            cin >> n;

            ll a, z;
            cout << "Enter base (a): ";
            cin >> a;

            cout << "Enter modulus (z): ";
            cin >> z;

            cout << "Enter the exponent terms (b, c, d, e...):\n";
            ll exponent = 1;
            for (int i = 0; i < n; ++i) {
                ll x;
                cin >> x;
                exponent *= x;
                // Optional: You may reduce here with φ(z) to prevent overflow
            }

            ll result = mod_pow(a, exponent, z);
            cout << "\nResult of a^(b * c * d * ...) % z is: " << result << endl;
            break;
        }

        default:
            cout << "\nInvalid choice. Please select 1 or 2.\n";
    }

    return 0;
}
