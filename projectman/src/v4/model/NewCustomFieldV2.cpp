

#include "huaweicloud/projectman/v4/model/NewCustomFieldV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




NewCustomFieldV2::NewCustomFieldV2()
{
    customField_ = "";
    customFieldIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

NewCustomFieldV2::~NewCustomFieldV2() = default;

void NewCustomFieldV2::validate()
{
}

web::json::value NewCustomFieldV2::toJson() const
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
bool NewCustomFieldV2::fromJson(const web::json::value& val)
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


std::string NewCustomFieldV2::getCustomField() const
{
    return customField_;
}

void NewCustomFieldV2::setCustomField(const std::string& value)
{
    customField_ = value;
    customFieldIsSet_ = true;
}

bool NewCustomFieldV2::customFieldIsSet() const
{
    return customFieldIsSet_;
}

void NewCustomFieldV2::unsetcustomField()
{
    customFieldIsSet_ = false;
}

std::string NewCustomFieldV2::getFieldName() const
{
    return fieldName_;
}

void NewCustomFieldV2::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool NewCustomFieldV2::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void NewCustomFieldV2::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string NewCustomFieldV2::getValue() const
{
    return value_;
}

void NewCustomFieldV2::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool NewCustomFieldV2::valueIsSet() const
{
    return valueIsSet_;
}

void NewCustomFieldV2::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


