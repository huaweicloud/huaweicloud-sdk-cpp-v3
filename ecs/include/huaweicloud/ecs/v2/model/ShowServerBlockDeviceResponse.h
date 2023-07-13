
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerBlockDeviceResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerBlockDeviceResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerBlockDevice.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerBlockDeviceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerBlockDeviceResponse();
    virtual ~ShowServerBlockDeviceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerBlockDeviceResponse members

    /// <summary>
    /// 
    /// </summary>

    ServerBlockDevice getVolumeAttachment() const;
    bool volumeAttachmentIsSet() const;
    void unsetvolumeAttachment();
    void setVolumeAttachment(const ServerBlockDevice& value);


protected:
    ServerBlockDevice volumeAttachment_;
    bool volumeAttachmentIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerBlockDeviceResponse_H_
