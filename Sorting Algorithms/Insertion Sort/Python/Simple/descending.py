def insertion_sort(arr):
    for i in range(1, len(arr)):
        unsorted = arr[i]
        while i > 0 and arr[i-1] > unsorted:
            arr[i],arr[i-1]=arr[i-1],arr[i]
            i=i-1      
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


