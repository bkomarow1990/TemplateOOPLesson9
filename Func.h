#pragma once
template <>
inline char maxInArray(char arr[], size_t size) {
	char max = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (tolower(arr[i]) >tolower(max))
		{
			if (isupper(arr[i]))
			{
				max = arr[i];
			}
			else if (tolower(arr[i]) > tolower(max)) {
				max = arr[i];
			}
			max = arr[i];
		}
	}
	return max;
}
template <typename T>//template keyword <typename param of type>
inline T maxInArray(T arr[], size_t size) {
	T max = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max;
}

template <typename T1, typename T2>
auto max(const T1& first, const T2& second) {
	return first > second ? first : second;
}