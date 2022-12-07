#include "SecondHandListLoad.h"

using namespace std;

namespace TP {
	SecondHandListLoad::SecondHandListLoad() {

	};

	void secondHandListLoad() {
		SecondHandListView* shList;
		string result = shList->get_SecondHandListView();
		string currentLocal = "sangdo 1-dong";

		if (shList->loadSecondHandLocation() == currentLocal) {
			cout << result << endl;
		}
	}
}
