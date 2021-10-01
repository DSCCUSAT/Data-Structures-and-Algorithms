import timeit

# Reverse an array using Python Slicing technique
def reverse_slicing(arr):
    rev_arr = arr[::-1]
    return rev_arr

# Reverse an array using the builtin reverse function
def reverse_builtin(arr):
    # W/ the builtin function, we reverse the contents of the array in-place
    arr.reverse()
    return arr


if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5]
    rev_arr_slice = reverse_slicing(arr)
    print("Original array: {}".format(arr))
    print("Reversed array using slicing: {}".format(rev_arr_slice))
    t = timeit.Timer(lambda: reverse_slicing(arr))
    print("Time the function takes to complete: {}".format(t.timeit(1)))
    print("**********************")
    rev_arr_builtin = reverse_builtin(arr)
    print("Original array: {}".format(arr))
    print("Reversed array using builtin reverse: {}".format(rev_arr_builtin))
    t = timeit.Timer(lambda: reverse_builtin(arr))
    print("Time the function takes to complete: {}".format(t.timeit(1)))
