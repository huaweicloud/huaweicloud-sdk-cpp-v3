

#include "huaweicloud/rds/v3/model/CheckWeakPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CheckWeakPasswordRequest::CheckWeakPasswordRequest()
{
    target_ = "";
    targetIsSet_ = false;
    engine_ = "";
    engineIsSet_ = false;
}

CheckWeakPasswordRequest::~CheckWeakPasswordRequest() = default;

void CheckWeakPasswordRequest::validate()
{
}

web::json::value CheckWeakPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }

    return val;
}
bool CheckWeakPasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    return ok;
}


std::string CheckWeakPasswordRequest::getTarget() const
{
    return target_;
}

void CheckWeakPasswordRequest::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool CheckWeakPasswordRequest::targetIsSet() const
{
    return targetIsSet_;
}

void CheckWeakPasswordRequest::unsettarget()
{
    targetIsSet_ = false;
}

std::string CheckWeakPasswordRequest::getEngine() const
{
    return engine_;
}

void CheckWeakPasswordRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool CheckWeakPasswordRequest::engineIsSet() const
{
    return engineIsSet_;
}

void CheckWeakPasswordRequest::unsetengine()
{
    engineIsSet_ = false;
}

}
}
}
}
}


