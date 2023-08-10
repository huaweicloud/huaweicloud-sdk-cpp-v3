

#include "huaweicloud/codeartsdeploy/v2/model/ShowDeploymentGroupDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowDeploymentGroupDetailRequest::ShowDeploymentGroupDetailRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

ShowDeploymentGroupDetailRequest::~ShowDeploymentGroupDetailRequest() = default;

void ShowDeploymentGroupDetailRequest::validate()
{
}

web::json::value ShowDeploymentGroupDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}

bool ShowDeploymentGroupDetailRequest::fromJson(const web::json::value& val)
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

std::string ShowDeploymentGroupDetailRequest::getGroupId() const
{
    return groupId_;
}

void ShowDeploymentGroupDetailRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowDeploymentGroupDetailRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowDeploymentGroupDetailRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


