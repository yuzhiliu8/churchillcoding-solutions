

hex_conversions = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, 
               '7': 7, '8': 8, '9': 9, 'A': 10, 'B': 11,
                "C": 12, "D": 13, "E": 14, "F": 15 }



def dec_to_hex(d: int) -> str:
    return hex(d)[2:].upper()


def add_hexes(a:str, b:str ) -> str:
    max_len = max(len(a), len(b))
    a = (max_len - len(a)) * "0" + a
    b = (max_len - len(b)) * "0" + b
    hex_sum = ""
    carry = 0
    for i in range(len(a)-1, -1, -1):
        digit_sum = hex_conversions[a[i]] + hex_conversions[b[i]] + carry
        carry = digit_sum // 16
        remainder = digit_sum % 16
 
        hex_sum = dec_to_hex(remainder) + hex_sum
        if (i == 0 and carry == 1):
            hex_sum = "1" + hex_sum
    
    return hex_sum

def combined_hex(a:str):
    sum_digits = a[0]
    for i in range(1, len(a)):
        sum_digits = add_hexes(sum_digits, a[i])

    return sum_digits


def main():
    for _ in range(1, 6):
        start, delta, rows = list(input().split())

        current = start
        row_r = ""
        for row in range(2, int(rows)+1):
            for i in range(row):
                current = add_hexes(current, delta)
                if row == int(rows):
                    row_r += current
    

        while (len(row_r) > 1):
            row_r = combined_hex(row_r)
    
        print(f'{_}. {row_r}')
    


    











if __name__ == "__main__":
    main()