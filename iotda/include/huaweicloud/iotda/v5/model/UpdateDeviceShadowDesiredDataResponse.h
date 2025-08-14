
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceShadowDesiredDataResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceShadowDesiredDataResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/DeviceShadowData.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDeviceShadowDesiredDataResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDeviceShadowDesiredDataResponse();
    virtual ~UpdateDeviceShadowDesiredDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDeviceShadowDesiredDataResponse members

    /// <summary>
    /// 设备ID，用于唯一标识一个设备。在注册设备时直接指定，或者由物联网平台分配获得。由物联网平台分配时，生成规则为\&quot;product_id\&quot; + \&quot;_\&quot; + \&quot;node_id\&quot;拼接而成。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 设备影子数据结构体。
    /// </summary>

    std::vector<DeviceShadowData>& getShadow();
    bool shadowIsSet() const;
    void unsetshadow();
    void setShadow(const std::vector<DeviceShadowData>& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::vector<DeviceShadowData> shadow_;
    bool shadowIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceShadowDesiredDataResponse_H_
