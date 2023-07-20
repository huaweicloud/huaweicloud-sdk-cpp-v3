

#include "huaweicloud/gaussdbfornosql/v3/model/BatchTagActionTagOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BatchTagActionTagOption::BatchTagActionTagOption()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

BatchTagActionTagOption::~BatchTagActionTagOption() = default;

void BatchTagActionTagOption::validate()
{
}

web::json::value BatchTagActionTagOption::toJson() const
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

bool BatchTagActionTagOption::fromJson(const web::json::value& val)
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

std::string BatchTagActionTagOption::getKey() const
{
    return key_;
}

void BatchTagActionTagOption::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool BatchTagActionTagOption::keyIsSet() const
{
    return keyIsSet_;
}

void BatchTagActionTagOption::unsetkey()
{
    keyIsSet_ = false;
}

std::string BatchTagActionTagOption::getValue() const
{
    return value_;
}

void BatchTagActionTagOption::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BatchTagActionTagOption::valueIsSet() const
{
    return valueIsSet_;
}

void BatchTagActionTagOption::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


