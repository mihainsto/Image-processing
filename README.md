# Image-processing
Processing a BMP image with C. 

Steps of the project:

1 - Encrypt the image

2 - Decrypting the image

3 - Processing the image and try to guess the handwriting numbers using Template matching

For the encryption part I used a cypher key.
With this key I generated pseudo-random numbers with XORSHIFT32 algorithm, and with that number I was able to generate a permutation for the bitmap pixels. 
After the bitmap was permuted I changed the pixels using xor between the pixels (RGB values) and the pseudo-random numbers generated. 
The decryption was possible thanks to the xor properties.
