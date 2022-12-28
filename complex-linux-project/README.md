# Complex Linux Project

## Putting it all together

1. Task 1: Calculator
   - `make calc`: compile a calculator with static library
   - `./calc`: run the calculator, user can simply follow the text prompt
   - `make clean-calc` delete all output files from `make calc`
2. Task 2: Case Converter
   > all make commands must be run as root
   - `make both-convert`: compile both converters with dynamic library
   - `./lower` or `./upper`: run the converter, user can simply follow the text prompt
   - `make clean-convert` delete all output files from `make both-convert`

> user also can clean files from both tasks with `make clean-both`
