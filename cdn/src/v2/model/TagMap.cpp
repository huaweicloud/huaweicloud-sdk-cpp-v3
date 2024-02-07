

#include "huaweicloud/cdn/v2/model/TagMap.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TagMap::TagMap()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagMap::~TagMap() = default;

void TagMap::validate()
{
}

web::json::value TagMap::toJson() const
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
bool TagMap::fromJson(const web::json::value& val)
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


std::string TagMap::getKey() const
{
    return key_;
}

void TagMap::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagMap::keyIsSet() const
{
    return keyIsSet_;
}

void TagMap::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagMap::getValue() const
{
    return value_;
}

void TagMap::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagMap::valueIsSet() const
{
    return valueIsSet_;
}

void TagMap::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


