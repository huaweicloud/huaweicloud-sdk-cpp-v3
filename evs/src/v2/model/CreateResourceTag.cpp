

#include "huaweicloud/evs/v2/model/CreateResourceTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateResourceTag::CreateResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CreateResourceTag::~CreateResourceTag() = default;

void CreateResourceTag::validate()
{
}

web::json::value CreateResourceTag::toJson() const
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
bool CreateResourceTag::fromJson(const web::json::value& val)
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


std::string CreateResourceTag::getKey() const
{
    return key_;
}

void CreateResourceTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CreateResourceTag::keyIsSet() const
{
    return keyIsSet_;
}

void CreateResourceTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string CreateResourceTag::getValue() const
{
    return value_;
}

void CreateResourceTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateResourceTag::valueIsSet() const
{
    return valueIsSet_;
}

void CreateResourceTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


