#include "LifeQueListLoad.h"

namespace TP {
	LifeQueListLoad::LifeQueListLoad() {

	};

	void lifeQueListLoad() {
		LifeQueListView* lfList;
		string result = lfList->get_LifeQueListView();
		string currentLocal = "sangdo 1-dong";

		if (lfList->loadLifeQueLocation() == currentLocal) {
			cout << result << endl;
		}
	}
}
