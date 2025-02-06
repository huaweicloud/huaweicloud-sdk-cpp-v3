

#include "huaweicloud/identitycenterstore/v1/model/GetUserIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetUserIdRequest::GetUserIdRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

GetUserIdRequest::~GetUserIdRequest() = default;

void GetUserIdRequest::validate()
{
}

web::json::value GetUserIdRequest::toJson() const
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
bool GetUserIdRequest::fromJson(const web::json::value& val)
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
            GetUserIdReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string GetUserIdRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetUserIdRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetUserIdRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetUserIdRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string GetUserIdRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GetUserIdRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GetUserIdRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GetUserIdRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

GetUserIdReqBody GetUserIdRequest::getBody() const
{
    return body_;
}

void GetUserIdRequest::setBody(const GetUserIdReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GetUserIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GetUserIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


