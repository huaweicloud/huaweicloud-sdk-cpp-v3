

#include "huaweicloud/cloudtest/v1/model/CustomFieldVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CustomFieldVo::CustomFieldVo()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    customFieldParam_ = "";
    customFieldParamIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

CustomFieldVo::~CustomFieldVo() = default;

void CustomFieldVo::validate()
{
}

web::json::value CustomFieldVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(customFieldParamIsSet_) {
        val[utility::conversions::to_string_t("custom_field_param")] = ModelBase::toJson(customFieldParam_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool CustomFieldVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("custom_field_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFieldParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string CustomFieldVo::getType() const
{
    return type_;
}

void CustomFieldVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CustomFieldVo::typeIsSet() const
{
    return typeIsSet_;
}

void CustomFieldVo::unsettype()
{
    typeIsSet_ = false;
}

std::string CustomFieldVo::getValue() const
{
    return value_;
}

void CustomFieldVo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomFieldVo::valueIsSet() const
{
    return valueIsSet_;
}

void CustomFieldVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string CustomFieldVo::getCustomFieldParam() const
{
    return customFieldParam_;
}

void CustomFieldVo::setCustomFieldParam(const std::string& value)
{
    customFieldParam_ = value;
    customFieldParamIsSet_ = true;
}

bool CustomFieldVo::customFieldParamIsSet() const
{
    return customFieldParamIsSet_;
}

void CustomFieldVo::unsetcustomFieldParam()
{
    customFieldParamIsSet_ = false;
}

std::string CustomFieldVo::getUserName() const
{
    return userName_;
}

void CustomFieldVo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CustomFieldVo::userNameIsSet() const
{
    return userNameIsSet_;
}

void CustomFieldVo::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


