#include "ViewManager.h"

namespace TP
{
	ViewManager::ViewManager() {

	};

	void ViewManager::listView(string newData, ACTION_KEY actKey) {
		SecondHandListView shListView;
		LifeQueListView lqListView;

		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_VIEW:
			//중고품 리스트 출력 클래스 호출
			shListView.secondHandListToken(newData);
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//생활정보 리스트 출력 클래스 호출
			lqListView.lifeQueListToken(newData);
			break;
		}
	};

	void ViewManager::articleView(string newData, ACTION_KEY actKey) {
		SecondHandArticleView shArticleView;
		LifeQueArticleView lqArticleView;

		switch (actKey) {
		case ACTION_KEY::SECONDHAND_ARTICLE_VIEW:
			//중고품 게시물 출력 클래스 호출
			shArticleView.secondHandArticleToken(newData, (int)actKey);
			break;

		case ACTION_KEY::LIFEQUE_ARTICLE_VIEW:
			//생활정보 게시물 출력 클래스 호출
			lqArticleView.lifeQueArticleToken(newData, (int)actKey);
			break;

		}
	};

	// 명령어 및 값 입력 받기
	// ex. search 입력 -> apple 입력 = "apple"이 들어간 게시글 검색
	/*userinput() 함수 구현 생략*/

	//string ViewManager::userInputCommand(ACTION_KEY actKey) {
	//	SecondHandListView shListView;
	//	LifeQueListView lqListView;

	//	//명령어 입력 받기
	//	switch (actKey) {
	//	case ACTION_KEY::SECONDHAND_LIST_VIEW:
	//		//중고품 목록 화면에서 명령어 호출
	//		return shListView.userInput();
	//		break;
	//	case ACTION_KEY::LIFEQUE_LIST_VIEW:
	//		//생활정보 리스트 출력 클래스 호출
	//		return lqListView.userInput();
	//		break;
	//	}
	//};

	/*string ViewManager::userInputValue() {
	//	//명령 값 입력 받기
	};*/
}