

#include "huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteDeploymentGroupRequest::DeleteDeploymentGroupRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

DeleteDeploymentGroupRequest::~DeleteDeploymentGroupRequest() = default;

void DeleteDeploymentGroupRequest::validate()
{
}

web::json::value DeleteDeploymentGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}

bool DeleteDeploymentGroupRequest::fromJson(const web::json::value& val)
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

std::string DeleteDeploymentGroupRequest::getGroupId() const
{
    return groupId_;
}

void DeleteDeploymentGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteDeploymentGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteDeploymentGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


