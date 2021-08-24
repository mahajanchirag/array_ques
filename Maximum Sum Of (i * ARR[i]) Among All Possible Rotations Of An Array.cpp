long long maxmValueAmongAllRotations(vector < int > &arr, int n) {

	long long originalArraySum = 0;
	long long originalIArrProd = 0;
	for (int i = 0; i < n; i++) {
		originalArraySum += arr[i];
		originalIArrProd += (1LL * i * arr[i]);
	}

	long long soln = originalIArrProd;

	// j = number of rotations on original array on left side.
	for (int j = 1; j < n; j++) {
		originalIArrProd = originalIArrProd - originalArraySum + (1LL * n * arr[j - 1]);
		soln = max(soln, originalIArrProd);
	}

	return soln;
}
