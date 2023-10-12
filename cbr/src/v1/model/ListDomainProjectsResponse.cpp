

#include "huaweicloud/cbr/v1/model/ListDomainProjectsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListDomainProjectsResponse::ListDomainProjectsResponse()
{
    projectsIsSet_ = false;
}

ListDomainProjectsResponse::~ListDomainProjectsResponse() = default;

void ListDomainProjectsResponse::validate()
{
}

web::json::value ListDomainProjectsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectsIsSet_) {
        val[utility::conversions::to_string_t("projects")] = ModelBase::toJson(projects_);
    }

    return val;
}
bool ListDomainProjectsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projects"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainProjectsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjects(refVal);
        }
    }
    return ok;
}


std::vector<DomainProjectsInfo>& ListDomainProjectsResponse::getProjects()
{
    return projects_;
}

void ListDomainProjectsResponse::setProjects(const std::vector<DomainProjectsInfo>& value)
{
    projects_ = value;
    projectsIsSet_ = true;
}

bool ListDomainProjectsResponse::projectsIsSet() const
{
    return projectsIsSet_;
}

void ListDomainProjectsResponse::unsetprojects()
{
    projectsIsSet_ = false;
}

}
}
}
}
}


