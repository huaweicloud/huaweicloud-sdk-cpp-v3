
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAlarmTopicConfigInfoResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAlarmTopicConfigInfoResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAlarmTopicConfigInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAlarmTopicConfigInfoResponse();
    virtual ~ListAlarmTopicConfigInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAlarmTopicConfigInfoResponse members

    /// <summary>
    /// CPU告警阈值(%)
    /// </summary>

    std::string getAlarmCpu() const;
    bool alarmCpuIsSet() const;
    void unsetalarmCpu();
    void setAlarmCpu(const std::string& value);

    /// <summary>
    /// 磁盘告警阈值(%)
    /// </summary>

    std::string getAlarmDisk() const;
    bool alarmDiskIsSet() const;
    void unsetalarmDisk();
    void setAlarmDisk(const std::string& value);

    /// <summary>
    /// 内存告警阈值(%)
    /// </summary>

    std::string getAlarmMemory() const;
    bool alarmMemoryIsSet() const;
    void unsetalarmMemory();
    void setAlarmMemory(const std::string& value);

    /// <summary>
    /// 每天发送告警总条数
    /// </summary>

    std::string getAlarmNum() const;
    bool alarmNumIsSet() const;
    void unsetalarmNum();
    void setAlarmNum(const std::string& value);

    /// <summary>
    /// 告警等级 - high：高  - medium：中  - low：低
    /// </summary>

    std::vector<std::string>& getAlarmRisk();
    bool alarmRiskIsSet() const;
    void unsetalarmRisk();
    void setAlarmRisk(const std::vector<std::string>& value);

    /// <summary>
    /// 通知开关 - ON：开启 - OFF：关闭
    /// </summary>

    std::string getAlarmSwitch() const;
    bool alarmSwitchIsSet() const;
    void unsetalarmSwitch();
    void setAlarmSwitch(const std::string& value);

    /// <summary>
    /// 通知消息主题URN,调用SMN服务接口获取
    /// </summary>

    std::string getAlarmTopicUrn() const;
    bool alarmTopicUrnIsSet() const;
    void unsetalarmTopicUrn();
    void setAlarmTopicUrn(const std::string& value);

    /// <summary>
    /// 是否支持SMN订阅  - true: 支持  - false: 不支持
    /// </summary>

    bool isSmnEffective() const;
    bool smnEffectiveIsSet() const;
    void unsetsmnEffective();
    void setSmnEffective(bool value);


protected:
    std::string alarmCpu_;
    bool alarmCpuIsSet_;
    std::string alarmDisk_;
    bool alarmDiskIsSet_;
    std::string alarmMemory_;
    bool alarmMemoryIsSet_;
    std::string alarmNum_;
    bool alarmNumIsSet_;
    std::vector<std::string> alarmRisk_;
    bool alarmRiskIsSet_;
    std::string alarmSwitch_;
    bool alarmSwitchIsSet_;
    std::string alarmTopicUrn_;
    bool alarmTopicUrnIsSet_;
    bool smnEffective_;
    bool smnEffectiveIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAlarmTopicConfigInfoResponse_H_
