

#include "huaweicloud/identitycenterstore/v1/model/GetGroupIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetGroupIdRequest::GetGroupIdRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

GetGroupIdRequest::~GetGroupIdRequest() = default;

void GetGroupIdRequest::validate()
{
}

web::json::value GetGroupIdRequest::toJson() const
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
bool GetGroupIdRequest::fromJson(const web::json::value& val)
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
            GetGroupIdReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string GetGroupIdRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetGroupIdRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetGroupIdRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetGroupIdRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string GetGroupIdRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GetGroupIdRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GetGroupIdRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GetGroupIdRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

GetGroupIdReqBody GetGroupIdRequest::getBody() const
{
    return body_;
}

void GetGroupIdRequest::setBody(const GetGroupIdReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GetGroupIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GetGroupIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


