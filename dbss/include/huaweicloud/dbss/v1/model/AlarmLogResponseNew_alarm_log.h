
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AlarmLogResponseNew_alarm_log_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AlarmLogResponseNew_alarm_log_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AlarmLogResponseNew_alarm_log
    : public ModelBase
{
public:
    AlarmLogResponseNew_alarm_log();
    virtual ~AlarmLogResponseNew_alarm_log();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlarmLogResponseNew_alarm_log members

    /// <summary>
    /// 告警ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 告警状态 - ON：持续中 - OFF：已关闭
    /// </summary>

    std::string getAlarmLife() const;
    bool alarmLifeIsSet() const;
    void unsetalarmLife();
    void setAlarmLife(const std::string& value);

    /// <summary>
    /// 是否发送邮件
    /// </summary>

    bool isSendEmail() const;
    bool sendEmailIsSet() const;
    void unsetsendEmail();
    void setSendEmail(bool value);

    /// <summary>
    /// 告警发生时间
    /// </summary>

    std::string getAlarmTime() const;
    bool alarmTimeIsSet() const;
    void unsetalarmTime();
    void setAlarmTime(const std::string& value);

    /// <summary>
    /// 告警类型 - RISK_RULE: 风险规则 - RISK_CPU: CPU超限 - RISK_MEMORY: 内存超限 - RISK_DISK: 磁盘超限 - RISK_DISK_CAPACITY: 磁盘容量不足六个月 - RISK_BACKUP: 备份失败 - AUDIT_QPS_OVERFLOW: 流量超限入库延迟告警 - RISK_AGENT: Agent异常 - AUDIT_BACKUP_FAILED: 实例备份失败(运维侧)
    /// </summary>

    std::string getAlarmType() const;
    bool alarmTypeIsSet() const;
    void unsetalarmType();
    void setAlarmType(const std::string& value);

    /// <summary>
    /// 告警恢复时间
    /// </summary>

    std::string getAlarmFixTime() const;
    bool alarmFixTimeIsSet() const;
    void unsetalarmFixTime();
    void setAlarmFixTime(const std::string& value);

    /// <summary>
    /// 告警确认状态 - DONE: 已确认 - UNDO: 未确认
    /// </summary>

    std::string getAlarmStatus() const;
    bool alarmStatusIsSet() const;
    void unsetalarmStatus();
    void setAlarmStatus(const std::string& value);

    /// <summary>
    /// 告警风险等级 - LOW：低 - MEDIUM：中 - HIGH：高
    /// </summary>

    std::string getAlarmRisk() const;
    bool alarmRiskIsSet() const;
    void unsetalarmRisk();
    void setAlarmRisk(const std::string& value);

    /// <summary>
    /// 告警描述信息
    /// </summary>

    std::string getAlarmDescription() const;
    bool alarmDescriptionIsSet() const;
    void unsetalarmDescription();
    void setAlarmDescription(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string alarmLife_;
    bool alarmLifeIsSet_;
    bool sendEmail_;
    bool sendEmailIsSet_;
    std::string alarmTime_;
    bool alarmTimeIsSet_;
    std::string alarmType_;
    bool alarmTypeIsSet_;
    std::string alarmFixTime_;
    bool alarmFixTimeIsSet_;
    std::string alarmStatus_;
    bool alarmStatusIsSet_;
    std::string alarmRisk_;
    bool alarmRiskIsSet_;
    std::string alarmDescription_;
    bool alarmDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AlarmLogResponseNew_alarm_log_H_
