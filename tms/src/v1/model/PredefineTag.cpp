

#include "huaweicloud/tms/v1/model/PredefineTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




PredefineTag::PredefineTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
}

PredefineTag::~PredefineTag() = default;

void PredefineTag::validate()
{
}

web::json::value PredefineTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}

bool PredefineTag::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}

std::string PredefineTag::getKey() const
{
    return key_;
}

void PredefineTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool PredefineTag::keyIsSet() const
{
    return keyIsSet_;
}

void PredefineTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string PredefineTag::getValue() const
{
    return value_;
}

void PredefineTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PredefineTag::valueIsSet() const
{
    return valueIsSet_;
}

void PredefineTag::unsetvalue()
{
    valueIsSet_ = false;
}

utility::datetime PredefineTag::getUpdateTime() const
{
    return updateTime_;
}

void PredefineTag::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool PredefineTag::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void PredefineTag::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


