

#include "huaweicloud/projectman/v4/model/CustomField.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CustomField::CustomField()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
}

CustomField::~CustomField() = default;

void CustomField::validate()
{
}

web::json::value CustomField::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(newNameIsSet_) {
        val[utility::conversions::to_string_t("new_name")] = ModelBase::toJson(newName_);
    }

    return val;
}
bool CustomField::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("new_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewName(refVal);
        }
    }
    return ok;
}


std::string CustomField::getName() const
{
    return name_;
}

void CustomField::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CustomField::nameIsSet() const
{
    return nameIsSet_;
}

void CustomField::unsetname()
{
    nameIsSet_ = false;
}

std::string CustomField::getValue() const
{
    return value_;
}

void CustomField::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomField::valueIsSet() const
{
    return valueIsSet_;
}

void CustomField::unsetvalue()
{
    valueIsSet_ = false;
}

std::string CustomField::getNewName() const
{
    return newName_;
}

void CustomField::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool CustomField::newNameIsSet() const
{
    return newNameIsSet_;
}

void CustomField::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


