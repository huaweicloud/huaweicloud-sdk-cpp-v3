

#include "huaweicloud/dbss/v1/model/ShowSensitiveResultSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowSensitiveResultSwitchRequest::ShowSensitiveResultSwitchRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSensitiveResultSwitchRequest::~ShowSensitiveResultSwitchRequest() = default;

void ShowSensitiveResultSwitchRequest::validate()
{
}

web::json::value ShowSensitiveResultSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowSensitiveResultSwitchRequest::fromJson(const web::json::value& val)
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


std::string ShowSensitiveResultSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSensitiveResultSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSensitiveResultSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSensitiveResultSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


