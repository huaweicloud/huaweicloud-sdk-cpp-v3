

#include "huaweicloud/gaussdbfornosql/v3/model/RestartInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestartInstanceRequest::RestartInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

RestartInstanceRequest::~RestartInstanceRequest() = default;

void RestartInstanceRequest::validate()
{
}

web::json::value RestartInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool RestartInstanceRequest::fromJson(const web::json::value& val)
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


std::string RestartInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void RestartInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestartInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestartInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


