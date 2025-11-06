

#include "huaweicloud/lts/v2/model/TagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TagsRequestBody::TagsRequestBody()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagsRequestBody::~TagsRequestBody() = default;

void TagsRequestBody::validate()
{
}

web::json::value TagsRequestBody::toJson() const
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
bool TagsRequestBody::fromJson(const web::json::value& val)
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


std::string TagsRequestBody::getKey() const
{
    return key_;
}

void TagsRequestBody::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsRequestBody::keyIsSet() const
{
    return keyIsSet_;
}

void TagsRequestBody::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagsRequestBody::getValue() const
{
    return value_;
}

void TagsRequestBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagsRequestBody::valueIsSet() const
{
    return valueIsSet_;
}

void TagsRequestBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


