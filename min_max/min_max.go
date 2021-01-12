package main

import "fmt"

func abs(a int) int {
	if a < 0 {
		return -a
	}

	return a
}

func Min(a int, b int) uint {
	return uint(a + b - abs(a-b))
}
func Max(a int, b int) uint {
	return uint(a + b + abs(a-b))
}

func main() {
	fmt.Println("Min of", 135, 209, "is", Min(135, 209))
	fmt.Println("Max of", 178, 179, "is", Max(178, 179))
}
