#include "LifeQueArticleLoad.h"

using namespace std;

namespace TP {
	LifeQueArticleLoad::LifeQueArticleLoad() {

	};

	void lifeQueArticleLoad() {
		LifeQueArticleView* lfArticle;
		string result = lfArticle->get_LifeQueArticleView();
		string currentLocal = "sangdo 1-dong";

		if (lfArticle->loadLifeQueLocation() == currentLocal) {
			cout << result << endl;
		}
	}
}
