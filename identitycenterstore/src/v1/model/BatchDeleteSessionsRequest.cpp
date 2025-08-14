

#include "huaweicloud/identitycenterstore/v1/model/BatchDeleteSessionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




BatchDeleteSessionsRequest::BatchDeleteSessionsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteSessionsRequest::~BatchDeleteSessionsRequest() = default;

void BatchDeleteSessionsRequest::validate()
{
}

web::json::value BatchDeleteSessionsRequest::toJson() const
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
bool BatchDeleteSessionsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteSessionsReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteSessionsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void BatchDeleteSessionsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool BatchDeleteSessionsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void BatchDeleteSessionsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string BatchDeleteSessionsRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void BatchDeleteSessionsRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool BatchDeleteSessionsRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void BatchDeleteSessionsRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string BatchDeleteSessionsRequest::getUserId() const
{
    return userId_;
}

void BatchDeleteSessionsRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool BatchDeleteSessionsRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void BatchDeleteSessionsRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

BatchDeleteSessionsReqBody BatchDeleteSessionsRequest::getBody() const
{
    return body_;
}

void BatchDeleteSessionsRequest::setBody(const BatchDeleteSessionsReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSessionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSessionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


