

#include "huaweicloud/codeartsrepo/v4/model/DeleteGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteGroupRequest::DeleteGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    groupId_ = 0;
    groupIdIsSet_ = false;
}

DeleteGroupRequest::~DeleteGroupRequest() = default;

void DeleteGroupRequest::validate()
{
}

web::json::value DeleteGroupRequest::toJson() const
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
bool DeleteGroupRequest::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string DeleteGroupRequest::getProjectId() const
{
    return projectId_;
}

void DeleteGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t DeleteGroupRequest::getGroupId() const
{
    return groupId_;
}

void DeleteGroupRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


