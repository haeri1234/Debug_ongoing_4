#include "SecondHandArticleView.h"

using namespace std;

namespace TP {
	SecondHandArticleView::SecondHandArticleView() {

	};

	// �Խñ� �ڵ� �Է¹����� �ش� �� ã��
	void SecondHandArticleView::secondHandArticleToken(string articleData, int code) {

		struct SecondHandData shData;
		istringstream ss(articleData);
		string firstStringBuffer;
		vector<string> x;
		x.clear();
		// 1�� ������ ,
		while (getline(ss, firstStringBuffer, ',')) {
			x.push_back(firstStringBuffer);
		}

		// 2�� ������ /
		int num = 0;
		for (string data : x) {
			istringstream ss(data);
			string stringBuffer;
			vector<string> y;
			y.clear(); 
			while (getline(ss, stringBuffer, '/')) {
				y.push_back(stringBuffer);
			}
			// ã�� �Խñ� �ڵ�� ��ġ�ϴ� �κи� ����
			if (y[0] == to_string(code)) {
				shData.SecondHandCode = y[0];
				shData.SecondHandTitle = y[1];
				shData.SecondHandLocation = y[2];
				shData.SecondHandPrice = y[3];
				shData.SecondHandUserName = y[4];
				shData.SecondHandContent = y[5];
				shData.SecondHandChatNum = y[6];
				shData.SecondHandLikeNum = y[7];
				shData.SecondHandWritingTime = y[8];
			}
		}
		this->shData = shData;
		this->result = "����: "+shData.SecondHandTitle+"\n"
								+	"����: " + shData.SecondHandLocation + "\n"
								+ "����: " + shData.SecondHandPrice + "��\n"
								+ "���̵�: " + shData.SecondHandUserName + "\n"
								+ "����: " + shData.SecondHandContent + "\n"
								+ "ä�� ��: " + shData.SecondHandChatNum + "\n"
								+ "���ƿ�: " + shData.SecondHandLikeNum + "\n"
								+ "��¥: " + shData.SecondHandWritingTime + "\n";
	}

	// �����  ��� �����ϱ�
	string SecondHandArticleView::get_SecondHandArticleView() const {
		return this->result;
	}

	// ������ ���� ���� ����
	string SecondHandArticleView::loadSecondHandPrice() {
		return this->shData.SecondHandPrice;
	}
	string SecondHandArticleView::loadSecondHandTitle() {
		return this->shData.SecondHandTitle;
	}
	string SecondHandArticleView::loadSecondHandUserName() {
		return this->shData.SecondHandUserName;
	}
	string SecondHandArticleView::loadSecondHandLocation() {
		return this->shData.SecondHandLocation;
	}
	string SecondHandArticleView::loadSecondHandContent() {
		return this->shData.SecondHandContent;
	}
}