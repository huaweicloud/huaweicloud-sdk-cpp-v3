

#include "huaweicloud/codeartsdeploy/v2/model/UpdateHostInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateHostInfoRequest::UpdateHostInfoRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHostInfoRequest::~UpdateHostInfoRequest() = default;

void UpdateHostInfoRequest::validate()
{
}

web::json::value UpdateHostInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHostInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeploymentHostRequestExternal refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHostInfoRequest::getGroupId() const
{
    return groupId_;
}

void UpdateHostInfoRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateHostInfoRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateHostInfoRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string UpdateHostInfoRequest::getHostId() const
{
    return hostId_;
}

void UpdateHostInfoRequest::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool UpdateHostInfoRequest::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void UpdateHostInfoRequest::unsethostId()
{
    hostIdIsSet_ = false;
}

DeploymentHostRequestExternal UpdateHostInfoRequest::getBody() const
{
    return body_;
}

void UpdateHostInfoRequest::setBody(const DeploymentHostRequestExternal& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHostInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHostInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


