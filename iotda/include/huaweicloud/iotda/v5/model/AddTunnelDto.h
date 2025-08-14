
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddTunnelDto_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddTunnelDto_H_


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
/// 创建隧道请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddTunnelDto
    : public ModelBase
{
public:
    AddTunnelDto();
    virtual ~AddTunnelDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTunnelDto members

    /// <summary>
    /// **参数说明**：设备ID
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddTunnelDto_H_
