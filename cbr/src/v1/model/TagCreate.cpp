

#include "huaweicloud/cbr/v1/model/TagCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




TagCreate::TagCreate()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagCreate::~TagCreate() = default;

void TagCreate::validate()
{
}

web::json::value TagCreate::toJson() const
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
bool TagCreate::fromJson(const web::json::value& val)
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


std::string TagCreate::getKey() const
{
    return key_;
}

void TagCreate::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagCreate::keyIsSet() const
{
    return keyIsSet_;
}

void TagCreate::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagCreate::getValue() const
{
    return value_;
}

void TagCreate::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagCreate::valueIsSet() const
{
    return valueIsSet_;
}

void TagCreate::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


