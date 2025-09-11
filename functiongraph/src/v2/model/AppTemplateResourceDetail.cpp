

#include "huaweicloud/functiongraph/v2/model/AppTemplateResourceDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




AppTemplateResourceDetail::AppTemplateResourceDetail()
{
    resourceName_ = "";
    resourceNameIsSet_ = false;
    icon_ = "";
    iconIsSet_ = false;
    href_ = "";
    hrefIsSet_ = false;
}

AppTemplateResourceDetail::~AppTemplateResourceDetail() = default;

void AppTemplateResourceDetail::validate()
{
}

web::json::value AppTemplateResourceDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(iconIsSet_) {
        val[utility::conversions::to_string_t("icon")] = ModelBase::toJson(icon_);
    }
    if(hrefIsSet_) {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(href_);
    }

    return val;
}
bool AppTemplateResourceDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIcon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("href"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHref(refVal);
        }
    }
    return ok;
}


std::string AppTemplateResourceDetail::getResourceName() const
{
    return resourceName_;
}

void AppTemplateResourceDetail::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool AppTemplateResourceDetail::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void AppTemplateResourceDetail::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string AppTemplateResourceDetail::getIcon() const
{
    return icon_;
}

void AppTemplateResourceDetail::setIcon(const std::string& value)
{
    icon_ = value;
    iconIsSet_ = true;
}

bool AppTemplateResourceDetail::iconIsSet() const
{
    return iconIsSet_;
}

void AppTemplateResourceDetail::unseticon()
{
    iconIsSet_ = false;
}

std::string AppTemplateResourceDetail::getHref() const
{
    return href_;
}

void AppTemplateResourceDetail::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool AppTemplateResourceDetail::hrefIsSet() const
{
    return hrefIsSet_;
}

void AppTemplateResourceDetail::unsethref()
{
    hrefIsSet_ = false;
}

}
}
}
}
}


