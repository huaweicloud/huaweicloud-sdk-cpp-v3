

#include "huaweicloud/codeartsartifact/v2/model/ShowRepositoryRolesPrivilegeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowRepositoryRolesPrivilegeRequest::ShowRepositoryRolesPrivilegeRequest()
{
    repoId_ = "";
    repoIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowRepositoryRolesPrivilegeRequest::~ShowRepositoryRolesPrivilegeRequest() = default;

void ShowRepositoryRolesPrivilegeRequest::validate()
{
}

web::json::value ShowRepositoryRolesPrivilegeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("x-language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowRepositoryRolesPrivilegeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x-language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryRolesPrivilegeRequest::getRepoId() const
{
    return repoId_;
}

void ShowRepositoryRolesPrivilegeRequest::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ShowRepositoryRolesPrivilegeRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ShowRepositoryRolesPrivilegeRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ShowRepositoryRolesPrivilegeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowRepositoryRolesPrivilegeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowRepositoryRolesPrivilegeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowRepositoryRolesPrivilegeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


