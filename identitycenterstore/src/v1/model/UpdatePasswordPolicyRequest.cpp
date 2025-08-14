

#include "huaweicloud/identitycenterstore/v1/model/UpdatePasswordPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdatePasswordPolicyRequest::UpdatePasswordPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePasswordPolicyRequest::~UpdatePasswordPolicyRequest() = default;

void UpdatePasswordPolicyRequest::validate()
{
}

web::json::value UpdatePasswordPolicyRequest::toJson() const
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
bool UpdatePasswordPolicyRequest::fromJson(const web::json::value& val)
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
            UpdatePasswordPolicyReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePasswordPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdatePasswordPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdatePasswordPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdatePasswordPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdatePasswordPolicyRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void UpdatePasswordPolicyRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool UpdatePasswordPolicyRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void UpdatePasswordPolicyRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

UpdatePasswordPolicyReqBody UpdatePasswordPolicyRequest::getBody() const
{
    return body_;
}

void UpdatePasswordPolicyRequest::setBody(const UpdatePasswordPolicyReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePasswordPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePasswordPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


