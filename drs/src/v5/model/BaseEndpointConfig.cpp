

#include "huaweicloud/drs/v5/model/BaseEndpointConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BaseEndpointConfig::BaseEndpointConfig()
{
    isTargetReadonly_ = false;
    isTargetReadonlyIsSet_ = false;
}

BaseEndpointConfig::~BaseEndpointConfig() = default;

void BaseEndpointConfig::validate()
{
}

web::json::value BaseEndpointConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isTargetReadonlyIsSet_) {
        val[utility::conversions::to_string_t("is_target_readonly")] = ModelBase::toJson(isTargetReadonly_);
    }

    return val;
}
bool BaseEndpointConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_target_readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_target_readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTargetReadonly(refVal);
        }
    }
    return ok;
}


bool BaseEndpointConfig::isIsTargetReadonly() const
{
    return isTargetReadonly_;
}

void BaseEndpointConfig::setIsTargetReadonly(bool value)
{
    isTargetReadonly_ = value;
    isTargetReadonlyIsSet_ = true;
}

bool BaseEndpointConfig::isTargetReadonlyIsSet() const
{
    return isTargetReadonlyIsSet_;
}

void BaseEndpointConfig::unsetisTargetReadonly()
{
    isTargetReadonlyIsSet_ = false;
}

}
}
}
}
}


