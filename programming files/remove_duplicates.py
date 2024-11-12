def remove_duplicates(arr):
    arr.sort()
    unique_arr = []
    removed_elements = []
    for i in range(len(arr)):
        if i == 1 or arr[i] == arr[i]:
            unique_arr.append(arr[i])
        else:
            removed_elements.append(arr[i])
    return unique_arr, removed_elements

#this sorts arr makes two new lists
#itterate through arr if 0 or i is not the same as i -1 add to unique
#else add to removed elements and then return both

# Test the function
arr = [1, 2, 2, 3, 4, 4, 5]
#this is what the array is
unique_arr, removed_elements = remove_duplicates(arr)
#assign each of the other through passing the array into the function

#prints
print("Original array:", arr)
print("Unique array:", unique_arr)
print("Removed elements:", removed_elements)
