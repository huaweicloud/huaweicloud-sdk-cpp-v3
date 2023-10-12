

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstanceTagsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstanceTagsResult::ListInstanceTagsResult()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ListInstanceTagsResult::~ListInstanceTagsResult() = default;

void ListInstanceTagsResult::validate()
{
}

web::json::value ListInstanceTagsResult::toJson() const
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
bool ListInstanceTagsResult::fromJson(const web::json::value& val)
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


std::string ListInstanceTagsResult::getKey() const
{
    return key_;
}

void ListInstanceTagsResult::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ListInstanceTagsResult::keyIsSet() const
{
    return keyIsSet_;
}

void ListInstanceTagsResult::unsetkey()
{
    keyIsSet_ = false;
}

std::string ListInstanceTagsResult::getValue() const
{
    return value_;
}

void ListInstanceTagsResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ListInstanceTagsResult::valueIsSet() const
{
    return valueIsSet_;
}

void ListInstanceTagsResult::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


