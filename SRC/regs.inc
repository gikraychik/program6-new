TMP0			@0x00	# �६���� �祩�� ����� (rw)
TMP1			@0x01
TMP2			@0x02
TMP3			@0x03
TMP4			@0x04
TMP5			@0x05
TMP6			@0x06
TMP7			@0x07
TMP8			@0x08
TMP9			@0x09
TMP10			@0x0A
TMP11			@0x0B
TMP12			@0x0C
TMP13			@0x0D
TMP14			@0x0E
TMP15			@0x0F
TMP16			@0x10
TMP17			@0x11
TMP18			@0x12
TMP19			@0x13
TMP20			@0x14
TMP21			@0x15
TMP22			@0x16
TMP23			@0x17
TMP24			@0x18
TMP25			@0x19
TMP26			@0x1A
TMP27			@0x1B
TMP28			@0x1C
TMP29			@0x1D
TMP30			@0x1E
TMP31			@0x1F

LED0			@0x20	# ��������� ᨬ���쭮�� �������� (rw)
LED1			@0x21
LED2			@0x22
LED3			@0x23

LED0_CFG		@0x24	# ���䨣���� �뢮�� ᨬ����� �� �������� (rw)
LED1_CFG		@0x25
LED2_CFG		@0x26
LED3_CFG		@0x27

IND1			@0x30	# ᢥ⮤���� (rw)
IND2			@0x31
IND3			@0x32
IND4			@0x33
IND5			@0x34

IND1_CFG		@0x35	# ���䨣���� ᢥ⮤����� (rw)
IND2_CFG		@0x36
IND3_CFG		@0x37
IND4_CFG		@0x38
IND5_CFG		@0x39

BTN_UP			@0x40	# 䠪� ������ ������ (r)
BTN_DOWN		@0x41
BTN_ENTER		@0x42

LONG_BTN_UP		@0x43	# 䠪� ���⥫쭮�� ������� ������ (r)
LONG_BTN_DOWN	@0x44
LONG_BTN_ENTER	@0x45

BTN_UP_STATUS	@0x46	# ���ﭨ� ������ (r)
BTN_DOWN_STATUS	@0x47
BTN_ENTR_STATUS	@0x48

NETLIST_SELECT	@0x50	# ᥫ���� ���ﭨ� ��⮬�� (rw)
VIDEO_MODE		@0x51	# �����०�� (�६����� �祩��) (rw)
RST				@0x52	# �ࠢ����� �� (rw)

T1				@0x60	# ���祭�� ⥬�������� ���稪�� (r)
T2				@0x61

T1_STATUS		@0x62	# ����� �ࠩ��� ⥬�������� ���稪�� (r)
T2_STATUS		@0x63

T1_LAST			@0x64	# ᪮�쪮 ᥪ㭤 ��諮 ��᫥ ��᫥���� ��ଠ쫭�� ⥬������� (r)
T2_LAST			@0x65

T_TRY			@0x66	# �᫮ ����⮪ ��।������ ⥬������� (r)

S1				@0x70	# ५���� ��室� (rw)
S2				@0x71
S3				@0x72
S4				@0x73

I4				@0x74	# ������ �室�/��室� (rw)
I5				@0x75

HEAT			@0x76	# ������ ����/��室 (rw)

PWM_PERCENT		@0x77	# ��������� ��室 10� � 蠣�� 1� (rw)

TIMER_MSEC		@0x80	# ����ᥪ㭤�� ⠩��� (rw)
TIMER_SEC		@0x81	# ����ᥪ㭤�� ⠩��� (rw)

SEC				@0x90	# ��� (rw)
MIN				@0x91
HOUR			@0x92
DAY				@0x94
MON				@0x95
YEAR			@0x96
FINETIME		@0x97
ERROR			@0x98

DB_VALUE		@0xA0	# �����প� �ᯨᠭ��
SYNC			@0xA1
DB_UPDATE		@0xA2

BAT_ERROR		@0xB0	# �訡�� ࠡ��� (r)
DB_ERROR		@0xB1

EEADDR0			@0xC0	# ���࣮������ᨬ�� ������ (rw)
EEADDR1			@0xC1
EEADDR2			@0xC2
EEADDR3			@0xC3
EEADDR4			@0xC4
EEADDR5			@0xC5
EEADDR6			@0xC6
EEADDR7			@0xC7

#----------------

# ᯥ樠��� ����� ��� �祥� EEPROM

T3			@0xC0
T4			@0xC1
PWM_SAVE	@0xC2
CTRL_STATE	@0xC3
EE_SUM		@0xC4

# ᯥ� �������� �祥�
TIMER0				@0x10
TIMER1				@0x11

S2_OLD				@0x09
I5_OLD				@0x13
S3_OLD				@0x0A
S4_OLD				@0x0B
#Tin_OLD				@0x16

EDT					@0x17
#RB0					@0x18
#RB1					@0x19

#Tout_OLD			@0x1A

TIMER2				@0x1B
TIMER				@0x18

DOUT	@0x74

# the following variables should be used carefully
MEM_T1		@0x17
MEM_T2		@0x16
ADMIN_T1	@0x15
ADMIN_T2	@0x14
