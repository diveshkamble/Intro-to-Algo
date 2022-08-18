class InsertionSort {
	public static void main(String [] args) {
		int key, j = 0;;
		int a[] = {4, 1, 2, 9, 8, 5, 7, 6, 3};
		System.out.println("Array Before Insertion Sort:");
		for (int l = 0; l < a.length; l++) {
			System.out.print(a[l] + " ");
		}
		System.out.println("");
		for (int i = 1; i < a.length; i++) {
			key = a[i];
			j = i - 1;
			while (j >= 0 && a[j] > key) {
				a[j + 1] = a[j];
				j = j - 1;
			}
			a[j + 1] = key;
		}

		System.out.println("Array After Insertion Sort: ");
		for (int l = 0; l < a.length; l++) {
			System.out.print(a[l] + " ");
		}
	}
}