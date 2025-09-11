

#include "huaweicloud/dbss/v1/model/ShowSensitiveMaskSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowSensitiveMaskSwitchRequest::ShowSensitiveMaskSwitchRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSensitiveMaskSwitchRequest::~ShowSensitiveMaskSwitchRequest() = default;

void ShowSensitiveMaskSwitchRequest::validate()
{
}

web::json::value ShowSensitiveMaskSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowSensitiveMaskSwitchRequest::fromJson(const web::json::value& val)
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


std::string ShowSensitiveMaskSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSensitiveMaskSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSensitiveMaskSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSensitiveMaskSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


