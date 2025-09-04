

#include "huaweicloud/iotdm/v5/model/ShowInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ShowInstanceRequest::ShowInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceRequest::~ShowInstanceRequest() = default;

void ShowInstanceRequest::validate()
{
}

web::json::value ShowInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowInstanceRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


