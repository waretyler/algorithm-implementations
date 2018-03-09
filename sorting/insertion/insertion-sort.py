# sorts the array a in ascending order
def insertSort(a):
    # i is the position in the array of the element to be sorted 
    for i in range(1,len(a)):
        # remove the current element out of the list
        current = a[i]

        # k is the position of the last removed element
        k = i

        # j is position before the last remove element 
        j = k - 1

        # stop looping once the last empty element is the first element of the array (k = 0)
        # or the previous element is no longer greater
        while k != 0 and a[j] > current:
            # if the element at j is greater than the current element
            # we remove it from it's spot and put it in the spot of the last removed
            # element
            a[k] = a[j]

            # update k
            k = j 
            j = k - 1

        # finally, move the current element to the last empty position, k
        a[k] = current






a = [100, -89, 10000, 0, 2, 100]
print("Before sort",a)
insertSort(a)
print("After sort",a)

