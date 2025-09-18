

#include "huaweicloud/projectman/v4/model/ListDomainNotAddedProjectsV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListDomainNotAddedProjectsV4Response::ListDomainNotAddedProjectsV4Response()
{
    projectsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListDomainNotAddedProjectsV4Response::~ListDomainNotAddedProjectsV4Response() = default;

void ListDomainNotAddedProjectsV4Response::validate()
{
}

web::json::value ListDomainNotAddedProjectsV4Response::toJson() const
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
bool ListDomainNotAddedProjectsV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projects"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDomainNotAddedProjectsV4ResponseBody_projects> refVal;
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


std::vector<ListDomainNotAddedProjectsV4ResponseBody_projects>& ListDomainNotAddedProjectsV4Response::getProjects()
{
    return projects_;
}

void ListDomainNotAddedProjectsV4Response::setProjects(const std::vector<ListDomainNotAddedProjectsV4ResponseBody_projects>& value)
{
    projects_ = value;
    projectsIsSet_ = true;
}

bool ListDomainNotAddedProjectsV4Response::projectsIsSet() const
{
    return projectsIsSet_;
}

void ListDomainNotAddedProjectsV4Response::unsetprojects()
{
    projectsIsSet_ = false;
}

int32_t ListDomainNotAddedProjectsV4Response::getTotal() const
{
    return total_;
}

void ListDomainNotAddedProjectsV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDomainNotAddedProjectsV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListDomainNotAddedProjectsV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


