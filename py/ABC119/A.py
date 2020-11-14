def resolve():
    S = input()
    yyyy = int(S[:4])
    mmdd = int(S[5:7] + S[8:])

    ans = "TBD"

    if  yyyy < 2019:
        ans = "Heisei"
    elif yyyy == 2019:
        if mmdd <= 430:
            ans = "Heisei"
            
    print(ans)

import sys
from io import StringIO
import unittest

class TestClass(unittest.TestCase):
    def assertIO(self, input, output):
        stdout, stdin = sys.stdout, sys.stdin
        sys.stdout, sys.stdin = StringIO(), StringIO(input)
        resolve()
        sys.stdout.seek(0)
        out = sys.stdout.read()[:-1]
        sys.stdout, sys.stdin = stdout, stdin
        self.assertEqual(out, output)

    def test_入力例_1(self):
        input = """2019/04/30"""
        output = """Heisei"""
        self.assertIO(input, output)

    def test_入力例_2(self):
        input = """2019/11/01"""
        output = """TBD"""
        self.assertIO(input, output)


if __name__ == "__main__":
    unittest.main()
