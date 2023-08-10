

#include "huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateDeploymentGroupResponse::UpdateDeploymentGroupResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

UpdateDeploymentGroupResponse::~UpdateDeploymentGroupResponse() = default;

void UpdateDeploymentGroupResponse::validate()
{
}

web::json::value UpdateDeploymentGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}

bool UpdateDeploymentGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}

std::string UpdateDeploymentGroupResponse::getGroupId() const
{
    return groupId_;
}

void UpdateDeploymentGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateDeploymentGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateDeploymentGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


