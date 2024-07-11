

#include "huaweicloud/codeartsdeploy/v2/model/UpdateHostClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateHostClusterRequest::UpdateHostClusterRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHostClusterRequest::~UpdateHostClusterRequest() = default;

void UpdateHostClusterRequest::validate()
{
}

web::json::value UpdateHostClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHostClusterRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            HostClusterRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHostClusterRequest::getGroupId() const
{
    return groupId_;
}

void UpdateHostClusterRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateHostClusterRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateHostClusterRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

HostClusterRequest UpdateHostClusterRequest::getBody() const
{
    return body_;
}

void UpdateHostClusterRequest::setBody(const HostClusterRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHostClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHostClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


