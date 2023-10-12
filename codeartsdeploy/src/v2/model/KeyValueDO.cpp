

#include "huaweicloud/codeartsdeploy/v2/model/KeyValueDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




KeyValueDO::KeyValueDO()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

KeyValueDO::~KeyValueDO() = default;

void KeyValueDO::validate()
{
}

web::json::value KeyValueDO::toJson() const
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
bool KeyValueDO::fromJson(const web::json::value& val)
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


std::string KeyValueDO::getKey() const
{
    return key_;
}

void KeyValueDO::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool KeyValueDO::keyIsSet() const
{
    return keyIsSet_;
}

void KeyValueDO::unsetkey()
{
    keyIsSet_ = false;
}

std::string KeyValueDO::getValue() const
{
    return value_;
}

void KeyValueDO::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool KeyValueDO::valueIsSet() const
{
    return valueIsSet_;
}

void KeyValueDO::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


