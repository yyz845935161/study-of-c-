#include<bits/stdc++.h>
using namespace std;
int n, k, num, sum, cnt[4];
long long ans;
int main() {
	cin>>n>>k;
	for(int i = 0; i < n; i++) {
		cin>>num;
		sum = (sum+num) % k;
		ans += cnt[sum]++;
	}
	cout<<ans + cnt[0]<<endl;
}
