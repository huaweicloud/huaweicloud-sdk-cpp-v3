

#include "huaweicloud/gaussdbfornosql/v3/model/ShowInstanceRoleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowInstanceRoleRequest::ShowInstanceRoleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceRoleRequest::~ShowInstanceRoleRequest() = default;

void ShowInstanceRoleRequest::validate()
{
}

web::json::value ShowInstanceRoleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool ShowInstanceRoleRequest::fromJson(const web::json::value& val)
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

std::string ShowInstanceRoleRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceRoleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceRoleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceRoleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


