

#include "huaweicloud/vpc/v2/model/BatchCreateSecurityGroupTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchCreateSecurityGroupTagsRequest::BatchCreateSecurityGroupTagsRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateSecurityGroupTagsRequest::~BatchCreateSecurityGroupTagsRequest() = default;

void BatchCreateSecurityGroupTagsRequest::validate()
{
}

web::json::value BatchCreateSecurityGroupTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateSecurityGroupTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateSecurityGroupTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateSecurityGroupTagsRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void BatchCreateSecurityGroupTagsRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool BatchCreateSecurityGroupTagsRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void BatchCreateSecurityGroupTagsRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

BatchCreateSecurityGroupTagsRequestBody BatchCreateSecurityGroupTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateSecurityGroupTagsRequest::setBody(const BatchCreateSecurityGroupTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateSecurityGroupTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateSecurityGroupTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


