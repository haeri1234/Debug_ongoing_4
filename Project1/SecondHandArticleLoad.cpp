#include "SecondHandArticleLoad.h"

using namespace std;

namespace TP {
	SecondHandArticleLoad::SecondHandArticleLoad() {

	};

	void secondHandArticleLoad() {
		SecondHandArticleView* shArticle;
		string result = shArticle->get_SecondHandArticleView();
		string currentLocal = "sangdo 1-dong";

		if (shArticle->loadSecondHandLocation() == currentLocal) {
			cout << result << endl;
		}
	}
}
