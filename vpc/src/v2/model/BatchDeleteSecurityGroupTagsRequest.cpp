

#include "huaweicloud/vpc/v2/model/BatchDeleteSecurityGroupTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchDeleteSecurityGroupTagsRequest::BatchDeleteSecurityGroupTagsRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteSecurityGroupTagsRequest::~BatchDeleteSecurityGroupTagsRequest() = default;

void BatchDeleteSecurityGroupTagsRequest::validate()
{
}

web::json::value BatchDeleteSecurityGroupTagsRequest::toJson() const
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
bool BatchDeleteSecurityGroupTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteSecurityGroupTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteSecurityGroupTagsRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void BatchDeleteSecurityGroupTagsRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool BatchDeleteSecurityGroupTagsRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void BatchDeleteSecurityGroupTagsRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

BatchDeleteSecurityGroupTagsRequestBody BatchDeleteSecurityGroupTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteSecurityGroupTagsRequest::setBody(const BatchDeleteSecurityGroupTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSecurityGroupTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSecurityGroupTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


