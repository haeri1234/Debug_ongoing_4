#include "DomainManager.h"

namespace TP
{

	DomainManager::DomainManager() {

	};

	void DomainManager::loadListData(ACTION_KEY actKey) {
		SecondHandListLoad shListLoad;
		LifeQueListLoad lqListLoad;

		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_DOMAIN:
			shListLoad.secondHandListLoad();
			break;
		case ACTION_KEY::LIFEQUE_LIST_DOMAIN:
			lqListLoad.lifeQueListLoad();
			break;
		}

	};

	void DomainManager::loadArticleData(ACTION_KEY actKey) {
		SecondHandArticleLoad shArticleLoad;
		LifeQueArticleLoad lqArticleLoad;

		switch (actKey) {
		case ACTION_KEY::SECONDHAND_ARTICLE_DOMAIN:
			shArticleLoad.secondHandArticleLoad();
			break;

		case ACTION_KEY::LIFEQUE_ARTICLE_DOMAIN:
			lqArticleLoad.lifeQueArticleLoad();
			break;
		}
	};
}
