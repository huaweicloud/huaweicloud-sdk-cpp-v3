

#include "huaweicloud/projectman/v4/model/ShowWorkItemWrokflowConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowWorkItemWrokflowConfigRequest::ShowWorkItemWrokflowConfigRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    boardId_ = "";
    boardIdIsSet_ = false;
}

ShowWorkItemWrokflowConfigRequest::~ShowWorkItemWrokflowConfigRequest() = default;

void ShowWorkItemWrokflowConfigRequest::validate()
{
}

web::json::value ShowWorkItemWrokflowConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(boardIdIsSet_) {
        val[utility::conversions::to_string_t("board_id")] = ModelBase::toJson(boardId_);
    }

    return val;
}
bool ShowWorkItemWrokflowConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("board_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("board_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoardId(refVal);
        }
    }
    return ok;
}


std::string ShowWorkItemWrokflowConfigRequest::getProjectId() const
{
    return projectId_;
}

void ShowWorkItemWrokflowConfigRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowWorkItemWrokflowConfigRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowWorkItemWrokflowConfigRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowWorkItemWrokflowConfigRequest::getBoardId() const
{
    return boardId_;
}

void ShowWorkItemWrokflowConfigRequest::setBoardId(const std::string& value)
{
    boardId_ = value;
    boardIdIsSet_ = true;
}

bool ShowWorkItemWrokflowConfigRequest::boardIdIsSet() const
{
    return boardIdIsSet_;
}

void ShowWorkItemWrokflowConfigRequest::unsetboardId()
{
    boardIdIsSet_ = false;
}

}
}
}
}
}


