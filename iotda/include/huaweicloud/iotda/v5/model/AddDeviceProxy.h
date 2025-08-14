
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDeviceProxy_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDeviceProxy_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/EffectiveTimeRange.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添加设备代理结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddDeviceProxy
    : public ModelBase
{
public:
    AddDeviceProxy();
    virtual ~AddDeviceProxy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDeviceProxy members

    /// <summary>
    /// **参数说明**：设备代理名称
    /// </summary>

    std::string getProxyName() const;
    bool proxyNameIsSet() const;
    void unsetproxyName();
    void setProxyName(const std::string& value);

    /// <summary>
    /// **参数说明**：代理设备列表，列表内所有设备共享网关权限，即列表内任意一个网关下的子设备可以通过组里任意一个网关上线然后进行数据上报。 **取值范围**：列表内填写设备id，列表内最少有2个设备id，最多有10个设备id，设备id取值范围：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合，建议不少于4个字符。
    /// </summary>

    std::vector<std::string>& getProxyDevices();
    bool proxyDevicesIsSet() const;
    void unsetproxyDevices();
    void setProxyDevices(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    EffectiveTimeRange getEffectiveTimeRange() const;
    bool effectiveTimeRangeIsSet() const;
    void unseteffectiveTimeRange();
    void setEffectiveTimeRange(const EffectiveTimeRange& value);

    /// <summary>
    /// **参数说明**：资源空间ID。携带该参数指定创建的设备归属到哪个资源空间下。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);


protected:
    std::string proxyName_;
    bool proxyNameIsSet_;
    std::vector<std::string> proxyDevices_;
    bool proxyDevicesIsSet_;
    EffectiveTimeRange effectiveTimeRange_;
    bool effectiveTimeRangeIsSet_;
    std::string appId_;
    bool appIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDeviceProxy_H_
