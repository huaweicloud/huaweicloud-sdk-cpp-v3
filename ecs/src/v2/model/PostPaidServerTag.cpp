

#include "huaweicloud/ecs/v2/model/PostPaidServerTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerTag::PostPaidServerTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

PostPaidServerTag::~PostPaidServerTag() = default;

void PostPaidServerTag::validate()
{
}

web::json::value PostPaidServerTag::toJson() const
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
bool PostPaidServerTag::fromJson(const web::json::value& val)
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


std::string PostPaidServerTag::getKey() const
{
    return key_;
}

void PostPaidServerTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool PostPaidServerTag::keyIsSet() const
{
    return keyIsSet_;
}

void PostPaidServerTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string PostPaidServerTag::getValue() const
{
    return value_;
}

void PostPaidServerTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PostPaidServerTag::valueIsSet() const
{
    return valueIsSet_;
}

void PostPaidServerTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


