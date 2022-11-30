

#include "huaweicloud/eip/v3/model/TagsInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




TagsInfo::TagsInfo()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagsInfo::~TagsInfo() = default;

void TagsInfo::validate()
{
}

web::json::value TagsInfo::toJson() const
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

bool TagsInfo::fromJson(const web::json::value& val)
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


std::string TagsInfo::getKey() const
{
    return key_;
}

void TagsInfo::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsInfo::keyIsSet() const
{
    return keyIsSet_;
}

void TagsInfo::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagsInfo::getValue() const
{
    return value_;
}

void TagsInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagsInfo::valueIsSet() const
{
    return valueIsSet_;
}

void TagsInfo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


