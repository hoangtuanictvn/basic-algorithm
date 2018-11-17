package main

import "fmt"
import sort "../sorts"

func main() {
	println("Hi golang! I am Hoang Tuan")
	var array []int
	var i int
	for {
		fmt.Print("Input i:")
		fmt.Scanf("%d", &i)
		if i == -1 {
			break
		}
		array = append(array, i)
	}
	fmt.Print(sort.SelectSort(array))
}
