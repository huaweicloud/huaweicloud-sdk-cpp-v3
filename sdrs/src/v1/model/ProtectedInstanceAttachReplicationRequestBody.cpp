

#include "huaweicloud/sdrs/v1/model/ProtectedInstanceAttachReplicationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ProtectedInstanceAttachReplicationRequestBody::ProtectedInstanceAttachReplicationRequestBody()
{
    replicationAttachmentIsSet_ = false;
}

ProtectedInstanceAttachReplicationRequestBody::~ProtectedInstanceAttachReplicationRequestBody() = default;

void ProtectedInstanceAttachReplicationRequestBody::validate()
{
}

web::json::value ProtectedInstanceAttachReplicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationAttachmentIsSet_) {
        val[utility::conversions::to_string_t("replicationAttachment")] = ModelBase::toJson(replicationAttachment_);
    }

    return val;
}
bool ProtectedInstanceAttachReplicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replicationAttachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replicationAttachment"));
        if(!fieldValue.is_null())
        {
            ProtectedInstanceAttachReplicationRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationAttachment(refVal);
        }
    }
    return ok;
}


ProtectedInstanceAttachReplicationRequestParams ProtectedInstanceAttachReplicationRequestBody::getReplicationAttachment() const
{
    return replicationAttachment_;
}

void ProtectedInstanceAttachReplicationRequestBody::setReplicationAttachment(const ProtectedInstanceAttachReplicationRequestParams& value)
{
    replicationAttachment_ = value;
    replicationAttachmentIsSet_ = true;
}

bool ProtectedInstanceAttachReplicationRequestBody::replicationAttachmentIsSet() const
{
    return replicationAttachmentIsSet_;
}

void ProtectedInstanceAttachReplicationRequestBody::unsetreplicationAttachment()
{
    replicationAttachmentIsSet_ = false;
}

}
}
}
}
}


