def selection_sort(nums) : #Selection sort Method

    for i in range(0,len(nums)-1):
        max_value=i

        for j in range(i+1,len(nums)):
            if nums[j]>nums[max_value]:
                max_value=j

        if max_value!=i:
            nums[max_value],nums[i]=nums[i],nums[max_value] #Swaping
    return nums #returning the list 

#Taking input for list size
n=int(input("Enter the size of the list:"))
nums=[] #Decleare the list 
print(f"Enter {n} numbers:")#Taking list input
for _ in range(n):#_ don't care variable
    num=int(input())
    nums.append(num) #In append mode take one input and add it one by one to the list

sorted_nums = selection_sort(nums)#Method call
print("Sorted list:", sorted_nums)#Printing the sorted list



   



