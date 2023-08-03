

#include "huaweicloud/rds/v3/model/TargetInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TargetInstanceRequest::TargetInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

TargetInstanceRequest::~TargetInstanceRequest() = default;

void TargetInstanceRequest::validate()
{
}

web::json::value TargetInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool TargetInstanceRequest::fromJson(const web::json::value& val)
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

std::string TargetInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void TargetInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool TargetInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void TargetInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


