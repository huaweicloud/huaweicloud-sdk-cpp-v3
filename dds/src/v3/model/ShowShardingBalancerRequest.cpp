

#include "huaweicloud/dds/v3/model/ShowShardingBalancerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowShardingBalancerRequest::ShowShardingBalancerRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowShardingBalancerRequest::~ShowShardingBalancerRequest() = default;

void ShowShardingBalancerRequest::validate()
{
}

web::json::value ShowShardingBalancerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool ShowShardingBalancerRequest::fromJson(const web::json::value& val)
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

std::string ShowShardingBalancerRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowShardingBalancerRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowShardingBalancerRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowShardingBalancerRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


