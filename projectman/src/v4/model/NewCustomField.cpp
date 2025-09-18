

#include "huaweicloud/projectman/v4/model/NewCustomField.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




NewCustomField::NewCustomField()
{
    customField_ = "";
    customFieldIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

NewCustomField::~NewCustomField() = default;

void NewCustomField::validate()
{
}

web::json::value NewCustomField::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customFieldIsSet_) {
        val[utility::conversions::to_string_t("custom_field")] = ModelBase::toJson(customField_);
    }
    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("field_name")] = ModelBase::toJson(fieldName_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool NewCustomField::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldName(refVal);
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


std::string NewCustomField::getCustomField() const
{
    return customField_;
}

void NewCustomField::setCustomField(const std::string& value)
{
    customField_ = value;
    customFieldIsSet_ = true;
}

bool NewCustomField::customFieldIsSet() const
{
    return customFieldIsSet_;
}

void NewCustomField::unsetcustomField()
{
    customFieldIsSet_ = false;
}

std::string NewCustomField::getFieldName() const
{
    return fieldName_;
}

void NewCustomField::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool NewCustomField::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void NewCustomField::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string NewCustomField::getValue() const
{
    return value_;
}

void NewCustomField::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool NewCustomField::valueIsSet() const
{
    return valueIsSet_;
}

void NewCustomField::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


