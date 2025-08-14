

#include "huaweicloud/identitycenter/v1/model/DisplayDataDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DisplayDataDto::DisplayDataDto()
{
    description_ = "";
    descriptionIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    iconUrl_ = "";
    iconUrlIsSet_ = false;
}

DisplayDataDto::~DisplayDataDto() = default;

void DisplayDataDto::validate()
{
}

web::json::value DisplayDataDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(iconUrlIsSet_) {
        val[utility::conversions::to_string_t("icon_url")] = ModelBase::toJson(iconUrl_);
    }

    return val;
}
bool DisplayDataDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIconUrl(refVal);
        }
    }
    return ok;
}


std::string DisplayDataDto::getDescription() const
{
    return description_;
}

void DisplayDataDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DisplayDataDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DisplayDataDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DisplayDataDto::getDisplayName() const
{
    return displayName_;
}

void DisplayDataDto::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool DisplayDataDto::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void DisplayDataDto::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string DisplayDataDto::getIconUrl() const
{
    return iconUrl_;
}

void DisplayDataDto::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool DisplayDataDto::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void DisplayDataDto::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

}
}
}
}
}


