## Problem Link

https://leetcode.com/problems/find-the-lexicographically-smallest-valid-sequence/description/

## Description

#### Find the Lexicographically Smallest Valid Sequence

You are given two strings word1 and word2.

A string x is called almost equal to y if you can change at most one character in x to make it identical to y.

A sequence of indices seq is called valid if:

The indices are sorted in ascending order.

Concatenating the characters at these indices in word1 in the same order results in a string that is almost equal to word2.

Return an array of size word2.length representing the lexicographically smallest valid sequence of indices. If no such sequence of indices exists, return an empty array.

Note that the answer must represent the lexicographically smallest array, not the corresponding string formed by those indices.

#### Example 1:

## Input: 

maximumHeight = [2,3,4,3]

## Output: 

10

## Explanation:

We can assign heights in the following way: [1, 2, 4, 3].

#### Example 2:

## Input: 

maximumHeight = [15,10]

## Output: 

25

## Explanation:

We can assign heights in the following way: [15, 10].

#### Example 3:

## Input: 

maximumHeight = [2,2,1]

## Output: 

-1

## Explanation:

It's impossible to assign positive heights to each index so that no two towers have the same height.
