class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        word_simalirty = s.count(letter)
        size_letter = len(s)
        equation = word_simalirty / size_letter
        percentage = int(equation * 100)
        return percentage 
