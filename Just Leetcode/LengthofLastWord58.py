class Solution(object):
    def lengthOfLastWord(self, s):
        new_one = s.strip()
        li = new_one.split(" ")
        return len(li[len(li)-1])