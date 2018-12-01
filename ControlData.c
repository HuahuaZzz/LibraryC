#include "ControlData.h"
/**
* �� �n���|���B�z ��
* �ŧi�|���򥻸�Ƶ��c�w�q
*/
struct User
{
    int ID;
    char* Name;
    char* Password;
};
/**
*�� �ϥΪ̿�J�|����� ��
*�ŧi���~������@���~�^���榡
*/
enum UserCheckFormat
{
    UserName,
    UserPassword,
    UserEmail
};
/**
* �� �s�W �R�� �d�� �ק� �|�� ��:
* �P�w�O�_�����|��
* @param ��J [struct User ]user �ۭq�����y��ƪ��c�}�C
* @return �^��BOOL�� �^���O�_�����b��
*/
enum UserCheckFormat CheckUser(struct User user);
//�T�{�|������J�榡�O�_���~
/**
* �� �U�Q�n���|����Ʈ榡�P�_ ��:
* �P�w�O�_�����|��
* @param ��J [struct User ]user �ۭq�����y��ƪ��c�}�C
* @return �^��enum�� �^���O���@�|����Ʀ���
*/
enum UserCheckFormat CheckInsertList (struct User user);
