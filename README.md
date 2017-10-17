# Multiplicative-Inverse
Implementation of Multiplicative Inverse (MI) in C 

# Overview

The Multiplicative Inverse has various uses such as checking for a Group or Decryption in Affine Cipher.

This implementation of MI is not optimized in any way. The code has been written to provide readability and easy understanding of the algorithm.

Euclid's Algorithm is used to calculate MI.

# Compilation & Installation

This implementation has only been tested on CodeBlocks, Windows platform. But you would be able to compile/ run it on Unix.

# Usage

Say we want to find the Multiplicative Inverse of 8 with respect to 27 (8 mod 27):

  -> We will input 8 as divisor and 27 as dividend.
  
  -> Now, the algorithm will calculate for u.
  
        If u is negative, the MI is Divisor-u else, if the u is positive, the MI is u itself.
        Here u is calculated by using Euclid's Algo:  u(i) = u(i-2) + (quotient * u(i-1))
