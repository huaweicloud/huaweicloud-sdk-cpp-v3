

#include "huaweicloud/dbss/v1/model/StartDbOmInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StartDbOmInstanceRequest::StartDbOmInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

StartDbOmInstanceRequest::~StartDbOmInstanceRequest() = default;

void StartDbOmInstanceRequest::validate()
{
}

web::json::value StartDbOmInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool StartDbOmInstanceRequest::fromJson(const web::json::value& val)
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


std::string StartDbOmInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void StartDbOmInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartDbOmInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartDbOmInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


