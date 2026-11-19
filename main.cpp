#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// Task 6

// long long powerofTwo(long long n) {
//     long long p = 1;
//     for (int i=1; i<=n; i++) {
//         p = p*2;
//     }
//     return p;
// }
// void printLuck(int k) {
//     int count =0, a=0;
//     string br="";
//     while (0<k) {
//         a+=powerofTwo(count);
//         count++;
//         k-=powerofTwo(count);
//     }
//     a+=k;
//     br.resize(count);
//     for (int i=1; i<=count; i++) {
//         if (a%2==0) {
//             br[count-i]='4';
//         }
//         else {
//             br[count-i]='7';
//             a-=1;
//         }
//         a/=2;
//     }
//     cout<<br;
// }
// int main() {
//     int k;
//     cin>>k;
// printLuck(k);
// }

// Task 7


// static int integerReplacement(long long n) {
//     int counter = 0;
//     while (n!=1) {
//         if (n==3) {
//             n--;
//             counter++;
//             continue;
//         }
//         if (n%2==0) {
//             n/=2;
//         }
//         else {
//             if ((n+1)%4==0) {
//                 n++;
//             }
//             else {
//                 n--;
//             }
//         }
//         counter++;
//     }
//     return counter;
// }
// int main() {
//     int k;
//     cin >> k;
//     cout << integerReplacement(k);
// }



