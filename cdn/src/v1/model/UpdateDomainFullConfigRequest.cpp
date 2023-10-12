

#include "huaweicloud/cdn/v1/model/UpdateDomainFullConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateDomainFullConfigRequest::UpdateDomainFullConfigRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainFullConfigRequest::~UpdateDomainFullConfigRequest() = default;

void UpdateDomainFullConfigRequest::validate()
{
}

web::json::value UpdateDomainFullConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDomainFullConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyDomainConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainFullConfigRequest::getDomainName() const
{
    return domainName_;
}

void UpdateDomainFullConfigRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateDomainFullConfigRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateDomainFullConfigRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string UpdateDomainFullConfigRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateDomainFullConfigRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateDomainFullConfigRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateDomainFullConfigRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

ModifyDomainConfigRequestBody UpdateDomainFullConfigRequest::getBody() const
{
    return body_;
}

void UpdateDomainFullConfigRequest::setBody(const ModifyDomainConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainFullConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainFullConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


