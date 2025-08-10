def bubble_sort(nums) : #bubble sort Method

    for i in range(0,len(nums)-1):
        for j in range(len(nums)-i-1):
            if nums[j]<nums[j+1]:
                nums[j],nums[j+1]=nums[j+1],nums[j] #Swaping
    return nums #returning the list 

#Taking input for list size
n=int(input("Enter the size of the list:"))
nums=[] #Decleare the list 
print(f"Enter {n} numbers:")# f string
#Taking list input 
for _ in range(n):#_ don't care variable
    num=int(input())
    nums.append(num) #In append mode take one input and add it one by one to the list

sorted_nums = bubble_sort(nums)#Method call
print("Sorted list:", sorted_nums)#Printing the sorted list



   




