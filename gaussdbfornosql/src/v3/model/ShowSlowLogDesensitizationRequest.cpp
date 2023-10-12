

#include "huaweicloud/gaussdbfornosql/v3/model/ShowSlowLogDesensitizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowSlowLogDesensitizationRequest::ShowSlowLogDesensitizationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSlowLogDesensitizationRequest::~ShowSlowLogDesensitizationRequest() = default;

void ShowSlowLogDesensitizationRequest::validate()
{
}

web::json::value ShowSlowLogDesensitizationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowSlowLogDesensitizationRequest::fromJson(const web::json::value& val)
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


std::string ShowSlowLogDesensitizationRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSlowLogDesensitizationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSlowLogDesensitizationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSlowLogDesensitizationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


