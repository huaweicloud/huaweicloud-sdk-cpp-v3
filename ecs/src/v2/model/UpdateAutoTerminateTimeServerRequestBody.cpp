

#include "huaweicloud/ecs/v2/model/UpdateAutoTerminateTimeServerRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateAutoTerminateTimeServerRequestBody::UpdateAutoTerminateTimeServerRequestBody()
{
    autoTerminateTime_ = "";
    autoTerminateTimeIsSet_ = false;
}

UpdateAutoTerminateTimeServerRequestBody::~UpdateAutoTerminateTimeServerRequestBody() = default;

void UpdateAutoTerminateTimeServerRequestBody::validate()
{
}

web::json::value UpdateAutoTerminateTimeServerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoTerminateTimeIsSet_) {
        val[utility::conversions::to_string_t("auto_terminate_time")] = ModelBase::toJson(autoTerminateTime_);
    }

    return val;
}

bool UpdateAutoTerminateTimeServerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_terminate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_terminate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoTerminateTime(refVal);
        }
    }
    return ok;
}


std::string UpdateAutoTerminateTimeServerRequestBody::getAutoTerminateTime() const
{
    return autoTerminateTime_;
}

void UpdateAutoTerminateTimeServerRequestBody::setAutoTerminateTime(const std::string& value)
{
    autoTerminateTime_ = value;
    autoTerminateTimeIsSet_ = true;
}

bool UpdateAutoTerminateTimeServerRequestBody::autoTerminateTimeIsSet() const
{
    return autoTerminateTimeIsSet_;
}

void UpdateAutoTerminateTimeServerRequestBody::unsetautoTerminateTime()
{
    autoTerminateTimeIsSet_ = false;
}

}
}
}
}
}


