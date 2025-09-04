
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceCertificate_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceCertificate_H_


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
/// 更新设备证书结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDeviceCertificate
    : public ModelBase
{
public:
    UpdateDeviceCertificate();
    virtual ~UpdateDeviceCertificate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDeviceCertificate members

    /// <summary>
    /// **参数说明**：设备证书状态，默认状态为激活 - ACTIVE：激活状态。 - INACTIVE：停用状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceCertificate_H_
