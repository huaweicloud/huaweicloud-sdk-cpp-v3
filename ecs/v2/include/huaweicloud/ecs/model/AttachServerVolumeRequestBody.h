
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeRequestBody_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/AttachServerVolumeOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  AttachServerVolumeRequestBody
    : public ModelBase
{
public:
    AttachServerVolumeRequestBody();
    virtual ~AttachServerVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachServerVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    AttachServerVolumeOption getVolumeAttachment() const;
    bool volumeAttachmentIsSet() const;
    void unsetvolumeAttachment();
    void setVolumeAttachment(const AttachServerVolumeOption& value);


protected:
    AttachServerVolumeOption volumeAttachment_;
    bool volumeAttachmentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeRequestBody_H_
