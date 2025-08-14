
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleAction_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleAction_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ActionDeviceCommand.h>
#include <huaweicloud/iotda/v5/model/ActionSmnForwarding.h>
#include <string>
#include <huaweicloud/iotda/v5/model/ActionDeviceAlarm.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规则动作结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  RuleAction
    : public ModelBase
{
public:
    RuleAction();
    virtual ~RuleAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleAction members

    /// <summary>
    /// **参数说明**：规则动作的类型，端侧执行只支持下发设备命令消息类型。 **取值范围**： - DEVICE_CMD：下发设备命令消息类型。 - SMN_FORWARDING：发送SMN消息类型。 - DEVICE_ALARM：上报设备告警消息类型。当选择该类型时，condition中必须有DEVICE_DATA条件类型。该类型动作只能唯一。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ActionDeviceCommand getDeviceCommand() const;
    bool deviceCommandIsSet() const;
    void unsetdeviceCommand();
    void setDeviceCommand(const ActionDeviceCommand& value);

    /// <summary>
    /// 
    /// </summary>

    ActionSmnForwarding getSmnForwarding() const;
    bool smnForwardingIsSet() const;
    void unsetsmnForwarding();
    void setSmnForwarding(const ActionSmnForwarding& value);

    /// <summary>
    /// 
    /// </summary>

    ActionDeviceAlarm getDeviceAlarm() const;
    bool deviceAlarmIsSet() const;
    void unsetdeviceAlarm();
    void setDeviceAlarm(const ActionDeviceAlarm& value);


protected:
    std::string type_;
    bool typeIsSet_;
    ActionDeviceCommand deviceCommand_;
    bool deviceCommandIsSet_;
    ActionSmnForwarding smnForwarding_;
    bool smnForwardingIsSet_;
    ActionDeviceAlarm deviceAlarm_;
    bool deviceAlarmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleAction_H_
