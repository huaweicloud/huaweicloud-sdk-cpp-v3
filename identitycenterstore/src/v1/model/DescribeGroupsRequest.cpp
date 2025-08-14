

#include "huaweicloud/identitycenterstore/v1/model/DescribeGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeGroupsRequest::DescribeGroupsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

DescribeGroupsRequest::~DescribeGroupsRequest() = default;

void DescribeGroupsRequest::validate()
{
}

web::json::value DescribeGroupsRequest::toJson() const
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
bool DescribeGroupsRequest::fromJson(const web::json::value& val)
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
            DescribeGroupsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DescribeGroupsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeGroupsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeGroupsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeGroupsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DescribeGroupsRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribeGroupsRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribeGroupsRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribeGroupsRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

DescribeGroupsRequestBody DescribeGroupsRequest::getBody() const
{
    return body_;
}

void DescribeGroupsRequest::setBody(const DescribeGroupsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DescribeGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DescribeGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


