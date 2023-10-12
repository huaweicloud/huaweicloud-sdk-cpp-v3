

#include "huaweicloud/cdn/v1/model/UpdateOriginHostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateOriginHostRequest::UpdateOriginHostRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateOriginHostRequest::~UpdateOriginHostRequest() = default;

void UpdateOriginHostRequest::validate()
{
}

web::json::value UpdateOriginHostRequest::toJson() const
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
bool UpdateOriginHostRequest::fromJson(const web::json::value& val)
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
            OriginHostRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateOriginHostRequest::getDomainId() const
{
    return domainId_;
}

void UpdateOriginHostRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateOriginHostRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateOriginHostRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateOriginHostRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateOriginHostRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateOriginHostRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateOriginHostRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

OriginHostRequest UpdateOriginHostRequest::getBody() const
{
    return body_;
}

void UpdateOriginHostRequest::setBody(const OriginHostRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateOriginHostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateOriginHostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


