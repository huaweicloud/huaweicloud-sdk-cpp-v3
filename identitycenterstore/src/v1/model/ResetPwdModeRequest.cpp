

#include "huaweicloud/identitycenterstore/v1/model/ResetPwdModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ResetPwdModeRequest::ResetPwdModeRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetPwdModeRequest::~ResetPwdModeRequest() = default;

void ResetPwdModeRequest::validate()
{
}

web::json::value ResetPwdModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetPwdModeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePwdModeReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetPwdModeRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ResetPwdModeRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ResetPwdModeRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ResetPwdModeRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ResetPwdModeRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ResetPwdModeRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ResetPwdModeRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ResetPwdModeRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ResetPwdModeRequest::getUserId() const
{
    return userId_;
}

void ResetPwdModeRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ResetPwdModeRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ResetPwdModeRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

UpdatePwdModeReqBody ResetPwdModeRequest::getBody() const
{
    return body_;
}

void ResetPwdModeRequest::setBody(const UpdatePwdModeReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetPwdModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetPwdModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


