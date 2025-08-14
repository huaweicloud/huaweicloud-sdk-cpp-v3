
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowAsyncDeviceCommandRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowAsyncDeviceCommandRequest_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowAsyncDeviceCommandRequest
    : public ModelBase
{
public:
    ShowAsyncDeviceCommandRequest();
    virtual ~ShowAsyncDeviceCommandRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAsyncDeviceCommandRequest members

    /// <summary>
    /// **参数说明**：下发命令的设备ID，用于唯一标识一个设备，在注册设备时由物联网平台分配获得。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// **参数说明**：实例ID。物理多租下各实例的唯一标识，建议携带该参数，在使用专业版时必须携带该参数。您可以在IoTDA管理控制台界面，选择左侧导航栏“总览”页签查看当前实例的ID，具体获取方式请参考[[查看实例详情](https://support.huaweicloud.com/usermanual-iothub/iot_01_0079.html#section1)](tag:hws) [[查看实例详情](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0079.html#section1)](tag:hws_hk)。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数说明**：下发命令的命令id，用于唯一标识一个消息，在下发命令时由物联网平台分配获得。 **取值范围**：长度不超过100，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getCommandId() const;
    bool commandIdIsSet() const;
    void unsetcommandId();
    void setCommandId(const std::string& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string commandId_;
    bool commandIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAsyncDeviceCommandRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAsyncDeviceCommandRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowAsyncDeviceCommandRequest_H_
