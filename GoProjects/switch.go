package main

import (
	"fmt"
	"time"
)

func main() {
	i := 2
	fmt.Println("Write ", i, " as ")
	switch i {
	case 1:
		fmt.Println("One")
	case 2:
		fmt.Println("two")
	case 3:
		fmt.Println("three")
	}

	switch time.Now().Weekday() {
	case time.Saturday, time.Sunday:
		fmt.Println("Its the Weekend")
	default:
		fmt.Println("Its a Weeday")
	}

	t := time.Now()
	switch {
	case t.Hour() < 12:
		fmt.Println("Its before noon")
	default:
		fmt.Println("Its After Noon")
	}

	whatAmI := func(i interface{}) {
		switch t := i.(type) {
		case bool:
			fmt.Println("I'm Boolean")
		case int:
			fmt.Println("Im Integer")
		default:
			fmt.Println("Don't know type %t\n", t)
		}
	}
	whatAmI(true)
	whatAmI(1)
	whatAmI("hey")
}