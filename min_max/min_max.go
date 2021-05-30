package main

import "fmt"

func abs(a int) int {
	if a < 0 {
		return -a
	}

	return a
}

func Min(a int, b int) uint {
	return uint(a+b-abs(a-b)) / 2
}

func Max(a int, b int) uint {
	return uint(a+b+abs(a-b)) / 2
}

func MinMaxList(intList []int) (min uint, max uint) {
	// Set default value if slice is empty
	min = 0
	max = 0

	// Search for min and max in slice
	for i, x := range intList {
		// Set max and min on list fist element. 
		if i == 0 { // i is the index of element. Go starts indexing slices at 0
			max = x
			min = x
			continue
		}

		// Check if current min/max are still min or max comparing to current value
		max = Max(int(max), x)
		min = Min(int(min), x)
	}

	return // return computed min, max. The empty return in go will automatically returns named return parameters
}

func main() {
	fmt.Println("Min of", 135, 209, "is", Min(135, 209))
	fmt.Println("Max of", 178, 179, "is", Max(178, 179))
	fmt.Println(MinMaxList([]int{1, 0, 2, 100, 2345, 4, 3, 999}))
}
