

#include "huaweicloud/identitycenter/v1/model/ApplicationTemplateDisplayDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ApplicationTemplateDisplayDto::ApplicationTemplateDisplayDto()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    displayIsSet_ = false;
    applicationType_ = "";
    applicationTypeIsSet_ = false;
}

ApplicationTemplateDisplayDto::~ApplicationTemplateDisplayDto() = default;

void ApplicationTemplateDisplayDto::validate()
{
}

web::json::value ApplicationTemplateDisplayDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(displayIsSet_) {
        val[utility::conversions::to_string_t("display")] = ModelBase::toJson(display_);
    }
    if(applicationTypeIsSet_) {
        val[utility::conversions::to_string_t("application_type")] = ModelBase::toJson(applicationType_);
    }

    return val;
}
bool ApplicationTemplateDisplayDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display"));
        if(!fieldValue.is_null())
        {
            DisplayDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationType(refVal);
        }
    }
    return ok;
}


std::string ApplicationTemplateDisplayDto::getApplicationId() const
{
    return applicationId_;
}

void ApplicationTemplateDisplayDto::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ApplicationTemplateDisplayDto::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ApplicationTemplateDisplayDto::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

DisplayDto ApplicationTemplateDisplayDto::getDisplay() const
{
    return display_;
}

void ApplicationTemplateDisplayDto::setDisplay(const DisplayDto& value)
{
    display_ = value;
    displayIsSet_ = true;
}

bool ApplicationTemplateDisplayDto::displayIsSet() const
{
    return displayIsSet_;
}

void ApplicationTemplateDisplayDto::unsetdisplay()
{
    displayIsSet_ = false;
}

std::string ApplicationTemplateDisplayDto::getApplicationType() const
{
    return applicationType_;
}

void ApplicationTemplateDisplayDto::setApplicationType(const std::string& value)
{
    applicationType_ = value;
    applicationTypeIsSet_ = true;
}

bool ApplicationTemplateDisplayDto::applicationTypeIsSet() const
{
    return applicationTypeIsSet_;
}

void ApplicationTemplateDisplayDto::unsetapplicationType()
{
    applicationTypeIsSet_ = false;
}

}
}
}
}
}


