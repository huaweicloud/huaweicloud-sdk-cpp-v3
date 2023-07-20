

#include "huaweicloud/gaussdbfornosql/v3/model/ShowHighRiskCommandsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowHighRiskCommandsRequest::ShowHighRiskCommandsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowHighRiskCommandsRequest::~ShowHighRiskCommandsRequest() = default;

void ShowHighRiskCommandsRequest::validate()
{
}

web::json::value ShowHighRiskCommandsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool ShowHighRiskCommandsRequest::fromJson(const web::json::value& val)
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

std::string ShowHighRiskCommandsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowHighRiskCommandsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowHighRiskCommandsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowHighRiskCommandsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


