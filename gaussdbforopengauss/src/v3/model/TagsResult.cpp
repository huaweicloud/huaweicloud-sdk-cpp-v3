

#include "huaweicloud/gaussdbforopengauss/v3/model/TagsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




TagsResult::TagsResult()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

TagsResult::~TagsResult() = default;

void TagsResult::validate()
{
}

web::json::value TagsResult::toJson() const
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
bool TagsResult::fromJson(const web::json::value& val)
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


std::string TagsResult::getKey() const
{
    return key_;
}

void TagsResult::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsResult::keyIsSet() const
{
    return keyIsSet_;
}

void TagsResult::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagsResult::getValue()
{
    return value_;
}

void TagsResult::setValue(const std::vector<std::string>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagsResult::valueIsSet() const
{
    return valueIsSet_;
}

void TagsResult::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


