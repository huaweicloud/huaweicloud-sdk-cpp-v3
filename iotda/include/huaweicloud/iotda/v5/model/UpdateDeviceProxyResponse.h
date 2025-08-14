
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceProxyResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceProxyResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/EffectiveTimeRangeResponseDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDeviceProxyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDeviceProxyResponse();
    virtual ~UpdateDeviceProxyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDeviceProxyResponse members

    /// <summary>
    /// **参数说明**：代理ID。用来唯一标识一个代理规则
    /// </summary>

    std::string getProxyId() const;
    bool proxyIdIsSet() const;
    void unsetproxyId();
    void setProxyId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备代理名称
    /// </summary>

    std::string getProxyName() const;
    bool proxyNameIsSet() const;
    void unsetproxyName();
    void setProxyName(const std::string& value);

    /// <summary>
    /// **参数说明**：代理设备组，组内所有设备共享网关权限，即组内任意一个网关下的子设备可以通过组里任意一个网关上线然后进行数据上报。
    /// </summary>

    std::vector<std::string>& getProxyDevices();
    bool proxyDevicesIsSet() const;
    void unsetproxyDevices();
    void setProxyDevices(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    EffectiveTimeRangeResponseDTO getEffectiveTimeRange() const;
    bool effectiveTimeRangeIsSet() const;
    void unseteffectiveTimeRange();
    void setEffectiveTimeRange(const EffectiveTimeRangeResponseDTO& value);

    /// <summary>
    /// **参数说明**：资源空间ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);


protected:
    std::string proxyId_;
    bool proxyIdIsSet_;
    std::string proxyName_;
    bool proxyNameIsSet_;
    std::vector<std::string> proxyDevices_;
    bool proxyDevicesIsSet_;
    EffectiveTimeRangeResponseDTO effectiveTimeRange_;
    bool effectiveTimeRangeIsSet_;
    std::string appId_;
    bool appIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceProxyResponse_H_
