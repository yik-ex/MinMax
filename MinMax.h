#pragma once


template <typename T, typename FUNC>
T& max(T& val1, T& val2, T& val3, FUNC compareFunction)
{
	T& tempVal = (compareFunction(val1,val2)) ? val1 : val2;
	return compareFunction(tempVal,val3) ? tempVal : val3;
}

template <typename T, typename FUNC>
T& min(T& val1, T& val2, T& val3, FUNC compareFunction)
{
	T& tempVal = (compareFunction(val1, val2)) ? val2 : val1;
	return compareFunction(tempVal, val3) ? val3 : tempVal;
}