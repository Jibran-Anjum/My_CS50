Algorithm is a set of or a sequence of steps used in order to solve a problem that you might be facing.

The way or a specific process chosen in order to solve a problem like finding a specific individuals names inside a phone book, is called an algorithm.

There can be many algorithms to solving a simple problem, one can be searching pages one by one, second algorithm can be flipping two pages at a time, the third could be going to the middle of the phone book then finding out whether the name could be on the left or the right side of the phone book and then let's say that the name would be present on the right side, then we remove the left side and move to the middle of the rest and repeat the process until we find the name in the phone book.

Each of these approaches could be called algorithms. The speed of these algorithms can be pictured as follows in what is called _big-O notation_:
![[bigOnotation.png]]
Notice that the first algorithm, highlighted in red, has a big-O of `n`  because if there are 100 names in the phone book, it could take up to 100 tries to find the correct name. The second algorithm, where two pages were searched at a time, has a big-O of ‘n/2’ because we searched twice as fast through the pages. The final algorithm has a big-O of log2n as doubling the problem would only result in one more step to solve the problem.