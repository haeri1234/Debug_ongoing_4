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
			//�߰�ǰ ����Ʈ ��� Ŭ���� ȣ��
			shListView.secondHandListToken(newData);
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//��Ȱ���� ����Ʈ ��� Ŭ���� ȣ��
			lqListView.lifeQueListToken(newData);
			break;
		}
	};

	void ViewManager::articleView(string newData, ACTION_KEY actKey) {
		SecondHandArticleView shArticleView;
		LifeQueArticleView lqArticleView;

		switch (actKey) {
		case ACTION_KEY::SECONDHAND_ARTICLE_VIEW:
			//�߰�ǰ �Խù� ��� Ŭ���� ȣ��
			shArticleView.secondHandArticleToken(newData, (int)actKey);
			break;

		case ACTION_KEY::LIFEQUE_ARTICLE_VIEW:
			//��Ȱ���� �Խù� ��� Ŭ���� ȣ��
			lqArticleView.lifeQueArticleToken(newData, (int)actKey);
			break;

		}
	};

	// ��ɾ� �� �� �Է� �ޱ�
	// ex. search �Է� -> apple �Է� = "apple"�� �� �Խñ� �˻�
	/*userinput() �Լ� ���� ����*/

	//string ViewManager::userInputCommand(ACTION_KEY actKey) {
	//	SecondHandListView shListView;
	//	LifeQueListView lqListView;

	//	//��ɾ� �Է� �ޱ�
	//	switch (actKey) {
	//	case ACTION_KEY::SECONDHAND_LIST_VIEW:
	//		//�߰�ǰ ��� ȭ�鿡�� ��ɾ� ȣ��
	//		return shListView.userInput();
	//		break;
	//	case ACTION_KEY::LIFEQUE_LIST_VIEW:
	//		//��Ȱ���� ����Ʈ ��� Ŭ���� ȣ��
	//		return lqListView.userInput();
	//		break;
	//	}
	//};

	/*string ViewManager::userInputValue() {
	//	//��� �� �Է� �ޱ�
	};*/
}