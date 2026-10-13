# week02-mini-project

Converts temperatures between Celsius and Fahrenheit in C++.

```
F = C * 9 / 5 + 32
C = (F - 32) * 5 / 9
```

## Setup

You need g++ with C++17 and git on Ubuntu.

```bash
sudo apt update
sudo apt install build-essential git gdb
git clone https://github.com/sephh23/week02-mini-project.git
cd week02-mini-project
```

## Input/output contract

Input is a temperature and then the unit it's in, either `C` or `F`:

```
<value> <unit>
```

- `C` converts to Fahrenheit and prints `<result> F`
- `F` converts to Celsius and prints `<result> C`
- If the value isn't a number or the unit isn't `C` or `F`, it prints `Invalid input`

## Tests

| # | Input | Expected output |
|---|-------|-----------------|
| 1 | `0 C` | `32 F` |
| 2 | `32 F` | `0 C` |
| 3 | `50 K` | `Invalid input` |
| 4 | `abc C` | `Invalid input` |

Test 4 is my edge case: non-numeric input.

## Build and test

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app
bash test.sh
```

## Limitations

- One conversion per run
- Only C and F, no Kelvin
- The unit has to be uppercase
