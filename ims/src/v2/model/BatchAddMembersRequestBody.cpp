

#include "huaweicloud/ims/v2/model/BatchAddMembersRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchAddMembersRequestBody::BatchAddMembersRequestBody()
{
    imagesIsSet_ = false;
    projectsIsSet_ = false;
    domainsIsSet_ = false;
    organizationsIsSet_ = false;
}

BatchAddMembersRequestBody::~BatchAddMembersRequestBody() = default;

void BatchAddMembersRequestBody::validate()
{
}

web::json::value BatchAddMembersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imagesIsSet_) {
        val[utility::conversions::to_string_t("images")] = ModelBase::toJson(images_);
    }
    if(projectsIsSet_) {
        val[utility::conversions::to_string_t("projects")] = ModelBase::toJson(projects_);
    }
    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }
    if(organizationsIsSet_) {
        val[utility::conversions::to_string_t("organizations")] = ModelBase::toJson(organizations_);
    }

    return val;
}
bool BatchAddMembersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("images"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("images"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projects"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjects(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domains"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organizations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizations(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchAddMembersRequestBody::getImages()
{
    return images_;
}

void BatchAddMembersRequestBody::setImages(const std::vector<std::string>& value)
{
    images_ = value;
    imagesIsSet_ = true;
}

bool BatchAddMembersRequestBody::imagesIsSet() const
{
    return imagesIsSet_;
}

void BatchAddMembersRequestBody::unsetimages()
{
    imagesIsSet_ = false;
}

std::vector<std::string>& BatchAddMembersRequestBody::getProjects()
{
    return projects_;
}

void BatchAddMembersRequestBody::setProjects(const std::vector<std::string>& value)
{
    projects_ = value;
    projectsIsSet_ = true;
}

bool BatchAddMembersRequestBody::projectsIsSet() const
{
    return projectsIsSet_;
}

void BatchAddMembersRequestBody::unsetprojects()
{
    projectsIsSet_ = false;
}

std::vector<std::string>& BatchAddMembersRequestBody::getDomains()
{
    return domains_;
}

void BatchAddMembersRequestBody::setDomains(const std::vector<std::string>& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool BatchAddMembersRequestBody::domainsIsSet() const
{
    return domainsIsSet_;
}

void BatchAddMembersRequestBody::unsetdomains()
{
    domainsIsSet_ = false;
}

std::vector<std::string>& BatchAddMembersRequestBody::getOrganizations()
{
    return organizations_;
}

void BatchAddMembersRequestBody::setOrganizations(const std::vector<std::string>& value)
{
    organizations_ = value;
    organizationsIsSet_ = true;
}

bool BatchAddMembersRequestBody::organizationsIsSet() const
{
    return organizationsIsSet_;
}

void BatchAddMembersRequestBody::unsetorganizations()
{
    organizationsIsSet_ = false;
}

}
}
}
}
}


