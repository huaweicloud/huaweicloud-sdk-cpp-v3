

#include "huaweicloud/cdn/v2/model/ShowDomainFullConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainFullConfigRequest::ShowDomainFullConfigRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    showSpecialConfigs_ = "";
    showSpecialConfigsIsSet_ = false;
}

ShowDomainFullConfigRequest::~ShowDomainFullConfigRequest() = default;

void ShowDomainFullConfigRequest::validate()
{
}

web::json::value ShowDomainFullConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(showSpecialConfigsIsSet_) {
        val[utility::conversions::to_string_t("show_special_configs")] = ModelBase::toJson(showSpecialConfigs_);
    }

    return val;
}

bool ShowDomainFullConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("show_special_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_special_configs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowSpecialConfigs(refVal);
        }
    }
    return ok;
}

std::string ShowDomainFullConfigRequest::getDomainName() const
{
    return domainName_;
}

void ShowDomainFullConfigRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainFullConfigRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainFullConfigRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowDomainFullConfigRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowDomainFullConfigRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowDomainFullConfigRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowDomainFullConfigRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowDomainFullConfigRequest::getShowSpecialConfigs() const
{
    return showSpecialConfigs_;
}

void ShowDomainFullConfigRequest::setShowSpecialConfigs(const std::string& value)
{
    showSpecialConfigs_ = value;
    showSpecialConfigsIsSet_ = true;
}

bool ShowDomainFullConfigRequest::showSpecialConfigsIsSet() const
{
    return showSpecialConfigsIsSet_;
}

void ShowDomainFullConfigRequest::unsetshowSpecialConfigs()
{
    showSpecialConfigsIsSet_ = false;
}

}
}
}
}
}


