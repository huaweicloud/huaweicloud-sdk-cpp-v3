

#include "huaweicloud/ecs/v2/model/TemplateTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateTag::TemplateTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TemplateTag::~TemplateTag() = default;

void TemplateTag::validate()
{
}

web::json::value TemplateTag::toJson() const
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
bool TemplateTag::fromJson(const web::json::value& val)
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


std::string TemplateTag::getKey() const
{
    return key_;
}

void TemplateTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TemplateTag::keyIsSet() const
{
    return keyIsSet_;
}

void TemplateTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string TemplateTag::getValue() const
{
    return value_;
}

void TemplateTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TemplateTag::valueIsSet() const
{
    return valueIsSet_;
}

void TemplateTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


