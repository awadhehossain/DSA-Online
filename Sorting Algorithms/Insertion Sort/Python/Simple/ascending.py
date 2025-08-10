def insertion_sort(arr):
    for i in range(1, len(arr)):
        unsorted = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > unsorted:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = unsorted
    return arr

#Taking input for list size
n=int(input("Enter the size of the list:"))
nums=[] #Decleare the list 
print(f"Enter {n} numbers:")#Taking list input
for _ in range(n):#_ don't care variable
    num=int(input())
    nums.append(num) #In append mode take one input and add it one by one to the list

sorted_nums = insertion_sort(nums)#Method call
print("Sorted list:", sorted_nums)#Printing the sorted list


