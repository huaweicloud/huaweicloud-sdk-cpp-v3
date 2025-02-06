

#include "huaweicloud/identitycenterstore/v1/model/CreateUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateUserRequest::CreateUserRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateUserRequest::~CreateUserRequest() = default;

void CreateUserRequest::validate()
{
}

web::json::value CreateUserRequest::toJson() const
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
bool CreateUserRequest::fromJson(const web::json::value& val)
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
            CreateUserReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateUserRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateUserRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateUserRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateUserRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CreateUserRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateUserRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateUserRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateUserRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

CreateUserReqBody CreateUserRequest::getBody() const
{
    return body_;
}

void CreateUserRequest::setBody(const CreateUserReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


