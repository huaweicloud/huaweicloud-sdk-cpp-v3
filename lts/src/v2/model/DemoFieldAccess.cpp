

#include "huaweicloud/lts/v2/model/DemoFieldAccess.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DemoFieldAccess::DemoFieldAccess()
{
    fieldName_ = "";
    fieldNameIsSet_ = false;
    fieldValue_ = "";
    fieldValueIsSet_ = false;
}

DemoFieldAccess::~DemoFieldAccess() = default;

void DemoFieldAccess::validate()
{
}

web::json::value DemoFieldAccess::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("field_name")] = ModelBase::toJson(fieldName_);
    }
    if(fieldValueIsSet_) {
        val[utility::conversions::to_string_t("field_value")] = ModelBase::toJson(fieldValue_);
    }

    return val;
}
bool DemoFieldAccess::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldValue(refVal);
        }
    }
    return ok;
}


std::string DemoFieldAccess::getFieldName() const
{
    return fieldName_;
}

void DemoFieldAccess::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool DemoFieldAccess::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void DemoFieldAccess::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string DemoFieldAccess::getFieldValue() const
{
    return fieldValue_;
}

void DemoFieldAccess::setFieldValue(const std::string& value)
{
    fieldValue_ = value;
    fieldValueIsSet_ = true;
}

bool DemoFieldAccess::fieldValueIsSet() const
{
    return fieldValueIsSet_;
}

void DemoFieldAccess::unsetfieldValue()
{
    fieldValueIsSet_ = false;
}

}
}
}
}
}


