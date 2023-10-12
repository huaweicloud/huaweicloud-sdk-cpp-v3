

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchToSlaveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchToSlaveRequest::SwitchToSlaveRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SwitchToSlaveRequest::~SwitchToSlaveRequest() = default;

void SwitchToSlaveRequest::validate()
{
}

web::json::value SwitchToSlaveRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool SwitchToSlaveRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string SwitchToSlaveRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchToSlaveRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchToSlaveRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchToSlaveRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


