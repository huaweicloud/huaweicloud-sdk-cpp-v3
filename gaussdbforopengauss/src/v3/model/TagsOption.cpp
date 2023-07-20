

#include "huaweicloud/gaussdbforopengauss/v3/model/TagsOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




TagsOption::TagsOption()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagsOption::~TagsOption() = default;

void TagsOption::validate()
{
}

web::json::value TagsOption::toJson() const
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

bool TagsOption::fromJson(const web::json::value& val)
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

std::string TagsOption::getKey() const
{
    return key_;
}

void TagsOption::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsOption::keyIsSet() const
{
    return keyIsSet_;
}

void TagsOption::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagsOption::getValue() const
{
    return value_;
}

void TagsOption::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagsOption::valueIsSet() const
{
    return valueIsSet_;
}

void TagsOption::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


