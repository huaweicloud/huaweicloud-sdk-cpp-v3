

#include "huaweicloud/lts/v2/model/TagsResBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TagsResBody::TagsResBody()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagsResBody::~TagsResBody() = default;

void TagsResBody::validate()
{
}

web::json::value TagsResBody::toJson() const
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
bool TagsResBody::fromJson(const web::json::value& val)
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


std::string TagsResBody::getKey() const
{
    return key_;
}

void TagsResBody::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsResBody::keyIsSet() const
{
    return keyIsSet_;
}

void TagsResBody::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagsResBody::getValue() const
{
    return value_;
}

void TagsResBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagsResBody::valueIsSet() const
{
    return valueIsSet_;
}

void TagsResBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


