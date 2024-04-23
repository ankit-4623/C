long long numberOfSubarrays(int* a, int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        int maxele = a[i];
        for (int j = i; j<n; j++) {
            maxele = (a[j]>maxele) ? a[j]:maxele;
            if (a[i] == maxele&&a[j]==maxele) {
                count++;
            }
        }
    }
    return count;
}
