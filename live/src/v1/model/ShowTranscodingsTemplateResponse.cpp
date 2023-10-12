

#include "huaweicloud/live/v1/model/ShowTranscodingsTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowTranscodingsTemplateResponse::ShowTranscodingsTemplateResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    templatesIsSet_ = false;
}

ShowTranscodingsTemplateResponse::~ShowTranscodingsTemplateResponse() = default;

void ShowTranscodingsTemplateResponse::validate()
{
}

web::json::value ShowTranscodingsTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }

    return val;
}
bool ShowTranscodingsTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<AppQualityInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


int32_t ShowTranscodingsTemplateResponse::getTotal() const
{
    return total_;
}

void ShowTranscodingsTemplateResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTranscodingsTemplateResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTranscodingsTemplateResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ShowTranscodingsTemplateResponse::getDomain() const
{
    return domain_;
}

void ShowTranscodingsTemplateResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowTranscodingsTemplateResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ShowTranscodingsTemplateResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::vector<AppQualityInfo>& ShowTranscodingsTemplateResponse::getTemplates()
{
    return templates_;
}

void ShowTranscodingsTemplateResponse::setTemplates(const std::vector<AppQualityInfo>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ShowTranscodingsTemplateResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ShowTranscodingsTemplateResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


