

#include "huaweicloud/ecs/v2/model/AttachServerVolumeRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AttachServerVolumeRequestBody::AttachServerVolumeRequestBody()
{
    volumeAttachmentIsSet_ = false;
}

AttachServerVolumeRequestBody::~AttachServerVolumeRequestBody() = default;

void AttachServerVolumeRequestBody::validate()
{
}

web::json::value AttachServerVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeAttachmentIsSet_) {
        val[utility::conversions::to_string_t("volumeAttachment")] = ModelBase::toJson(volumeAttachment_);
    }

    return val;
}

bool AttachServerVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeAttachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeAttachment"));
        if(!fieldValue.is_null())
        {
            AttachServerVolumeOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeAttachment(refVal);
        }
    }
    return ok;
}


AttachServerVolumeOption AttachServerVolumeRequestBody::getVolumeAttachment() const
{
    return volumeAttachment_;
}

void AttachServerVolumeRequestBody::setVolumeAttachment(const AttachServerVolumeOption& value)
{
    volumeAttachment_ = value;
    volumeAttachmentIsSet_ = true;
}

bool AttachServerVolumeRequestBody::volumeAttachmentIsSet() const
{
    return volumeAttachmentIsSet_;
}

void AttachServerVolumeRequestBody::unsetvolumeAttachment()
{
    volumeAttachmentIsSet_ = false;
}

}
}
}
}
}


