

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRedisPitrPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRedisPitrPolicyRequest::ShowRedisPitrPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowRedisPitrPolicyRequest::~ShowRedisPitrPolicyRequest() = default;

void ShowRedisPitrPolicyRequest::validate()
{
}

web::json::value ShowRedisPitrPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowRedisPitrPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowRedisPitrPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRedisPitrPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRedisPitrPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRedisPitrPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


