

#include "huaweicloud/codeartsdeploy/v2/model/DeleteHostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteHostRequest::DeleteHostRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
}

DeleteHostRequest::~DeleteHostRequest() = default;

void DeleteHostRequest::validate()
{
}

web::json::value DeleteHostRequest::toJson() const
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
bool DeleteHostRequest::fromJson(const web::json::value& val)
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


std::string DeleteHostRequest::getGroupId() const
{
    return groupId_;
}

void DeleteHostRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteHostRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteHostRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeleteHostRequest::getHostId() const
{
    return hostId_;
}

void DeleteHostRequest::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool DeleteHostRequest::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void DeleteHostRequest::unsethostId()
{
    hostIdIsSet_ = false;
}

}
}
}
}
}


