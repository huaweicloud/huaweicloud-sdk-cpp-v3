

#include "huaweicloud/cloudtest/v1/model/NameAndValueAndCodeVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




NameAndValueAndCodeVo::NameAndValueAndCodeVo()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
}

NameAndValueAndCodeVo::~NameAndValueAndCodeVo() = default;

void NameAndValueAndCodeVo::validate()
{
}

web::json::value NameAndValueAndCodeVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }

    return val;
}
bool NameAndValueAndCodeVo::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    return ok;
}


std::string NameAndValueAndCodeVo::getName() const
{
    return name_;
}

void NameAndValueAndCodeVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NameAndValueAndCodeVo::nameIsSet() const
{
    return nameIsSet_;
}

void NameAndValueAndCodeVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t NameAndValueAndCodeVo::getValue() const
{
    return value_;
}

void NameAndValueAndCodeVo::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool NameAndValueAndCodeVo::valueIsSet() const
{
    return valueIsSet_;
}

void NameAndValueAndCodeVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string NameAndValueAndCodeVo::getCode() const
{
    return code_;
}

void NameAndValueAndCodeVo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool NameAndValueAndCodeVo::codeIsSet() const
{
    return codeIsSet_;
}

void NameAndValueAndCodeVo::unsetcode()
{
    codeIsSet_ = false;
}

}
}
}
}
}


