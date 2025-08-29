#  請修正程式碼，來輸出正確的 10! 。
product = 0
for i in range(1, 11):
    print("product + i =", product, end="")
    product = product + i
    print(" +", i, "=", product)
print("product =", product)