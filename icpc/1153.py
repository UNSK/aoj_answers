#!/usr/bin/python3
while True:
    n, m = list(map(int, input().split()))
    if n == 0 and m == 0: break

    taro = []
    hanako = []
    for i in range(n):
        taro.append(int(input()))
    for i in range(m):
        hanako.append(int(input()))

    sum_taro = sum(taro)
    sum_hana = sum(hanako)
    dif = sum_taro - sum_hana
#    print("taro:",taro)
#    print("hana:",hanako)
#    print("dif:",dif)

    ans_t, ans_h = 101, 101 # 0 <= point <= 100
    for t in taro:
        for h in hanako:
            if (sum_taro - t + h) == (sum_hana - h + t) \
                    and (t + h) < (ans_t + ans_h):
                        ans_t, ans_h = t, h
    if (ans_t + ans_h) == 202:
        print(-1)
    else:
        print(ans_t, ans_h)

#    sign_t = 1
#    sign_h = 1
#    if sum_taro < sum_hana:
#        sign_h = -1
#    elif sum_taro > sum_hana:
#        sign_t = -1
#    #if dif = 0 do nothing
#
#    print("signs(t,h):",sign_t, sign_h) 
#    for t in taro:
#        for h in hanako:
#            t *= sign_h
#            h *= sign_t
#            if (sum_taro + h) == (sum_hana + t):
#                print(abs(t), abs(h))
#                break
#        else:
#            continue
#        break
#    else:
#        print(-1)
