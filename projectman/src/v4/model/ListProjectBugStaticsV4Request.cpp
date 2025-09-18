

#include "huaweicloud/projectman/v4/model/ListProjectBugStaticsV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectBugStaticsV4Request::ListProjectBugStaticsV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListProjectBugStaticsV4Request::~ListProjectBugStaticsV4Request() = default;

void ListProjectBugStaticsV4Request::validate()
{
}

web::json::value ListProjectBugStaticsV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListProjectBugStaticsV4Request::fromJson(const web::json::value& val)
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


std::string ListProjectBugStaticsV4Request::getProjectId() const
{
    return projectId_;
}

void ListProjectBugStaticsV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectBugStaticsV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectBugStaticsV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


