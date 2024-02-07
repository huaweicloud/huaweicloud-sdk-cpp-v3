

#include "huaweicloud/geip/v3/model/BatchCreateV2RequestBody_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateV2RequestBody_tags::BatchCreateV2RequestBody_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

BatchCreateV2RequestBody_tags::~BatchCreateV2RequestBody_tags() = default;

void BatchCreateV2RequestBody_tags::validate()
{
}

web::json::value BatchCreateV2RequestBody_tags::toJson() const
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
bool BatchCreateV2RequestBody_tags::fromJson(const web::json::value& val)
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


std::string BatchCreateV2RequestBody_tags::getKey() const
{
    return key_;
}

void BatchCreateV2RequestBody_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool BatchCreateV2RequestBody_tags::keyIsSet() const
{
    return keyIsSet_;
}

void BatchCreateV2RequestBody_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string BatchCreateV2RequestBody_tags::getValue() const
{
    return value_;
}

void BatchCreateV2RequestBody_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BatchCreateV2RequestBody_tags::valueIsSet() const
{
    return valueIsSet_;
}

void BatchCreateV2RequestBody_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


