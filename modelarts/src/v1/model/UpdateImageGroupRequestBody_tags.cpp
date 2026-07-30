

#include "huaweicloud/modelarts/v1/model/UpdateImageGroupRequestBody_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateImageGroupRequestBody_tags::UpdateImageGroupRequestBody_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

UpdateImageGroupRequestBody_tags::~UpdateImageGroupRequestBody_tags() = default;

void UpdateImageGroupRequestBody_tags::validate()
{
}

web::json::value UpdateImageGroupRequestBody_tags::toJson() const
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
bool UpdateImageGroupRequestBody_tags::fromJson(const web::json::value& val)
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


std::string UpdateImageGroupRequestBody_tags::getKey() const
{
    return key_;
}

void UpdateImageGroupRequestBody_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool UpdateImageGroupRequestBody_tags::keyIsSet() const
{
    return keyIsSet_;
}

void UpdateImageGroupRequestBody_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string UpdateImageGroupRequestBody_tags::getValue() const
{
    return value_;
}

void UpdateImageGroupRequestBody_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UpdateImageGroupRequestBody_tags::valueIsSet() const
{
    return valueIsSet_;
}

void UpdateImageGroupRequestBody_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


