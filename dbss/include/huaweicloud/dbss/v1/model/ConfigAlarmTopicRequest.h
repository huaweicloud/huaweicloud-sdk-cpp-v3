
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ConfigAlarmTopicRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ConfigAlarmTopicRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  ConfigAlarmTopicRequest
    : public ModelBase
{
public:
    ConfigAlarmTopicRequest();
    virtual ~ConfigAlarmTopicRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigAlarmTopicRequest members

    /// <summary>
    /// CPU告警阈值(%)
    /// </summary>

    int32_t getAlarmCpu() const;
    bool alarmCpuIsSet() const;
    void unsetalarmCpu();
    void setAlarmCpu(int32_t value);

    /// <summary>
    /// 磁盘告警阈值(%)
    /// </summary>

    int32_t getAlarmDisk() const;
    bool alarmDiskIsSet() const;
    void unsetalarmDisk();
    void setAlarmDisk(int32_t value);

    /// <summary>
    /// 内存告警阈值(%)
    /// </summary>

    int32_t getAlarmMemory() const;
    bool alarmMemoryIsSet() const;
    void unsetalarmMemory();
    void setAlarmMemory(int32_t value);

    /// <summary>
    /// 每天发送告警总条数
    /// </summary>

    int32_t getAlarmNum() const;
    bool alarmNumIsSet() const;
    void unsetalarmNum();
    void setAlarmNum(int32_t value);

    /// <summary>
    /// 告警等级,默认为空。 - high：高  - medium：中  - low：低
    /// </summary>

    std::vector<std::string>& getAlarmRisk();
    bool alarmRiskIsSet() const;
    void unsetalarmRisk();
    void setAlarmRisk(const std::vector<std::string>& value);

    /// <summary>
    /// 通知开关 - ON：开启  - OFF：关闭
    /// </summary>

    std::string getAlarmSwitch() const;
    bool alarmSwitchIsSet() const;
    void unsetalarmSwitch();
    void setAlarmSwitch(const std::string& value);

    /// <summary>
    /// 通知消息主题URN,调用SMN服务接口获取。当alarm_switch为ON时必填
    /// </summary>

    std::string getAlarmTopicUrn() const;
    bool alarmTopicUrnIsSet() const;
    void unsetalarmTopicUrn();
    void setAlarmTopicUrn(const std::string& value);


protected:
    int32_t alarmCpu_;
    bool alarmCpuIsSet_;
    int32_t alarmDisk_;
    bool alarmDiskIsSet_;
    int32_t alarmMemory_;
    bool alarmMemoryIsSet_;
    int32_t alarmNum_;
    bool alarmNumIsSet_;
    std::vector<std::string> alarmRisk_;
    bool alarmRiskIsSet_;
    std::string alarmSwitch_;
    bool alarmSwitchIsSet_;
    std::string alarmTopicUrn_;
    bool alarmTopicUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ConfigAlarmTopicRequest_H_
