

#include "huaweicloud/vpc/v2/model/CreateSecurityGroupTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupTagRequest::CreateSecurityGroupTagRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSecurityGroupTagRequest::~CreateSecurityGroupTagRequest() = default;

void CreateSecurityGroupTagRequest::validate()
{
}

web::json::value CreateSecurityGroupTagRequest::toJson() const
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
bool CreateSecurityGroupTagRequest::fromJson(const web::json::value& val)
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
            CreateSecurityGroupTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSecurityGroupTagRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateSecurityGroupTagRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateSecurityGroupTagRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateSecurityGroupTagRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

CreateSecurityGroupTagRequestBody CreateSecurityGroupTagRequest::getBody() const
{
    return body_;
}

void CreateSecurityGroupTagRequest::setBody(const CreateSecurityGroupTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSecurityGroupTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSecurityGroupTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


