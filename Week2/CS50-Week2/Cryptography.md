Cryptography is just the art, the science of encrypting information. There are algorithms that we use in order to encrypt information or plain text into cryptic text. And only that certain someone who knows what algorithm you've used and what input you've used to the algorithm, can decrypt  that process and convert it back to the original message/information.

# Cipher
Cipher is an algorithm that encrypts text from plain text into ciphertext.

In order to change plain text to ciphertext we're need the following;

	input -> Cipher -> Ciphertext

But we also need a key;

	key
	input -> Cipher -> Ciphertext

let's say that key is equal to add 1 to the position of the current alphabet, that means that the message `Hi!` becomes;

	key = +1 to the position of the Alphabet
	Hi! -> Hi! + 1 -> Ij!

So the ciphertext of `Hi!` becomes `Ij!`.