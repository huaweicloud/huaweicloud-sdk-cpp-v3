

#include "huaweicloud/ram/v1/model/RejectResourceShareInvitationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




RejectResourceShareInvitationResponse::RejectResourceShareInvitationResponse()
{
    resourceShareInvitationIsSet_ = false;
}

RejectResourceShareInvitationResponse::~RejectResourceShareInvitationResponse() = default;

void RejectResourceShareInvitationResponse::validate()
{
}

web::json::value RejectResourceShareInvitationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareInvitationIsSet_) {
        val[utility::conversions::to_string_t("resource_share_invitation")] = ModelBase::toJson(resourceShareInvitation_);
    }

    return val;
}
bool RejectResourceShareInvitationResponse::fromJson(const web::json::value& val)
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


ResourceShareInvitation RejectResourceShareInvitationResponse::getResourceShareInvitation() const
{
    return resourceShareInvitation_;
}

void RejectResourceShareInvitationResponse::setResourceShareInvitation(const ResourceShareInvitation& value)
{
    resourceShareInvitation_ = value;
    resourceShareInvitationIsSet_ = true;
}

bool RejectResourceShareInvitationResponse::resourceShareInvitationIsSet() const
{
    return resourceShareInvitationIsSet_;
}

void RejectResourceShareInvitationResponse::unsetresourceShareInvitation()
{
    resourceShareInvitationIsSet_ = false;
}

}
}
}
}
}


