

#include "huaweicloud/codeartsdeploy/v2/model/ShowDeploymentHostDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowDeploymentHostDetailRequest::ShowDeploymentHostDetailRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
}

ShowDeploymentHostDetailRequest::~ShowDeploymentHostDetailRequest() = default;

void ShowDeploymentHostDetailRequest::validate()
{
}

web::json::value ShowDeploymentHostDetailRequest::toJson() const
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
bool ShowDeploymentHostDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowDeploymentHostDetailRequest::getGroupId() const
{
    return groupId_;
}

void ShowDeploymentHostDetailRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowDeploymentHostDetailRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowDeploymentHostDetailRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowDeploymentHostDetailRequest::getHostId() const
{
    return hostId_;
}

void ShowDeploymentHostDetailRequest::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool ShowDeploymentHostDetailRequest::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void ShowDeploymentHostDetailRequest::unsethostId()
{
    hostIdIsSet_ = false;
}

}
}
}
}
}


