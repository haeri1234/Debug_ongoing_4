#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//#include "MainManager.h"
using namespace std;

namespace TP {
	class SecondHandArticleView {
	private:
		// 중고거래 리스트 내용 구조체
		struct SecondHandData {
			string SecondHandCode;
			string SecondHandTitle;
			string SecondHandLocation;
			string SecondHandPrice;
			string SecondHandUserName;
			string SecondHandContent;
			string SecondHandChatNum;
			string SecondHandLikeNum;
			string SecondHandWritingTime;
		};
		SecondHandData shData;
		string result = "해당 결과가 없습니다.";

	public:
		SecondHandArticleView();
		~SecondHandArticleView();

		// 받은 문자열로 중고거래 리스트 토큰화
		void secondHandArticleToken(string, int);
		// 정리된 중고거래 리스트 데이터 전달
		string get_SecondHandArticleView() const;


		// 개별 정보를 받을 수 있는 함수
		string loadSecondHandPrice();
		string loadSecondHandTitle();
		string loadSecondHandUserName();
		string loadSecondHandLocation();
		string loadSecondHandContent();
	};
}