

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDisasterRecoveryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDisasterRecoveryRequest::DeleteDisasterRecoveryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DeleteDisasterRecoveryRequest::~DeleteDisasterRecoveryRequest() = default;

void DeleteDisasterRecoveryRequest::validate()
{
}

web::json::value DeleteDisasterRecoveryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DeleteDisasterRecoveryRequest::fromJson(const web::json::value& val)
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


std::string DeleteDisasterRecoveryRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDisasterRecoveryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDisasterRecoveryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDisasterRecoveryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


