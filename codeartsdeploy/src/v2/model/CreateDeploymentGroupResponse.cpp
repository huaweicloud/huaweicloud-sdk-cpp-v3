

#include "huaweicloud/codeartsdeploy/v2/model/CreateDeploymentGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateDeploymentGroupResponse::CreateDeploymentGroupResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

CreateDeploymentGroupResponse::~CreateDeploymentGroupResponse() = default;

void CreateDeploymentGroupResponse::validate()
{
}

web::json::value CreateDeploymentGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool CreateDeploymentGroupResponse::fromJson(const web::json::value& val)
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


std::string CreateDeploymentGroupResponse::getGroupId() const
{
    return groupId_;
}

void CreateDeploymentGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateDeploymentGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateDeploymentGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


