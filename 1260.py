def mergeSort(lst):
    if(len(lst)>1):
        mid = len(lst)//2
        l1 = lst[:mid]
        l2 = lst[mid:]
        mergeSort(l1)
        mergeSort(l2)
        i = 0
        j = 0
        k = 0
        while(i<len(l1) and j<len(l2)):
            if(l1[i]<l2[j]):
                lst[k] = l1[i]
                i+=1
            else:
                lst[k] = l2[j]
                j+=1
            k+=1
        while(i<len(l1)):
            lst[k] = l1[i]
            i+=1
            k+=1
        while(j<len(l2)):
            lst[k] = l2[j]
            j+=1
            k+=1
    return lst

def main():
    tam = 0
    total = 0
    lst = []
    dic = {}
    n = int(input())
    ch = input()
    for i in range(0,n):
        while(1):
            try:
                t = input()
                if(len(t)==0):
                    break
                if(dic.get(t)==None):
                    dic[t] = 1.0
                    lst  = lst + [t]
                    tam+=1
                else:
                    dic[t]+=1
                total+=1
            except EOFError:
                break
        newList = mergeSort(lst)
        for j in range(0,tam):
            print("{} {:.4f}".format(newList[j],dic.get(newList[j])/total*100))
        total = 0
        tam = 0
        newList.clear()
        dic.clear()
        if(i+1!=n):
            print()

main()