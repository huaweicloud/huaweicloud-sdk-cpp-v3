

#include "huaweicloud/cdn/v1/model/UpdateRangeSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateRangeSwitchRequest::UpdateRangeSwitchRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRangeSwitchRequest::~UpdateRangeSwitchRequest() = default;

void UpdateRangeSwitchRequest::validate()
{
}

web::json::value UpdateRangeSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRangeSwitchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RangeStatusRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRangeSwitchRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateRangeSwitchRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateRangeSwitchRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateRangeSwitchRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateRangeSwitchRequest::getDomainId() const
{
    return domainId_;
}

void UpdateRangeSwitchRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateRangeSwitchRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateRangeSwitchRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

RangeStatusRequest UpdateRangeSwitchRequest::getBody() const
{
    return body_;
}

void UpdateRangeSwitchRequest::setBody(const RangeStatusRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRangeSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRangeSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


