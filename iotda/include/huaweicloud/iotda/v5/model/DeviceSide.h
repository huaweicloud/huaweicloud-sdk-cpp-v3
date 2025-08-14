
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceSide_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceSide_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 端侧设备信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeviceSide
    : public ModelBase
{
public:
    DeviceSide();
    virtual ~DeviceSide();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeviceSide members

    /// <summary>
    /// **参数说明**：端侧执行下发的目标设备ID列表。设备ID，用于唯一标识一个设备，在注册设备时由物联网平台分配获得。
    /// </summary>

    std::vector<std::string>& getDeviceIds();
    bool deviceIdsIsSet() const;
    void unsetdeviceIds();
    void setDeviceIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> deviceIds_;
    bool deviceIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceSide_H_
