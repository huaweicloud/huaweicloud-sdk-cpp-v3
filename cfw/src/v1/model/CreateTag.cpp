

#include "huaweicloud/cfw/v1/model/CreateTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateTag::CreateTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CreateTag::~CreateTag() = default;

void CreateTag::validate()
{
}

web::json::value CreateTag::toJson() const
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
bool CreateTag::fromJson(const web::json::value& val)
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


std::string CreateTag::getKey() const
{
    return key_;
}

void CreateTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CreateTag::keyIsSet() const
{
    return keyIsSet_;
}

void CreateTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string CreateTag::getValue() const
{
    return value_;
}

void CreateTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateTag::valueIsSet() const
{
    return valueIsSet_;
}

void CreateTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


