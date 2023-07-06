

#include "huaweicloud/drs/v5/model/DbParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DbParam::DbParam()
{
    key_ = "";
    keyIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
}

DbParam::~DbParam() = default;

void DbParam::validate()
{
}

web::json::value DbParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(targetValueIsSet_) {
        val[utility::conversions::to_string_t("target_value")] = ModelBase::toJson(targetValue_);
    }

    return val;
}

bool DbParam::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetValue(refVal);
        }
    }
    return ok;
}

std::string DbParam::getKey() const
{
    return key_;
}

void DbParam::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DbParam::keyIsSet() const
{
    return keyIsSet_;
}

void DbParam::unsetkey()
{
    keyIsSet_ = false;
}

std::string DbParam::getTargetValue() const
{
    return targetValue_;
}

void DbParam::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool DbParam::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void DbParam::unsettargetValue()
{
    targetValueIsSet_ = false;
}

}
}
}
}
}


