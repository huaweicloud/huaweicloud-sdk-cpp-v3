

#include "huaweicloud/ram/v1/model/RejectResourceShareInvitationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




RejectResourceShareInvitationRequest::RejectResourceShareInvitationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceShareInvitationId_ = "";
    resourceShareInvitationIdIsSet_ = false;
}

RejectResourceShareInvitationRequest::~RejectResourceShareInvitationRequest() = default;

void RejectResourceShareInvitationRequest::validate()
{
}

web::json::value RejectResourceShareInvitationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(resourceShareInvitationIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_invitation_id")] = ModelBase::toJson(resourceShareInvitationId_);
    }

    return val;
}
bool RejectResourceShareInvitationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
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


std::string RejectResourceShareInvitationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void RejectResourceShareInvitationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool RejectResourceShareInvitationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void RejectResourceShareInvitationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string RejectResourceShareInvitationRequest::getResourceShareInvitationId() const
{
    return resourceShareInvitationId_;
}

void RejectResourceShareInvitationRequest::setResourceShareInvitationId(const std::string& value)
{
    resourceShareInvitationId_ = value;
    resourceShareInvitationIdIsSet_ = true;
}

bool RejectResourceShareInvitationRequest::resourceShareInvitationIdIsSet() const
{
    return resourceShareInvitationIdIsSet_;
}

void RejectResourceShareInvitationRequest::unsetresourceShareInvitationId()
{
    resourceShareInvitationIdIsSet_ = false;
}

}
}
}
}
}


