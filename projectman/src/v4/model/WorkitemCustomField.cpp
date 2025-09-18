

#include "huaweicloud/projectman/v4/model/WorkitemCustomField.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkitemCustomField::WorkitemCustomField()
{
    fieldId_ = "";
    fieldIdIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
    fieldType_ = "";
    fieldTypeIsSet_ = false;
    fieldOptionSource_ = "";
    fieldOptionSourceIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

WorkitemCustomField::~WorkitemCustomField() = default;

void WorkitemCustomField::validate()
{
}

web::json::value WorkitemCustomField::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldIdIsSet_) {
        val[utility::conversions::to_string_t("field_id")] = ModelBase::toJson(fieldId_);
    }
    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("field_name")] = ModelBase::toJson(fieldName_);
    }
    if(fieldTypeIsSet_) {
        val[utility::conversions::to_string_t("field_type")] = ModelBase::toJson(fieldType_);
    }
    if(fieldOptionSourceIsSet_) {
        val[utility::conversions::to_string_t("field_option_source")] = ModelBase::toJson(fieldOptionSource_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool WorkitemCustomField::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("field_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("field_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_option_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_option_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldOptionSource(refVal);
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


std::string WorkitemCustomField::getFieldId() const
{
    return fieldId_;
}

void WorkitemCustomField::setFieldId(const std::string& value)
{
    fieldId_ = value;
    fieldIdIsSet_ = true;
}

bool WorkitemCustomField::fieldIdIsSet() const
{
    return fieldIdIsSet_;
}

void WorkitemCustomField::unsetfieldId()
{
    fieldIdIsSet_ = false;
}

std::string WorkitemCustomField::getFieldName() const
{
    return fieldName_;
}

void WorkitemCustomField::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool WorkitemCustomField::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void WorkitemCustomField::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string WorkitemCustomField::getFieldType() const
{
    return fieldType_;
}

void WorkitemCustomField::setFieldType(const std::string& value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool WorkitemCustomField::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void WorkitemCustomField::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

std::string WorkitemCustomField::getFieldOptionSource() const
{
    return fieldOptionSource_;
}

void WorkitemCustomField::setFieldOptionSource(const std::string& value)
{
    fieldOptionSource_ = value;
    fieldOptionSourceIsSet_ = true;
}

bool WorkitemCustomField::fieldOptionSourceIsSet() const
{
    return fieldOptionSourceIsSet_;
}

void WorkitemCustomField::unsetfieldOptionSource()
{
    fieldOptionSourceIsSet_ = false;
}

std::string WorkitemCustomField::getValue() const
{
    return value_;
}

void WorkitemCustomField::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool WorkitemCustomField::valueIsSet() const
{
    return valueIsSet_;
}

void WorkitemCustomField::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


