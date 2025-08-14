
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionDeviceCommand_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionDeviceCommand_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/CMD.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 下发设备命令消息结构
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ActionDeviceCommand
    : public ModelBase
{
public:
    ActionDeviceCommand();
    virtual ~ActionDeviceCommand();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionDeviceCommand members

    /// <summary>
    /// **参数说明**：下发命令的设备ID。 - 当创建设备数据规则时，若device_id为空，则命令下发给触发条件的设备。  - 当创建定时规则时，不允许为空。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CMD getCmd() const;
    bool cmdIsSet() const;
    void unsetcmd();
    void setCmd(const CMD& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    CMD cmd_;
    bool cmdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionDeviceCommand_H_
