/*
 * ��������
 * Copyright (C) 2019 String.Empty
 * �ò��ִ�����ڴ���ǰ�ο����߳�ѧ�׶εĴ���óȻ����ۼ������������߲�Ӧ���������ò��ֲ���ȫ����
 * Copyright (C) 2019-2020 lunzhiPenxil����
 */
#pragma once

class FromMsg;

namespace Cloud
{
	void update();
	int checkWarning(const char* warning);
	int DownloadFile(const char* url, const char* downloadPath);
	int checkUpdate(FromMsg* msg);
}
