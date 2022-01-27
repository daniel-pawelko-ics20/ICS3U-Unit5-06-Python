#!/usr/bin/env python3

# Created by: Daniel Pawelko
# Created on: Jan 2022
# Round


def round_func(num, round_to):
    # round number

    # process
    num[0] = (int(num[0] * pow(10, round_to) + 0.5)) / pow(10, round_to)


def main():
    # main function, calling round_func

    # variable
    number_list = []

    try:
        # input
        inp = input("Enter number to round decimals: ")
        inp = float(inp)
        round_to = int(input("Round to: "))
        round_to = int(round_to)

        # add inp to number_list
        number_list.append(inp)

        if round_to > 0:
            # calling functin
            round_func(number_list, round_to)

            # output
            print(f"The number is {number_list[0]}")
        else:
            print("Round to number must be positive")
    except Exception:
        print("Please enter a number")


if __name__ == "__main__":
    main()
