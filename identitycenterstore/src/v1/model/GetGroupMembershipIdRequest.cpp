

#include "huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetGroupMembershipIdRequest::GetGroupMembershipIdRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

GetGroupMembershipIdRequest::~GetGroupMembershipIdRequest() = default;

void GetGroupMembershipIdRequest::validate()
{
}

web::json::value GetGroupMembershipIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool GetGroupMembershipIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GetGroupMembershipIdReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string GetGroupMembershipIdRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetGroupMembershipIdRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetGroupMembershipIdRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetGroupMembershipIdRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string GetGroupMembershipIdRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GetGroupMembershipIdRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GetGroupMembershipIdRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GetGroupMembershipIdRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

GetGroupMembershipIdReqBody GetGroupMembershipIdRequest::getBody() const
{
    return body_;
}

void GetGroupMembershipIdRequest::setBody(const GetGroupMembershipIdReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GetGroupMembershipIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GetGroupMembershipIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


