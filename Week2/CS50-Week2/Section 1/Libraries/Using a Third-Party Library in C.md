In order to compile the code with third-party libraries being imported in to it.

We'll be using a **command line** argument `-l` followed by the sequence of characters required. For example;
`clang -o hello hello.c -lcs50`

But for convenience we usually use `make` to compile our code, because it automates all of this tedious process.

Most of the errors that you see as the output/result of compiling source-code does not come from `make`, but from `clang` or `gcc` in the background.

There is no benefit in using `clang` manually, but if you want more control over what you're doing you can use `clang` manually. All `make` is doing is that it's saving us from some extra keystrokes.