import unittest
import pytest

from receiver import * 

class receiver_test(unittest.TestCase):
    def test_range_and_count(self):
        self.assertEqual(calculate_min([111914360, 678148338, 624407569, 1451916718, 147884402, 1875150203, 1896242708]), 111914360)
        self.assertEqual(calculate_min([0, 8, 9, 8, 2, 3, 8]), 0)

        self.assertEqual(calculate_max([111914360, 678148338, 624407569, 1451916718, 147884402, 1875150203, 1896242708]), 1896242708)
        self.assertEqual(calculate_max([0, 8, 9, 8, 2, 3, 8]), 9)

        self.assertEqual(calculate_smple_moving_average([111914360, 678148338, 624407569, 1451916718, 147884402, 1875150203, 1896242708]), 1357132859.6)
        self.assertEqual(calculate_smple_moving_average([0, 8, 9, 8, 2, 3, 8]), 7.6)


if __name__ == '__main__':
      unittest.main()