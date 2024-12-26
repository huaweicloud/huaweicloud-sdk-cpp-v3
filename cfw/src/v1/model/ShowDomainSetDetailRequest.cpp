

#include "huaweicloud/cfw/v1/model/ShowDomainSetDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowDomainSetDetailRequest::ShowDomainSetDetailRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    domainSetId_ = "";
    domainSetIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowDomainSetDetailRequest::~ShowDomainSetDetailRequest() = default;

void ShowDomainSetDetailRequest::validate()
{
}

web::json::value ShowDomainSetDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(domainSetIdIsSet_) {
        val[utility::conversions::to_string_t("domain_set_id")] = ModelBase::toJson(domainSetId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowDomainSetDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainSetId(refVal);
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
    return ok;
}


std::string ShowDomainSetDetailRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowDomainSetDetailRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowDomainSetDetailRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowDomainSetDetailRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ShowDomainSetDetailRequest::getDomainSetId() const
{
    return domainSetId_;
}

void ShowDomainSetDetailRequest::setDomainSetId(const std::string& value)
{
    domainSetId_ = value;
    domainSetIdIsSet_ = true;
}

bool ShowDomainSetDetailRequest::domainSetIdIsSet() const
{
    return domainSetIdIsSet_;
}

void ShowDomainSetDetailRequest::unsetdomainSetId()
{
    domainSetIdIsSet_ = false;
}

std::string ShowDomainSetDetailRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowDomainSetDetailRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowDomainSetDetailRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowDomainSetDetailRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


