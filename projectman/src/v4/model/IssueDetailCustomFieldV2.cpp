

#include "huaweicloud/projectman/v4/model/IssueDetailCustomFieldV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueDetailCustomFieldV2::IssueDetailCustomFieldV2()
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

IssueDetailCustomFieldV2::~IssueDetailCustomFieldV2() = default;

void IssueDetailCustomFieldV2::validate()
{
}

web::json::value IssueDetailCustomFieldV2::toJson() const
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
bool IssueDetailCustomFieldV2::fromJson(const web::json::value& val)
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


std::string IssueDetailCustomFieldV2::getCustomField() const
{
    return customField_;
}

void IssueDetailCustomFieldV2::setCustomField(const std::string& value)
{
    customField_ = value;
    customFieldIsSet_ = true;
}

bool IssueDetailCustomFieldV2::customFieldIsSet() const
{
    return customFieldIsSet_;
}

void IssueDetailCustomFieldV2::unsetcustomField()
{
    customFieldIsSet_ = false;
}

std::string IssueDetailCustomFieldV2::getFieldName() const
{
    return fieldName_;
}

void IssueDetailCustomFieldV2::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool IssueDetailCustomFieldV2::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void IssueDetailCustomFieldV2::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string IssueDetailCustomFieldV2::getValue() const
{
    return value_;
}

void IssueDetailCustomFieldV2::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool IssueDetailCustomFieldV2::valueIsSet() const
{
    return valueIsSet_;
}

void IssueDetailCustomFieldV2::unsetvalue()
{
    valueIsSet_ = false;
}

std::string IssueDetailCustomFieldV2::getFieldType() const
{
    return fieldType_;
}

void IssueDetailCustomFieldV2::setFieldType(const std::string& value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool IssueDetailCustomFieldV2::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void IssueDetailCustomFieldV2::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

std::string IssueDetailCustomFieldV2::getDescription() const
{
    return description_;
}

void IssueDetailCustomFieldV2::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IssueDetailCustomFieldV2::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IssueDetailCustomFieldV2::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


