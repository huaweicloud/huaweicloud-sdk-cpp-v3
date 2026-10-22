

#include "huaweicloud/evs/v2/model/ListResourceTagsResponseBody_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListResourceTagsResponseBody_tags::ListResourceTagsResponseBody_tags()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

ListResourceTagsResponseBody_tags::~ListResourceTagsResponseBody_tags() = default;

void ListResourceTagsResponseBody_tags::validate()
{
}

web::json::value ListResourceTagsResponseBody_tags::toJson() const
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
bool ListResourceTagsResponseBody_tags::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ListResourceTagsResponseBody_tags::getKey() const
{
    return key_;
}

void ListResourceTagsResponseBody_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ListResourceTagsResponseBody_tags::keyIsSet() const
{
    return keyIsSet_;
}

void ListResourceTagsResponseBody_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ListResourceTagsResponseBody_tags::getValue()
{
    return value_;
}

void ListResourceTagsResponseBody_tags::setValue(const std::vector<std::string>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ListResourceTagsResponseBody_tags::valueIsSet() const
{
    return valueIsSet_;
}

void ListResourceTagsResponseBody_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


