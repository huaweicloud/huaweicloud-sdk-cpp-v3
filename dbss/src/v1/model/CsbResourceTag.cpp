

#include "huaweicloud/dbss/v1/model/CsbResourceTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CsbResourceTag::CsbResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CsbResourceTag::~CsbResourceTag() = default;

void CsbResourceTag::validate()
{
}

web::json::value CsbResourceTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CsbResourceTag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
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


std::string CsbResourceTag::getKey() const
{
    return key_;
}

void CsbResourceTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CsbResourceTag::keyIsSet() const
{
    return keyIsSet_;
}

void CsbResourceTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string CsbResourceTag::getValue() const
{
    return value_;
}

void CsbResourceTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CsbResourceTag::valueIsSet() const
{
    return valueIsSet_;
}

void CsbResourceTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


