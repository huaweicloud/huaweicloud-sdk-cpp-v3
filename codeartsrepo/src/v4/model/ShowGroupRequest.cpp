

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupRequest::ShowGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupRequest::~ShowGroupRequest() = default;

void ShowGroupRequest::validate()
{
}

web::json::value ShowGroupRequest::toJson() const
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
bool ShowGroupRequest::fromJson(const web::json::value& val)
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


std::string ShowGroupRequest::getProjectId() const
{
    return projectId_;
}

void ShowGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowGroupRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


