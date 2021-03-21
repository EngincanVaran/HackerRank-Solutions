def bonAppetit(bill, k, b):

    total = sum(bill) - bill[k]

    b_act = total // 2

    if b_act == b:
        print("Bon Appetit")
    else:
        print(b-b_act)