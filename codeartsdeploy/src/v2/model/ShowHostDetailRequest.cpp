

#include "huaweicloud/codeartsdeploy/v2/model/ShowHostDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowHostDetailRequest::ShowHostDetailRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
}

ShowHostDetailRequest::~ShowHostDetailRequest() = default;

void ShowHostDetailRequest::validate()
{
}

web::json::value ShowHostDetailRequest::toJson() const
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

bool ShowHostDetailRequest::fromJson(const web::json::value& val)
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

std::string ShowHostDetailRequest::getGroupId() const
{
    return groupId_;
}

void ShowHostDetailRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowHostDetailRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowHostDetailRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowHostDetailRequest::getHostId() const
{
    return hostId_;
}

void ShowHostDetailRequest::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool ShowHostDetailRequest::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void ShowHostDetailRequest::unsethostId()
{
    hostIdIsSet_ = false;
}

}
}
}
}
}


