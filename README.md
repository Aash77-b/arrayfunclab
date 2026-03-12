# Array Operations Program

A simple C++ program that performs basic operations on arrays: finding the maximum element and searching for a specific element.

## Description

This program allows users to:
1. **Find the maximum** element in an array
2. **Search for a specific element** and find its index(es) in the array

The user can input an array of integers and choose which operation to perform.

## How It Works

1. The user selects an operation from the menu:
   - Option 1: Find the maximum value in the array
   - Option 2: Search for a specific element in the array

2. The user enters the number of elements and the array elements

3. The program performs the selected operation and displays the result

##Code Structure

### Functions

| Function | Description | Parameters |
|----------|-------------|------------|
| `choose()` | Takes user input for array size and elements | `int &n` (size), `int arr[]` (array) |
| `findmax()` | Finds and returns the maximum element | `int arr[]`, `int &n` (size) |
| `searchx()` | Searches for an element and displays its indices | `int arr[]`, `int n` (size) |


##Example Usage

```
What do you want to do?   
1) find max 
2) search x 1

Enter n:5
Enter 5 elements: 10 25 5 30 15
your array looks like {10 25 5 30 15 }
the maximum number in your array is :30
```

```
What do you want to do?   
1) find max 
2) search x 2

Enter n:5
Enter 5 elements: 10 25 5 30 15
Enter the element you want to search for: 25
the index of 25 is 1
```

##Important Notes

- The array can hold a maximum of 100 elements
- All elements must be integers
- If searching for an element that appears multiple times, all indices will be displayed
- If the element is not found, a "not found" message will appear

## 🐛 Known Limitations

- The search function currently only checks up to the index equal to the search value (bug)
- The findmax function prints intermediate values during execution
- Array size is fixed at compile time

##  File Structure

```
array-operations/
│
├── array_operations.cpp    # Main source code
├── README.md               # This file
└── LICENSE                 # MIT License
```

## Future Improvements

- [ ] Fix search function to check entire array
- [ ] Remove debug output from findmax function
- [ ] Add input validation
- [ ] Implement dynamic array sizing
- [ ] Add more array operations (sorting, averaging, etc.)

## License

This project is open source and available under the [MIT License](LICENSE).

##Contributing

Feel free to fork this repository and submit pull requests with improvements!

---

**Note**: This program was created as a learning exercise for C++ array operations and function implementation.
