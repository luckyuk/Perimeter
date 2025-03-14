#ifndef __INCTERRA_H__
#define __INCTERRA_H__

typedef vector<Vect2s> Vect2sVect;

class TerraInterface:public cUnknownClass
{
public:
	virtual int SizeX()=0;
	virtual int SizeY()=0;
	virtual int GetZ(int x,int y)=0;//������ � ����� x,y
	virtual float GetZf(int x,int y)=0;
	virtual int GetHZeroPlast()=0;

	virtual int GetReductionZ(int x,int y)=0;//����������� ����� ����� ������
	virtual int GetReductionShift()=0;//1<<GetReductionShift() - �� ������� ��� ���������� ����������� �����
	
	virtual class Column* GetColumn(int player)=0;

	typedef void (*borderCall)(void* data,Vect2f& p);
	virtual void GetBorder(int player,borderCall call,void* data)=0;

	virtual void GetTileColor(char* tile,DWORD line_size,int xstart,int ystart,int xend,int yend,int step)=0;

	//��� ��������������� � �������� GetColumn,GetBorder ����� ����������, 
	//������ ��������� ��� �������
	virtual void LockColumn(){};
	virtual void UnlockColumn(){};
};

#endif //__INCTERRA_H__