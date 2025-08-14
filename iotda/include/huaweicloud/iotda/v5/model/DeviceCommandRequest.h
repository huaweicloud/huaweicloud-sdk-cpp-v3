
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceCommandRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceCommandRequest_H_


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
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeviceCommandRequest
    : public ModelBase
{
public:
    DeviceCommandRequest();
    virtual ~DeviceCommandRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeviceCommandRequest members

    /// <summary>
    /// **参数说明**：设备命令所属的设备服务ID，在设备关联的产品模型中定义。 **取值范围**：长度不超过64的字符串。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备命令名称，在设备关联的产品模型中定义。 **取值范围**：长度不超过128的字符串。
    /// </summary>

    std::string getCommandName() const;
    bool commandNameIsSet() const;
    void unsetcommandName();
    void setCommandName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备执行的命令，Json格式，里面是一个个键值对，如果serviceId不为空，每个键都是profile中命令的参数名（paraName）;如果serviceId为空则由用户自定义命令格式。设备命令示例：{\&quot;value\&quot;:\&quot;1\&quot;}，具体格式需要应用和设备约定。此参数仅支持Json格式，暂不支持字符串。
    /// </summary>

    Object getParas() const;
    bool parasIsSet() const;
    void unsetparas();
    void setParas(const Object& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string commandName_;
    bool commandNameIsSet_;
    Object paras_;
    bool parasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceCommandRequest_H_
