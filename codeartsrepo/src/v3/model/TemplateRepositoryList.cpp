

#include "huaweicloud/codeartsrepo/v3/model/TemplateRepositoryList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




TemplateRepositoryList::TemplateRepositoryList()
{
    projectsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

TemplateRepositoryList::~TemplateRepositoryList() = default;

void TemplateRepositoryList::validate()
{
}

web::json::value TemplateRepositoryList::toJson() const
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
bool TemplateRepositoryList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projects"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateRepository> refVal;
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


std::vector<TemplateRepository>& TemplateRepositoryList::getProjects()
{
    return projects_;
}

void TemplateRepositoryList::setProjects(const std::vector<TemplateRepository>& value)
{
    projects_ = value;
    projectsIsSet_ = true;
}

bool TemplateRepositoryList::projectsIsSet() const
{
    return projectsIsSet_;
}

void TemplateRepositoryList::unsetprojects()
{
    projectsIsSet_ = false;
}

int32_t TemplateRepositoryList::getTotal() const
{
    return total_;
}

void TemplateRepositoryList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool TemplateRepositoryList::totalIsSet() const
{
    return totalIsSet_;
}

void TemplateRepositoryList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


