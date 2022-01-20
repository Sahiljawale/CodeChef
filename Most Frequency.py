dicti={}
def most_frequent(s):
    for i in s:
        if i not in dicti:
            dicti[i]=1
        else:
            dicti[i]+=1
    return dicti

res=most_frequent('mississippi')
for keys in sorted(res,key = res.get,reverse=True):
    print(keys,"=",res[keys])
