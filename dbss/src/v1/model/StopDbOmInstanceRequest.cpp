

#include "huaweicloud/dbss/v1/model/StopDbOmInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StopDbOmInstanceRequest::StopDbOmInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

StopDbOmInstanceRequest::~StopDbOmInstanceRequest() = default;

void StopDbOmInstanceRequest::validate()
{
}

web::json::value StopDbOmInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool StopDbOmInstanceRequest::fromJson(const web::json::value& val)
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


std::string StopDbOmInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void StopDbOmInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopDbOmInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopDbOmInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


