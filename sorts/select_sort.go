package sort

import utils "../utils"

/*
 * Selection sort
 * First: Select first find the smallest element in array and swap it to first element
 * Next: Loop from first element to end of array and exchange with next element of
 * previous loop if it is small lest otherwise continue to loop
 * Time used: Use ~N^2/2 compare from two loop and N exchange for N element array
 * Proof: ~N^2/2
 */
func SelectSort(array []int) []int {
	for i := 0; i < len(array); i++ {
		min := array[i]
		pos := i
		for j := i + 1; j < len(array); j++ {
			if array[j] < min {
				min = array[j]
				pos = j
			}
		}
		utils.Swap(&array[i], &array[pos])
	}

	return array
}
