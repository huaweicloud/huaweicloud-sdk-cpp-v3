

#include "huaweicloud/projectman/v4/model/ScrumCustomField.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ScrumCustomField::ScrumCustomField()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ScrumCustomField::~ScrumCustomField() = default;

void ScrumCustomField::validate()
{
}

web::json::value ScrumCustomField::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ScrumCustomField::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string ScrumCustomField::getName() const
{
    return name_;
}

void ScrumCustomField::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ScrumCustomField::nameIsSet() const
{
    return nameIsSet_;
}

void ScrumCustomField::unsetname()
{
    nameIsSet_ = false;
}

std::string ScrumCustomField::getValue() const
{
    return value_;
}

void ScrumCustomField::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ScrumCustomField::valueIsSet() const
{
    return valueIsSet_;
}

void ScrumCustomField::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


