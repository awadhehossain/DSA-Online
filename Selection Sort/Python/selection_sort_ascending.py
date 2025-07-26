def selection_sort(nums) : #Selection sort Method

    for i in range(0,len(nums)-1):
        min_value=i

        for j in range(i+1,len(nums)):
            if nums[j]<nums[min_value]:
                min_value=j

        if min_value!=i:
            nums[min_value],nums[i]=nums[i],nums[min_value] #Swaping
    return nums #returning the list 

#Taking input for list size
n=int(input("Enter the size of the list:"))
nums=[] #Decleare the list 
print(f"Enter {n} numbers:")# f string
#Taking list input 
for _ in range(n):#_ don't care variable
    num=int(input())
    nums.append(num) #In append mode take one input and add it one by one to the list

sorted_nums = selection_sort(nums)#Method call
print("Sorted list:", sorted_nums)#Printing the sorted list



   



