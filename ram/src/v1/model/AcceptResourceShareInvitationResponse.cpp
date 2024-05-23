

#include "huaweicloud/ram/v1/model/AcceptResourceShareInvitationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




AcceptResourceShareInvitationResponse::AcceptResourceShareInvitationResponse()
{
    resourceShareInvitationIsSet_ = false;
}

AcceptResourceShareInvitationResponse::~AcceptResourceShareInvitationResponse() = default;

void AcceptResourceShareInvitationResponse::validate()
{
}

web::json::value AcceptResourceShareInvitationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareInvitationIsSet_) {
        val[utility::conversions::to_string_t("resource_share_invitation")] = ModelBase::toJson(resourceShareInvitation_);
    }

    return val;
}
bool AcceptResourceShareInvitationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_invitation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_invitation"));
        if(!fieldValue.is_null())
        {
            ResourceShareInvitation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareInvitation(refVal);
        }
    }
    return ok;
}


ResourceShareInvitation AcceptResourceShareInvitationResponse::getResourceShareInvitation() const
{
    return resourceShareInvitation_;
}

void AcceptResourceShareInvitationResponse::setResourceShareInvitation(const ResourceShareInvitation& value)
{
    resourceShareInvitation_ = value;
    resourceShareInvitationIsSet_ = true;
}

bool AcceptResourceShareInvitationResponse::resourceShareInvitationIsSet() const
{
    return resourceShareInvitationIsSet_;
}

void AcceptResourceShareInvitationResponse::unsetresourceShareInvitation()
{
    resourceShareInvitationIsSet_ = false;
}

}
}
}
}
}


