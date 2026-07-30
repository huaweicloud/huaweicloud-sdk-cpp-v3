

#include "huaweicloud/modelarts/v1/model/InferTmsTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InferTmsTag::InferTmsTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

InferTmsTag::~InferTmsTag() = default;

void InferTmsTag::validate()
{
}

web::json::value InferTmsTag::toJson() const
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
bool InferTmsTag::fromJson(const web::json::value& val)
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


std::string InferTmsTag::getKey() const
{
    return key_;
}

void InferTmsTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool InferTmsTag::keyIsSet() const
{
    return keyIsSet_;
}

void InferTmsTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string InferTmsTag::getValue() const
{
    return value_;
}

void InferTmsTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool InferTmsTag::valueIsSet() const
{
    return valueIsSet_;
}

void InferTmsTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


