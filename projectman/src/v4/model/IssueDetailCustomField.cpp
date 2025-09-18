

#include "huaweicloud/projectman/v4/model/IssueDetailCustomField.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueDetailCustomField::IssueDetailCustomField()
{
    customField_ = "";
    customFieldIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    fieldType_ = "";
    fieldTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

IssueDetailCustomField::~IssueDetailCustomField() = default;

void IssueDetailCustomField::validate()
{
}

web::json::value IssueDetailCustomField::toJson() const
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
    if(fieldTypeIsSet_) {
        val[utility::conversions::to_string_t("field_type")] = ModelBase::toJson(fieldType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool IssueDetailCustomField::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("field_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string IssueDetailCustomField::getCustomField() const
{
    return customField_;
}

void IssueDetailCustomField::setCustomField(const std::string& value)
{
    customField_ = value;
    customFieldIsSet_ = true;
}

bool IssueDetailCustomField::customFieldIsSet() const
{
    return customFieldIsSet_;
}

void IssueDetailCustomField::unsetcustomField()
{
    customFieldIsSet_ = false;
}

std::string IssueDetailCustomField::getFieldName() const
{
    return fieldName_;
}

void IssueDetailCustomField::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool IssueDetailCustomField::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void IssueDetailCustomField::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string IssueDetailCustomField::getValue() const
{
    return value_;
}

void IssueDetailCustomField::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool IssueDetailCustomField::valueIsSet() const
{
    return valueIsSet_;
}

void IssueDetailCustomField::unsetvalue()
{
    valueIsSet_ = false;
}

std::string IssueDetailCustomField::getFieldType() const
{
    return fieldType_;
}

void IssueDetailCustomField::setFieldType(const std::string& value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool IssueDetailCustomField::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void IssueDetailCustomField::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

std::string IssueDetailCustomField::getDescription() const
{
    return description_;
}

void IssueDetailCustomField::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IssueDetailCustomField::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IssueDetailCustomField::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


