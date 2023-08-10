

#include "huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteDeploymentGroupResponse::DeleteDeploymentGroupResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

DeleteDeploymentGroupResponse::~DeleteDeploymentGroupResponse() = default;

void DeleteDeploymentGroupResponse::validate()
{
}

web::json::value DeleteDeploymentGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}

bool DeleteDeploymentGroupResponse::fromJson(const web::json::value& val)
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

std::string DeleteDeploymentGroupResponse::getGroupId() const
{
    return groupId_;
}

void DeleteDeploymentGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteDeploymentGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteDeploymentGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


