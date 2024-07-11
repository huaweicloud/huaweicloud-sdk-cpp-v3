

#include "huaweicloud/codeartsdeploy/v2/model/DeleteAppGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteAppGroupsRequest::DeleteAppGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

DeleteAppGroupsRequest::~DeleteAppGroupsRequest() = default;

void DeleteAppGroupsRequest::validate()
{
}

web::json::value DeleteAppGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool DeleteAppGroupsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteAppGroupsRequest::getProjectId() const
{
    return projectId_;
}

void DeleteAppGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteAppGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteAppGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteAppGroupsRequest::getGroupId() const
{
    return groupId_;
}

void DeleteAppGroupsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteAppGroupsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteAppGroupsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


