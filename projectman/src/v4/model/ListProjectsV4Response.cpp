

#include "huaweicloud/projectman/v4/model/ListProjectsV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectsV4Response::ListProjectsV4Response()
{
    projectsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListProjectsV4Response::~ListProjectsV4Response() = default;

void ListProjectsV4Response::validate()
{
}

web::json::value ListProjectsV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectsIsSet_) {
        val[utility::conversions::to_string_t("projects")] = ModelBase::toJson(projects_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListProjectsV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projects"));
        if(!fieldValue.is_null())
        {
            std::vector<ListProjectsV4ResponseBody_projects> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjects(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<ListProjectsV4ResponseBody_projects>& ListProjectsV4Response::getProjects()
{
    return projects_;
}

void ListProjectsV4Response::setProjects(const std::vector<ListProjectsV4ResponseBody_projects>& value)
{
    projects_ = value;
    projectsIsSet_ = true;
}

bool ListProjectsV4Response::projectsIsSet() const
{
    return projectsIsSet_;
}

void ListProjectsV4Response::unsetprojects()
{
    projectsIsSet_ = false;
}

int32_t ListProjectsV4Response::getTotal() const
{
    return total_;
}

void ListProjectsV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectsV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectsV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


