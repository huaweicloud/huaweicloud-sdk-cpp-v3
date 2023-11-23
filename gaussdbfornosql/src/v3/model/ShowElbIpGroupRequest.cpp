

#include "huaweicloud/gaussdbfornosql/v3/model/ShowElbIpGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowElbIpGroupRequest::ShowElbIpGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowElbIpGroupRequest::~ShowElbIpGroupRequest() = default;

void ShowElbIpGroupRequest::validate()
{
}

web::json::value ShowElbIpGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowElbIpGroupRequest::fromJson(const web::json::value& val)
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


std::string ShowElbIpGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowElbIpGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowElbIpGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowElbIpGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


