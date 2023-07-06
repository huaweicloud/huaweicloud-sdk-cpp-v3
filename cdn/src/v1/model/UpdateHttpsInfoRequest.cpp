

#include "huaweicloud/cdn/v1/model/UpdateHttpsInfoRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateHttpsInfoRequest::UpdateHttpsInfoRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHttpsInfoRequest::~UpdateHttpsInfoRequest() = default;

void UpdateHttpsInfoRequest::validate()
{
}

web::json::value UpdateHttpsInfoRequest::toJson() const
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

bool UpdateHttpsInfoRequest::fromJson(const web::json::value& val)
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
            HttpInfoRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateHttpsInfoRequest::getDomainId() const
{
    return domainId_;
}

void UpdateHttpsInfoRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateHttpsInfoRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateHttpsInfoRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateHttpsInfoRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateHttpsInfoRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateHttpsInfoRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateHttpsInfoRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

HttpInfoRequest UpdateHttpsInfoRequest::getBody() const
{
    return body_;
}

void UpdateHttpsInfoRequest::setBody(const HttpInfoRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHttpsInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHttpsInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


