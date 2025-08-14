

#include "huaweicloud/iotda/v5/model/PolicyTargetBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




PolicyTargetBase::PolicyTargetBase()
{
    targetType_ = "";
    targetTypeIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
}

PolicyTargetBase::~PolicyTargetBase() = default;

void PolicyTargetBase::validate()
{
}

web::json::value PolicyTargetBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }

    return val;
}
bool PolicyTargetBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    return ok;
}


std::string PolicyTargetBase::getTargetType() const
{
    return targetType_;
}

void PolicyTargetBase::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool PolicyTargetBase::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void PolicyTargetBase::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::string PolicyTargetBase::getTargetId() const
{
    return targetId_;
}

void PolicyTargetBase::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool PolicyTargetBase::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void PolicyTargetBase::unsettargetId()
{
    targetIdIsSet_ = false;
}

}
}
}
}
}


