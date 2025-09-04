

#include "huaweicloud/iotdm/v5/model/DeleteInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




DeleteInstanceRequest::DeleteInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DeleteInstanceRequest::~DeleteInstanceRequest() = default;

void DeleteInstanceRequest::validate()
{
}

web::json::value DeleteInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DeleteInstanceRequest::fromJson(const web::json::value& val)
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


std::string DeleteInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


