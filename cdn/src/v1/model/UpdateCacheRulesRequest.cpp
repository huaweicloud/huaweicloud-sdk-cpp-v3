

#include "huaweicloud/cdn/v1/model/UpdateCacheRulesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateCacheRulesRequest::UpdateCacheRulesRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateCacheRulesRequest::~UpdateCacheRulesRequest() = default;

void UpdateCacheRulesRequest::validate()
{
}

web::json::value UpdateCacheRulesRequest::toJson() const
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

bool UpdateCacheRulesRequest::fromJson(const web::json::value& val)
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
            CacheConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateCacheRulesRequest::getDomainId() const
{
    return domainId_;
}

void UpdateCacheRulesRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateCacheRulesRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateCacheRulesRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateCacheRulesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateCacheRulesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateCacheRulesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateCacheRulesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

CacheConfigRequestBody UpdateCacheRulesRequest::getBody() const
{
    return body_;
}

void UpdateCacheRulesRequest::setBody(const CacheConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCacheRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCacheRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


