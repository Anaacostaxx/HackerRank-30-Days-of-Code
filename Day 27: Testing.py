import random 

class TestDataEmptyArray(object):
    
    @staticmethod
    def get_array():
        return []
        

class TestDataUniqueValues(object):
    @staticmethod
    def get_array():
        # complete this function
        TestDataUniqueValues.l1 = random.sample(range(0,200),random.randint(2,100))
        return TestDataUniqueValues.l1
    

    @staticmethod
    def get_expected_result():
        # complete this function
        index = 0
        for i in TestDataUniqueValues.l1:
            if i == min(TestDataUniqueValues.l1):
                return index
            index += 1

class TestDataExactlyTwoDifferentMinimums(object):

    @staticmethod
    def get_array():
        # complete this function
        TestDataExactlyTwoDifferentMinimums.l2 = random.sample(range(0,200),random.randint(2,100))
        TestDataExactlyTwoDifferentMinimums.l2.insert(random.randint(0,len(TestDataExactlyTwoDifferentMinimums.l2)),min(TestDataExactlyTwoDifferentMinimums.l2))
        return TestDataExactlyTwoDifferentMinimums.l2

    @staticmethod
    def get_expected_result():
        # complete this function
        index=0
        for i in TestDataExactlyTwoDifferentMinimums.l2:
            if i == min(TestDataExactlyTwoDifferentMinimums.l2):
                return index
            index += 1
