

#include "huaweicloud/live/v1/model/DeleteTranscodingsTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteTranscodingsTemplateRequest::DeleteTranscodingsTemplateRequest()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
}

DeleteTranscodingsTemplateRequest::~DeleteTranscodingsTemplateRequest() = default;

void DeleteTranscodingsTemplateRequest::validate()
{
}

web::json::value DeleteTranscodingsTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }

    return val;
}

bool DeleteTranscodingsTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    return ok;
}


std::string DeleteTranscodingsTemplateRequest::getDomain() const
{
    return domain_;
}

void DeleteTranscodingsTemplateRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeleteTranscodingsTemplateRequest::domainIsSet() const
{
    return domainIsSet_;
}

void DeleteTranscodingsTemplateRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string DeleteTranscodingsTemplateRequest::getAppName() const
{
    return appName_;
}

void DeleteTranscodingsTemplateRequest::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool DeleteTranscodingsTemplateRequest::appNameIsSet() const
{
    return appNameIsSet_;
}

void DeleteTranscodingsTemplateRequest::unsetappName()
{
    appNameIsSet_ = false;
}

}
}
}
}
}


