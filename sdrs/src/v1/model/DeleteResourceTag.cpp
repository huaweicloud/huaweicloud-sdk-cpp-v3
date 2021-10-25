

#include "huaweicloud/sdrs/v1/model/DeleteResourceTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteResourceTag::DeleteResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

DeleteResourceTag::~DeleteResourceTag() = default;

void DeleteResourceTag::validate()
{
}

web::json::value DeleteResourceTag::toJson() const
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

bool DeleteResourceTag::fromJson(const web::json::value& val)
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


std::string DeleteResourceTag::getKey() const
{
    return key_;
}

void DeleteResourceTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteResourceTag::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteResourceTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string DeleteResourceTag::getValue() const
{
    return value_;
}

void DeleteResourceTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DeleteResourceTag::valueIsSet() const
{
    return valueIsSet_;
}

void DeleteResourceTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


