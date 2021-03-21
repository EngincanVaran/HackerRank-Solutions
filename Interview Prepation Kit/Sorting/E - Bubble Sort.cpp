void countSwaps(vector<int> a) {
    int n = a.size();
    int countSwaps = 0;

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                countSwaps++;
            }
        }
    }

    cout << "Array is sorted in " << countSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[a.size()-1] << endl;
    

}