

#include "huaweicloud/projectman/v4/model/CustomFieldV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CustomFieldV2::CustomFieldV2()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
}

CustomFieldV2::~CustomFieldV2() = default;

void CustomFieldV2::validate()
{
}

web::json::value CustomFieldV2::toJson() const
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
bool CustomFieldV2::fromJson(const web::json::value& val)
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


std::string CustomFieldV2::getName() const
{
    return name_;
}

void CustomFieldV2::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CustomFieldV2::nameIsSet() const
{
    return nameIsSet_;
}

void CustomFieldV2::unsetname()
{
    nameIsSet_ = false;
}

std::string CustomFieldV2::getValue() const
{
    return value_;
}

void CustomFieldV2::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomFieldV2::valueIsSet() const
{
    return valueIsSet_;
}

void CustomFieldV2::unsetvalue()
{
    valueIsSet_ = false;
}

std::string CustomFieldV2::getNewName() const
{
    return newName_;
}

void CustomFieldV2::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool CustomFieldV2::newNameIsSet() const
{
    return newNameIsSet_;
}

void CustomFieldV2::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


