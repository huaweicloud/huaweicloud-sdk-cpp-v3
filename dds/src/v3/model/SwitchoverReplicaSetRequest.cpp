

#include "huaweicloud/dds/v3/model/SwitchoverReplicaSetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SwitchoverReplicaSetRequest::SwitchoverReplicaSetRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SwitchoverReplicaSetRequest::~SwitchoverReplicaSetRequest() = default;

void SwitchoverReplicaSetRequest::validate()
{
}

web::json::value SwitchoverReplicaSetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool SwitchoverReplicaSetRequest::fromJson(const web::json::value& val)
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

std::string SwitchoverReplicaSetRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchoverReplicaSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchoverReplicaSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchoverReplicaSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


