

#include "huaweicloud/cdn/v1/model/Map.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




Map::Map()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

Map::~Map() = default;

void Map::validate()
{
}

web::json::value Map::toJson() const
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
bool Map::fromJson(const web::json::value& val)
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


std::string Map::getKey() const
{
    return key_;
}

void Map::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Map::keyIsSet() const
{
    return keyIsSet_;
}

void Map::unsetkey()
{
    keyIsSet_ = false;
}

std::string Map::getValue() const
{
    return value_;
}

void Map::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Map::valueIsSet() const
{
    return valueIsSet_;
}

void Map::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


