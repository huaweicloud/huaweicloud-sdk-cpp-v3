

#include "huaweicloud/geip/v3/model/CreateV2TagRequestBody_tag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateV2TagRequestBody_tag::CreateV2TagRequestBody_tag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CreateV2TagRequestBody_tag::~CreateV2TagRequestBody_tag() = default;

void CreateV2TagRequestBody_tag::validate()
{
}

web::json::value CreateV2TagRequestBody_tag::toJson() const
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
bool CreateV2TagRequestBody_tag::fromJson(const web::json::value& val)
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


std::string CreateV2TagRequestBody_tag::getKey() const
{
    return key_;
}

void CreateV2TagRequestBody_tag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CreateV2TagRequestBody_tag::keyIsSet() const
{
    return keyIsSet_;
}

void CreateV2TagRequestBody_tag::unsetkey()
{
    keyIsSet_ = false;
}

std::string CreateV2TagRequestBody_tag::getValue() const
{
    return value_;
}

void CreateV2TagRequestBody_tag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateV2TagRequestBody_tag::valueIsSet() const
{
    return valueIsSet_;
}

void CreateV2TagRequestBody_tag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


