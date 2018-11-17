package array_utils

func Swap(i *int, j *int) {
	tmp := *i
	*i = *j
	*j = tmp
}
