

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchOverDisasterRecoveryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchOverDisasterRecoveryRequest::SwitchOverDisasterRecoveryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SwitchOverDisasterRecoveryRequest::~SwitchOverDisasterRecoveryRequest() = default;

void SwitchOverDisasterRecoveryRequest::validate()
{
}

web::json::value SwitchOverDisasterRecoveryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool SwitchOverDisasterRecoveryRequest::fromJson(const web::json::value& val)
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


std::string SwitchOverDisasterRecoveryRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchOverDisasterRecoveryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchOverDisasterRecoveryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchOverDisasterRecoveryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


