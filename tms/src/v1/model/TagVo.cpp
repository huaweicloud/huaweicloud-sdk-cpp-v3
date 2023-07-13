

#include "huaweicloud/tms/v1/model/TagVo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




TagVo::TagVo()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagVo::~TagVo() = default;

void TagVo::validate()
{
}

web::json::value TagVo::toJson() const
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

bool TagVo::fromJson(const web::json::value& val)
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

std::string TagVo::getKey() const
{
    return key_;
}

void TagVo::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagVo::keyIsSet() const
{
    return keyIsSet_;
}

void TagVo::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagVo::getValue() const
{
    return value_;
}

void TagVo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagVo::valueIsSet() const
{
    return valueIsSet_;
}

void TagVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


