

#include "huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentHostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteDeploymentHostRequest::DeleteDeploymentHostRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
}

DeleteDeploymentHostRequest::~DeleteDeploymentHostRequest() = default;

void DeleteDeploymentHostRequest::validate()
{
}

web::json::value DeleteDeploymentHostRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }

    return val;
}

bool DeleteDeploymentHostRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
        }
    }
    return ok;
}

std::string DeleteDeploymentHostRequest::getGroupId() const
{
    return groupId_;
}

void DeleteDeploymentHostRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteDeploymentHostRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteDeploymentHostRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeleteDeploymentHostRequest::getHostId() const
{
    return hostId_;
}

void DeleteDeploymentHostRequest::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool DeleteDeploymentHostRequest::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void DeleteDeploymentHostRequest::unsethostId()
{
    hostIdIsSet_ = false;
}

}
}
}
}
}


