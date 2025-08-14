
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AsyncDeviceCommandRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AsyncDeviceCommandRequest_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AsyncDeviceCommandRequest
    : public ModelBase
{
public:
    AsyncDeviceCommandRequest();
    virtual ~AsyncDeviceCommandRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AsyncDeviceCommandRequest members

    /// <summary>
    /// **参数说明**：设备命令所属的设备服务ID，在设备关联的产品模型中定义。如设备需要编解码插件来解析命令，此参数为必填项。 **取值范围**：长度不超过64的字符串。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备命令名称，在设备关联的产品模型中定义。如设备需要编解码插件来解析命令，此参数为必填项。 **取值范围**：长度不超过128的字符串。
    /// </summary>

    std::string getCommandName() const;
    bool commandNameIsSet() const;
    void unsetcommandName();
    void setCommandName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备执行的命令，Json格式，里面是一个个健值对，如果service_id不为空，每个健都是profile中命令的参数名（paraName）;如果service_id为空则由用户自定义命令格式。设备命令示例：{\&quot;value\&quot;:\&quot;1\&quot;}，具体格式需要应用和设备约定， 最大32K。
    /// </summary>

    Object getParas() const;
    bool parasIsSet() const;
    void unsetparas();
    void setParas(const Object& value);

    /// <summary>
    /// **参数说明**：物联网平台缓存命令的时长， 单位秒, 平台最多缓存20条消息（即最多缓存20条PENDING状态的命令） 该参数在send_strategy字段为delay时有效，默认缓存24小时，最大缓存2天。
    /// </summary>

    int32_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int32_t value);

    /// <summary>
    /// **参数说明**：下发策略，默认缓存下发。 **取值范围**： - immediately:表示立即下发，此时expire_time无效。 - delay:表示缓存下发，等数据上报或者设备上线之后下发。expire_time为0或空时，命令会默认缓存24小时。
    /// </summary>

    std::string getSendStrategy() const;
    bool sendStrategyIsSet() const;
    void unsetsendStrategy();
    void setSendStrategy(const std::string& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string commandName_;
    bool commandNameIsSet_;
    Object paras_;
    bool parasIsSet_;
    int32_t expireTime_;
    bool expireTimeIsSet_;
    std::string sendStrategy_;
    bool sendStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AsyncDeviceCommandRequest_H_
