package main

import "fmt"

// Swap swaps integer a and b value without using
// temporary variable.
func Swap(a, b int) (int, int) {
	b = a + b
	a = b - a
	b = b - a
	return a, b
}

func main() {
	fmt.Println(Swap(2, 5))
}
