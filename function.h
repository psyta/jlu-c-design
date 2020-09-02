#ifndef FUNCTINO_H
#define FUNCTINO_H
/* 定义函数 具体功能要求 */

/* 1: 能够从文件中录入多条诊疗记录，也能够随时录入 1 条诊疗记录 */
// 从文件中导入多条记录
int addRecordFromFile();
// 随时录入一条
int addOneRecord();

/* 2: 能够随时修改 1 条诊疗记录。
按照财务规范，如需修改错误的诊疗记录，应将当前错误的诊疗记录予以撤销后，再补充添加正确的诊疗记录。
 */
int modifyOneRecord();

/* 3: 能够随时删除一条记录 */
int deleteOneRecord();

/* 4: 能够按照合理顺序打印某个科室的诊疗信息（按照科室检索）。 */
int searchByDepartment();

/* 5: 能够按照合理顺序打印某位医生的诊疗信息（按照医生的工号检索）。 */
int searchByDoctor();

/*6: 【查询】能够按照合理顺序打印某位患者的历史诊疗信息（按照患者的相关信息检索）*/
int searchByPatient();

/*7: 【统计】能够统计医院目前的营业额（检查费用+药品费用+住院费用，不 含住院押金）；能够生成目前的住院患者报表。*/
// 计算营业额
int calcCurrentTurnover();
// 生成目前住院报表
int createLiveInHospital();

/*8: 【统计】能够统计每位医生的出诊情况和工作繁忙程度。*/
int calcDoctorBusy();

/*9: 【某段时间范围】能够打印某段时间范围内的所有诊疗信息。*/

int printRecordDuringTime();

/* 10: 【存储】能够将当前系统中的所有信息保存到文件中。*/
int saveInfoToFile();

#endif
