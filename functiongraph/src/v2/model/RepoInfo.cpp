

#include "huaweicloud/functiongraph/v2/model/RepoInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




RepoInfo::RepoInfo()
{
    httpsUrl_ = "";
    httpsUrlIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    repoStatus_ = "";
    repoStatusIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

RepoInfo::~RepoInfo() = default;

void RepoInfo::validate()
{
}

web::json::value RepoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsUrlIsSet_) {
        val[utility::conversions::to_string_t("https_url")] = ModelBase::toJson(httpsUrl_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(repoStatusIsSet_) {
        val[utility::conversions::to_string_t("repo_status")] = ModelBase::toJson(repoStatus_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool RepoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
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


std::string RepoInfo::getHttpsUrl() const
{
    return httpsUrl_;
}

void RepoInfo::setHttpsUrl(const std::string& value)
{
    httpsUrl_ = value;
    httpsUrlIsSet_ = true;
}

bool RepoInfo::httpsUrlIsSet() const
{
    return httpsUrlIsSet_;
}

void RepoInfo::unsethttpsUrl()
{
    httpsUrlIsSet_ = false;
}

std::string RepoInfo::getWebUrl() const
{
    return webUrl_;
}

void RepoInfo::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool RepoInfo::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void RepoInfo::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string RepoInfo::getRepoStatus() const
{
    return repoStatus_;
}

void RepoInfo::setRepoStatus(const std::string& value)
{
    repoStatus_ = value;
    repoStatusIsSet_ = true;
}

bool RepoInfo::repoStatusIsSet() const
{
    return repoStatusIsSet_;
}

void RepoInfo::unsetrepoStatus()
{
    repoStatusIsSet_ = false;
}

std::string RepoInfo::getErrorMsg() const
{
    return errorMsg_;
}

void RepoInfo::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool RepoInfo::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void RepoInfo::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string RepoInfo::getProjectId() const
{
    return projectId_;
}

void RepoInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepoInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepoInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


