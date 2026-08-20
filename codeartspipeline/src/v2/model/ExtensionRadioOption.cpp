

#include "huaweicloud/codeartspipeline/v2/model/ExtensionRadioOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionRadioOption::ExtensionRadioOption()
{
    displayName_ = "";
    displayNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ExtensionRadioOption::~ExtensionRadioOption() = default;

void ExtensionRadioOption::validate()
{
}

web::json::value ExtensionRadioOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(displayName_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ExtensionRadioOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("displayName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ExtensionRadioOption::getDisplayName() const
{
    return displayName_;
}

void ExtensionRadioOption::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ExtensionRadioOption::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ExtensionRadioOption::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ExtensionRadioOption::getValue() const
{
    return value_;
}

void ExtensionRadioOption::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ExtensionRadioOption::valueIsSet() const
{
    return valueIsSet_;
}

void ExtensionRadioOption::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


