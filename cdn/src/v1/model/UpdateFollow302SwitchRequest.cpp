

#include "huaweicloud/cdn/v1/model/UpdateFollow302SwitchRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateFollow302SwitchRequest::UpdateFollow302SwitchRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFollow302SwitchRequest::~UpdateFollow302SwitchRequest() = default;

void UpdateFollow302SwitchRequest::validate()
{
}

web::json::value UpdateFollow302SwitchRequest::toJson() const
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

bool UpdateFollow302SwitchRequest::fromJson(const web::json::value& val)
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
            Follow302StatusRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateFollow302SwitchRequest::getDomainId() const
{
    return domainId_;
}

void UpdateFollow302SwitchRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateFollow302SwitchRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateFollow302SwitchRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateFollow302SwitchRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateFollow302SwitchRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateFollow302SwitchRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateFollow302SwitchRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

Follow302StatusRequest UpdateFollow302SwitchRequest::getBody() const
{
    return body_;
}

void UpdateFollow302SwitchRequest::setBody(const Follow302StatusRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFollow302SwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFollow302SwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


