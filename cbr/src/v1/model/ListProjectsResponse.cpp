

#include "huaweicloud/cbr/v1/model/ListProjectsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListProjectsResponse::ListProjectsResponse()
{
    projectsIsSet_ = false;
    linksIsSet_ = false;
}

ListProjectsResponse::~ListProjectsResponse() = default;

void ListProjectsResponse::validate()
{
}

web::json::value ListProjectsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectsIsSet_) {
        val[utility::conversions::to_string_t("projects")] = ModelBase::toJson(projects_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}

bool ListProjectsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projects"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectsListInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjects(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            SelfLinksInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}

std::vector<ProjectsListInfo>& ListProjectsResponse::getProjects()
{
    return projects_;
}

void ListProjectsResponse::setProjects(const std::vector<ProjectsListInfo>& value)
{
    projects_ = value;
    projectsIsSet_ = true;
}

bool ListProjectsResponse::projectsIsSet() const
{
    return projectsIsSet_;
}

void ListProjectsResponse::unsetprojects()
{
    projectsIsSet_ = false;
}

SelfLinksInfo ListProjectsResponse::getLinks() const
{
    return links_;
}

void ListProjectsResponse::setLinks(const SelfLinksInfo& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ListProjectsResponse::linksIsSet() const
{
    return linksIsSet_;
}

void ListProjectsResponse::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


