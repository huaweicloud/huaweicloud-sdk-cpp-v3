

#include "huaweicloud/ecs/v2/model/UpdateServerAutoTerminateTimeRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerAutoTerminateTimeRequestBody::UpdateServerAutoTerminateTimeRequestBody()
{
    autoTerminateTime_ = "";
    autoTerminateTimeIsSet_ = false;
}

UpdateServerAutoTerminateTimeRequestBody::~UpdateServerAutoTerminateTimeRequestBody() = default;

void UpdateServerAutoTerminateTimeRequestBody::validate()
{
}

web::json::value UpdateServerAutoTerminateTimeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoTerminateTimeIsSet_) {
        val[utility::conversions::to_string_t("auto_terminate_time")] = ModelBase::toJson(autoTerminateTime_);
    }

    return val;
}

bool UpdateServerAutoTerminateTimeRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateServerAutoTerminateTimeRequestBody::getAutoTerminateTime() const
{
    return autoTerminateTime_;
}

void UpdateServerAutoTerminateTimeRequestBody::setAutoTerminateTime(const std::string& value)
{
    autoTerminateTime_ = value;
    autoTerminateTimeIsSet_ = true;
}

bool UpdateServerAutoTerminateTimeRequestBody::autoTerminateTimeIsSet() const
{
    return autoTerminateTimeIsSet_;
}

void UpdateServerAutoTerminateTimeRequestBody::unsetautoTerminateTime()
{
    autoTerminateTimeIsSet_ = false;
}

}
}
}
}
}


