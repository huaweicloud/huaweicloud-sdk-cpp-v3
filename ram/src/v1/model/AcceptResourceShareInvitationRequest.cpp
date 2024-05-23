

#include "huaweicloud/ram/v1/model/AcceptResourceShareInvitationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




AcceptResourceShareInvitationRequest::AcceptResourceShareInvitationRequest()
{
    resourceShareInvitationId_ = "";
    resourceShareInvitationIdIsSet_ = false;
}

AcceptResourceShareInvitationRequest::~AcceptResourceShareInvitationRequest() = default;

void AcceptResourceShareInvitationRequest::validate()
{
}

web::json::value AcceptResourceShareInvitationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareInvitationIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_invitation_id")] = ModelBase::toJson(resourceShareInvitationId_);
    }

    return val;
}
bool AcceptResourceShareInvitationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_invitation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_invitation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareInvitationId(refVal);
        }
    }
    return ok;
}


std::string AcceptResourceShareInvitationRequest::getResourceShareInvitationId() const
{
    return resourceShareInvitationId_;
}

void AcceptResourceShareInvitationRequest::setResourceShareInvitationId(const std::string& value)
{
    resourceShareInvitationId_ = value;
    resourceShareInvitationIdIsSet_ = true;
}

bool AcceptResourceShareInvitationRequest::resourceShareInvitationIdIsSet() const
{
    return resourceShareInvitationIdIsSet_;
}

void AcceptResourceShareInvitationRequest::unsetresourceShareInvitationId()
{
    resourceShareInvitationIdIsSet_ = false;
}

}
}
}
}
}


