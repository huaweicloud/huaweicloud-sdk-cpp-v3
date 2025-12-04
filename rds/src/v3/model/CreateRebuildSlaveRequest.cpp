

#include "huaweicloud/rds/v3/model/CreateRebuildSlaveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateRebuildSlaveRequest::CreateRebuildSlaveRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

CreateRebuildSlaveRequest::~CreateRebuildSlaveRequest() = default;

void CreateRebuildSlaveRequest::validate()
{
}

web::json::value CreateRebuildSlaveRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool CreateRebuildSlaveRequest::fromJson(const web::json::value& val)
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


std::string CreateRebuildSlaveRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateRebuildSlaveRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRebuildSlaveRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRebuildSlaveRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


