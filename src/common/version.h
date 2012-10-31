// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _VERSION_H_
#define _VERSION_H_

// Sistema para lan�amento de RC's
#define ATHENA_MAJOR_VERSION	1	// Vers�o principal
#define ATHENA_MINOR_VERSION	0	// Vers�o secund�ria
#define ATHENA_REVISION			0	// Revis�o (3 finais d�gitos)

#define ATHENA_RELEASE_FLAG		1 // 1 = Em desenvolvimento, 0 = Est�vel
#define ATHENA_OFFICIAL_FLAG	1 // 1 = Em desenvolvimento, 0 = Est�vel

#define ATHENA_SERVER_NONE	0	// Indefinido
#define ATHENA_SERVER_LOGIN	1	// Login server
#define ATHENA_SERVER_CHAR	2	// Char server
#define ATHENA_SERVER_INTER	4	// Inter server
#define ATHENA_SERVER_MAP	8	// Map server

// ATHENA_MOD_VERSION�̓p�b�`�ԍ��ł��B
// ����͖����ɕς��Ȃ��Ă��C����������ς�����x�̈����ŁB
// �i����A�b�v���[�h�̓x�ɕύX����̂��ʓ|�Ǝv���邵�A��������
// �@���̍��ڂ��Q�Ƃ���l�����邩�ǂ����ŋ^�₾����B�j
// ���̒��x�̈����Ȃ̂ŁA�T�[�o�[�ɖ₢���킹�鑤���A�����܂Ŗڈ����x�̈�����
// ����܂�M�p���Ȃ����ƁB
// �Isnapshot�̎���A�傫�ȕύX���������ꍇ�͐ݒ肵�Ăق����ł��B
// C����̎d�l��A�ŏ���0��t�����8�i���ɂȂ�̂ŊԈႦ�Ȃ��ŉ������B
#define ATHENA_MOD_VERSION	1249	// mod version (patch No.)

#endif /* _VERSION_H_ */
