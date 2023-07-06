

#include "huaweicloud/lts/v2/model/TagsBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TagsBody::TagsBody()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagsBody::~TagsBody() = default;

void TagsBody::validate()
{
}

web::json::value TagsBody::toJson() const
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

bool TagsBody::fromJson(const web::json::value& val)
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

std::string TagsBody::getKey() const
{
    return key_;
}

void TagsBody::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsBody::keyIsSet() const
{
    return keyIsSet_;
}

void TagsBody::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagsBody::getValue() const
{
    return value_;
}

void TagsBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagsBody::valueIsSet() const
{
    return valueIsSet_;
}

void TagsBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


