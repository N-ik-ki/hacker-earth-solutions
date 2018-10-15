test_string = input()
head_pointer = 0
tail_pointer = len(test_string)-1
half_length = len(test_string)//2
for i in range(half_length):
    if test_string[head_pointer] == test_string[tail_pointer]:
        head_pointer += 1
        tail_pointer -=1
    else:
        print("NO")
        break;
    if i == half_length-1:
        print("YES")
