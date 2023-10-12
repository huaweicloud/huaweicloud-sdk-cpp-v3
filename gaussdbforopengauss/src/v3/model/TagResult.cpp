

#include "huaweicloud/gaussdbforopengauss/v3/model/TagResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




TagResult::TagResult()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagResult::~TagResult() = default;

void TagResult::validate()
{
}

web::json::value TagResult::toJson() const
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
bool TagResult::fromJson(const web::json::value& val)
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


std::string TagResult::getKey() const
{
    return key_;
}

void TagResult::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagResult::keyIsSet() const
{
    return keyIsSet_;
}

void TagResult::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagResult::getValue() const
{
    return value_;
}

void TagResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagResult::valueIsSet() const
{
    return valueIsSet_;
}

void TagResult::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


