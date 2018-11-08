package bubble_sort

func swap(i *int, j *int) {
	tmp := *i
	*i = *j
	*j = tmp
}

func BubbleSort(array []int) []int {
	/*
	 * Compare two adjacent pairs and swaps them
	 * if they are in the wrong order
	 */
	for i := len(array); i > 2; i-- {
		for j := 0; j < i-1; j++ {
			if array[j] > array[j+1] {
				swap(&array[j], &array[j+1])
			}
		}
	}
	return array
}
