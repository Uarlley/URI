def achaemoji(emojis,frase):
    total = 0
    t = 0
    for i in range(1,len(frase)+1):
        for j in range(0,len(emojis)):
            if emojis[j] in frase[t:i]:
                total += 1
                t = i
                break
    return total


def main():
    while True:
        total = 0
        emojis = []
        nums = input()
        nums = nums.split()
        n = int(nums[0])
        m = int(nums[1])
        if (n==0 and m==0):
            break
        for i in range(0,n):
            emojis+=[input()]
        for i in range(0,m):
            texto = input()
            total += achaemoji(emojis,texto)
        
        print(total)
main()