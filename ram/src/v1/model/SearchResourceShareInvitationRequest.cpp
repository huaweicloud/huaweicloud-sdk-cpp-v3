

#include "huaweicloud/ram/v1/model/SearchResourceShareInvitationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareInvitationRequest::SearchResourceShareInvitationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

SearchResourceShareInvitationRequest::~SearchResourceShareInvitationRequest() = default;

void SearchResourceShareInvitationRequest::validate()
{
}

web::json::value SearchResourceShareInvitationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchResourceShareInvitationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SearchResourceShareInvitationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchResourceShareInvitationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void SearchResourceShareInvitationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool SearchResourceShareInvitationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void SearchResourceShareInvitationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

SearchResourceShareInvitationReqBody SearchResourceShareInvitationRequest::getBody() const
{
    return body_;
}

void SearchResourceShareInvitationRequest::setBody(const SearchResourceShareInvitationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchResourceShareInvitationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchResourceShareInvitationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


