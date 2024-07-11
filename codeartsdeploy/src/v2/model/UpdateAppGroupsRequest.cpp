

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppGroupsRequest::UpdateAppGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAppGroupsRequest::~UpdateAppGroupsRequest() = default;

void UpdateAppGroupsRequest::validate()
{
}

web::json::value UpdateAppGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAppGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
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
            UpdateAppGroupsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAppGroupsRequest::getProjectId() const
{
    return projectId_;
}

void UpdateAppGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateAppGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateAppGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateAppGroupsRequest::getGroupId() const
{
    return groupId_;
}

void UpdateAppGroupsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateAppGroupsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateAppGroupsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

UpdateAppGroupsRequestBody UpdateAppGroupsRequest::getBody() const
{
    return body_;
}

void UpdateAppGroupsRequest::setBody(const UpdateAppGroupsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAppGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAppGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


