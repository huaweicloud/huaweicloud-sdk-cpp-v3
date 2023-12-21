

#include "huaweicloud/ecs/v2/model/BatchAddServerTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAddServerTag::BatchAddServerTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

BatchAddServerTag::~BatchAddServerTag() = default;

void BatchAddServerTag::validate()
{
}

web::json::value BatchAddServerTag::toJson() const
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
bool BatchAddServerTag::fromJson(const web::json::value& val)
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


std::string BatchAddServerTag::getKey() const
{
    return key_;
}

void BatchAddServerTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool BatchAddServerTag::keyIsSet() const
{
    return keyIsSet_;
}

void BatchAddServerTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string BatchAddServerTag::getValue() const
{
    return value_;
}

void BatchAddServerTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BatchAddServerTag::valueIsSet() const
{
    return valueIsSet_;
}

void BatchAddServerTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


