

#include "huaweicloud/cdn/v1/model/UpdateDomainOriginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateDomainOriginRequest::UpdateDomainOriginRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainOriginRequest::~UpdateDomainOriginRequest() = default;

void UpdateDomainOriginRequest::validate()
{
}

web::json::value UpdateDomainOriginRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDomainOriginRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
            OriginRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainOriginRequest::getDomainId() const
{
    return domainId_;
}

void UpdateDomainOriginRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateDomainOriginRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateDomainOriginRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateDomainOriginRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateDomainOriginRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateDomainOriginRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateDomainOriginRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

OriginRequest UpdateDomainOriginRequest::getBody() const
{
    return body_;
}

void UpdateDomainOriginRequest::setBody(const OriginRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainOriginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainOriginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


