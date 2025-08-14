

#include "huaweicloud/identitycenterstore/v1/model/BatchListMfaDevicesForUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




BatchListMfaDevicesForUserRequest::BatchListMfaDevicesForUserRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchListMfaDevicesForUserRequest::~BatchListMfaDevicesForUserRequest() = default;

void BatchListMfaDevicesForUserRequest::validate()
{
}

web::json::value BatchListMfaDevicesForUserRequest::toJson() const
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
bool BatchListMfaDevicesForUserRequest::fromJson(const web::json::value& val)
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
            BatchListMfaDevicesForUserReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchListMfaDevicesForUserRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void BatchListMfaDevicesForUserRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool BatchListMfaDevicesForUserRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void BatchListMfaDevicesForUserRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string BatchListMfaDevicesForUserRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void BatchListMfaDevicesForUserRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool BatchListMfaDevicesForUserRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void BatchListMfaDevicesForUserRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

BatchListMfaDevicesForUserReqBody BatchListMfaDevicesForUserRequest::getBody() const
{
    return body_;
}

void BatchListMfaDevicesForUserRequest::setBody(const BatchListMfaDevicesForUserReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchListMfaDevicesForUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchListMfaDevicesForUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


