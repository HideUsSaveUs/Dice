/*
 * ������￨
 * Copyright (C) 2019-2020 String.Empty
 * �ò��ִ������ǰ�ο����߳�ѧ�׶εĴ���óȻ����ۼ������������߲�Ӧ���������ò��ֲ���ȫ����
 * Copyright (C) 2019-2020 lunzhiPenxil����
 */
#include "CharacterCard.h"

map<string, CardTemp>& getmCardTemplet()
{
	static map<string, CardTemp> mCardTemplet = {
		{
			"COC7", {
				"COC7", SkillNameReplace, BasicCOC7, InfoCOC7, AutoFillCOC7, mVariableCOC7, ExpressionCOC7,
				SkillDefaultVal, {
					{"", CardBuild({BuildCOC7}, CardDeck::mPublicDeck["�������"], {})},
					{
						"bg", CardBuild({
							                {"�Ա�", "{�Ա�}"}, {"����", "7D6+8"}, {"ְҵ", "{����Աְҵ}"}, {"��������", "{��������}"},
							                {"��Ҫ֮��", "{��Ҫ֮��}"}, {"˼������", "{˼������}"}, {"����Ƿ�֮��", "{����Ƿ�֮��}"},
							                {"����֮��", "{����֮��}"}, {"����", "{����Ա�ص�}"}
						                }, CardDeck::mPublicDeck["�������"], {})
					}
				}
			}
		},
		{"BRP", {}}
	};
	return mCardTemplet;
}

Player& getPlayer(long long qq)
{
	if (!PList.count(qq))PList[qq] = {};
	return PList[qq];
}

void getPCName(FromMsg& msg)
{
	msg["pc"] = (PList.count(msg.fromQQ) && PList[msg.fromQQ][msg.fromGroup].Name != "��ɫ��")
		? PList[msg.fromQQ][msg.fromGroup].Name
		: msg["nick"];
}

string getPCName_B(FromMsg& msg)
{
	return (PList.count(msg.fromQQ) && PList[msg.fromQQ][msg.fromGroup].Name != "��ɫ��") ? PList[msg.fromQQ][msg.fromGroup].Name : msg["nick"];
}
