

#include "huaweicloud/projectman/v4/model/ListProjectUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectUsersRequest::ListProjectUsersRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListProjectUsersRequest::~ListProjectUsersRequest() = default;

void ListProjectUsersRequest::validate()
{
}

web::json::value ListProjectUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListProjectUsersRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListProjectUsersRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectUsersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectUsersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectUsersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


