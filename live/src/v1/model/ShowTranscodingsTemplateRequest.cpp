

#include "huaweicloud/live/v1/model/ShowTranscodingsTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowTranscodingsTemplateRequest::ShowTranscodingsTemplateRequest()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ShowTranscodingsTemplateRequest::~ShowTranscodingsTemplateRequest() = default;

void ShowTranscodingsTemplateRequest::validate()
{
}

web::json::value ShowTranscodingsTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool ShowTranscodingsTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}

std::string ShowTranscodingsTemplateRequest::getDomain() const
{
    return domain_;
}

void ShowTranscodingsTemplateRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowTranscodingsTemplateRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ShowTranscodingsTemplateRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ShowTranscodingsTemplateRequest::getAppName() const
{
    return appName_;
}

void ShowTranscodingsTemplateRequest::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowTranscodingsTemplateRequest::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowTranscodingsTemplateRequest::unsetappName()
{
    appNameIsSet_ = false;
}

int32_t ShowTranscodingsTemplateRequest::getPage() const
{
    return page_;
}

void ShowTranscodingsTemplateRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ShowTranscodingsTemplateRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ShowTranscodingsTemplateRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ShowTranscodingsTemplateRequest::getSize() const
{
    return size_;
}

void ShowTranscodingsTemplateRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowTranscodingsTemplateRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowTranscodingsTemplateRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


