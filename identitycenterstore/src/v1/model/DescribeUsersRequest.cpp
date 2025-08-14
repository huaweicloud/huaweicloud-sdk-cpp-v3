

#include "huaweicloud/identitycenterstore/v1/model/DescribeUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeUsersRequest::DescribeUsersRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

DescribeUsersRequest::~DescribeUsersRequest() = default;

void DescribeUsersRequest::validate()
{
}

web::json::value DescribeUsersRequest::toJson() const
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
bool DescribeUsersRequest::fromJson(const web::json::value& val)
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
            DescribeUsersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DescribeUsersRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeUsersRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeUsersRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeUsersRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DescribeUsersRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribeUsersRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribeUsersRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribeUsersRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

DescribeUsersRequestBody DescribeUsersRequest::getBody() const
{
    return body_;
}

void DescribeUsersRequest::setBody(const DescribeUsersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DescribeUsersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DescribeUsersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


