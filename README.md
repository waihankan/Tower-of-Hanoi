# Tower-of-Hanoi
[The Tower of Hanoi](https://en.wikipedia.org/wiki/Tower_of_Hanoi) (also called the *Tower of Brahma* or *Lucas' Tower* and sometimes pluralized as Towers) is a mathematical game or puzzle. It consists of three rods and a number of disks of different sizes, which can slide onto any rod. The puzzle starts with the disks in a neat stack in ascending order of size on one rod, the smallest at the top, thus making a conical shape.

## Algorithm (RECURSION METHOD)
    A = [3, 2, 1]
    B = []
    C = []

    def move(n, source, target, auxiliary):
        if n > 0:
            # Move n - 1 disks from source to auxiliary, so they are out of the way
            move(n - 1, source, auxiliary, target)

            # Move the nth disk from source to target
            target.append(source.pop())

            # Display our progress
            print(A, B, C, '##############', sep='\n')

            # Move the n - 1 disks that we left on auxiliary onto target
            move(n - 1, auxiliary, target, source)

    # Initiate call from source A to target C with auxiliary B
    move(3, A, C, B)

## Animation
<img src="https://www.codespeedy.com/wp-content/uploads/2019/04/tower-of-hanoi-python.gif" width="450" height="400" />

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change. Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
