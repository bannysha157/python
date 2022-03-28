defination
#the filter method filters theg given sequence with the help of a function tests each elements in the sequence to be true or not.
#filter syntax: filter(function,sequence)
#parameters:
#function: function that tests if each element of a sequence true or not.
#sequence: sequence which needs to be filtered, it can be sets, lists, tuples, or containers of any iterators.
#Returns:returns an iterator that is already filtered
filter using lambda function:
  list(filter(lambda n : n%2==0, range(1,11)))
output[2, 4, 6, 8, 10]
  tuple using tuple function:
     tuple(filter(lambda n : n%2==0,range(1,11)))
  output[2, 4, 6, 8, 10]

