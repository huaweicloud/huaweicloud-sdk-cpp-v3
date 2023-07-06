

#include "huaweicloud/cdn/v1/model/UpdateResponseHeaderRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateResponseHeaderRequest::UpdateResponseHeaderRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateResponseHeaderRequest::~UpdateResponseHeaderRequest() = default;

void UpdateResponseHeaderRequest::validate()
{
}

web::json::value UpdateResponseHeaderRequest::toJson() const
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

bool UpdateResponseHeaderRequest::fromJson(const web::json::value& val)
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
            HeaderBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateResponseHeaderRequest::getDomainId() const
{
    return domainId_;
}

void UpdateResponseHeaderRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateResponseHeaderRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateResponseHeaderRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateResponseHeaderRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateResponseHeaderRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateResponseHeaderRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateResponseHeaderRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

HeaderBody UpdateResponseHeaderRequest::getBody() const
{
    return body_;
}

void UpdateResponseHeaderRequest::setBody(const HeaderBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateResponseHeaderRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateResponseHeaderRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


