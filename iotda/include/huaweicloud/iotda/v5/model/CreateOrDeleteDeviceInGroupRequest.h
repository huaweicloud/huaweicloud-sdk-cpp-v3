
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateOrDeleteDeviceInGroupRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateOrDeleteDeviceInGroupRequest_H_


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
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateOrDeleteDeviceInGroupRequest
    : public ModelBase
{
public:
    CreateOrDeleteDeviceInGroupRequest();
    virtual ~CreateOrDeleteDeviceInGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOrDeleteDeviceInGroupRequest members

    /// <summary>
    /// **参数说明**：实例ID。物理多租下各实例的唯一标识，一般华为云租户无需携带该参数，仅在物理多租场景下从管理面访问API时需要携带该参数。您可以在IoTDA管理控制台界面，选择左侧导航栏“总览”页签查看当前实例的ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备组ID，用于唯一标识一个设备组，在创建设备组时由物联网平台分配。 **取值范围**：长度不超过36，十六进制字符串和连接符（-）的组合
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数说明**：操作类型，支持添加设备和删除设备。 **取值范围**： - addDevice: 添加设备。添加已注册的设备到指定的设备组中。 - removeDevice: 删除设备。从指定的设备组中删除设备，只是解除了设备和设备组的关系，该设备在平台仍然存在。
    /// </summary>

    std::string getActionId() const;
    bool actionIdIsSet() const;
    void unsetactionId();
    void setActionId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备ID，用于唯一标识一个设备。在注册设备时直接指定，或者由物联网平台分配获得。由物联网平台分配时，生成规则为\&quot;product_id\&quot; + \&quot;_\&quot; + \&quot;node_id\&quot;拼接而成。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string actionId_;
    bool actionIdIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateOrDeleteDeviceInGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateOrDeleteDeviceInGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateOrDeleteDeviceInGroupRequest_H_
