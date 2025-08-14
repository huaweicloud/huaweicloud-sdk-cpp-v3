

#include "huaweicloud/identitycenter/v1/model/DisplayDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DisplayDto::DisplayDto()
{
    description_ = "";
    descriptionIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    icon_ = "";
    iconIsSet_ = false;
}

DisplayDto::~DisplayDto() = default;

void DisplayDto::validate()
{
}

web::json::value DisplayDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(iconIsSet_) {
        val[utility::conversions::to_string_t("icon")] = ModelBase::toJson(icon_);
    }

    return val;
}
bool DisplayDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("icon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIcon(refVal);
        }
    }
    return ok;
}


std::string DisplayDto::getDescription() const
{
    return description_;
}

void DisplayDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DisplayDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DisplayDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DisplayDto::getDisplayName() const
{
    return displayName_;
}

void DisplayDto::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool DisplayDto::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void DisplayDto::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string DisplayDto::getIcon() const
{
    return icon_;
}

void DisplayDto::setIcon(const std::string& value)
{
    icon_ = value;
    iconIsSet_ = true;
}

bool DisplayDto::iconIsSet() const
{
    return iconIsSet_;
}

void DisplayDto::unseticon()
{
    iconIsSet_ = false;
}

}
}
}
}
}


