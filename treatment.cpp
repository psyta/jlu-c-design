//钱以分为单位

struct treatment {
	struct body_Check;
	struct used_medicine;
	struct live_hospital
};

struct body_Check { //体检
	char name[30];
	int price;
	struct body_Check * next;
};

struct medicine { //药品信息
	char name[30];
	int unit_Price; //单价
};

struct medicine_list { //记录全部药品信息
	struct * medicine[30];
};

struct used_Medicine { //用药
	struct medicine * use_m;
	int amount;
	struct used_Medicine * next;
};

struct time { //时间
	int month;
	int day;
	int hour;
	int minute;
};

struct live_hospital {
	struct time in_time; //住院日期
	struct time out_time; //预计出院日期
	int predict_days; //预计住院天数
	int pledge;//剩余押金
	int cost;//已支付住院费用
};