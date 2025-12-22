#include "../std_lib_facilities.h"
using namespace std;

int main()
{
	vector<double> distances;
	for (double dist; cin >> dist;)
	{
		distances.push_back(dist);
	}
	
	if (distances.size() == 0) //deals with example with no distances
	{
		cout << "No distances entered.\n";
		return 0;
	}
	
	double sum{ 0 };
	
	for (int i = 0; i < distances.size(); i++)
	{
		sum += distances[i];
	}
	double average_distance = sum / distances.size();
	cout << "The total distance travelled is " << sum << endl;
	cout << "The average is " << average_distance << endl;

	sort(distances.begin(), distances.end());

	cout << "The mininmum distance between two cities is " << distances[0] << endl;
	cout << "The maximum distance between two cities is " << distances[(distances.size() - 1)];




	return 0;
}