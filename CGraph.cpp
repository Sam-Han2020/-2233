#include "pch.h"
#include "CGraph.h"

CGraph::CGraph()
{
}

CGraph::~CGraph()
{
}

void CGraph::InitGraph()
{
	//��ʼ������
	for (int i=0;i<MAX_VERTEX_NUM;++i)
	{
		m_Vertices[i] = -1;
	}
	//��ʼ����
	for (int i=0;i<MAX_VERTEX_NUM;++i)
	{
		for (int j = 0; j < MAX_VERTEX_NUM; ++j)
		{
			m_AdjMatrix[i][j] = false;
		}
	}
}
