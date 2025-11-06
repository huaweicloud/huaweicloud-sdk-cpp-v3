

#include "huaweicloud/codeartsrepo/v4/model/ShowCommitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowCommitRequest::ShowCommitRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    stats_ = false;
    statsIsSet_ = false;
    showCodeChanges_ = false;
    showCodeChangesIsSet_ = false;
}

ShowCommitRequest::~ShowCommitRequest() = default;

void ShowCommitRequest::validate()
{
}

web::json::value ShowCommitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(statsIsSet_) {
        val[utility::conversions::to_string_t("stats")] = ModelBase::toJson(stats_);
    }
    if(showCodeChangesIsSet_) {
        val[utility::conversions::to_string_t("show_code_changes")] = ModelBase::toJson(showCodeChanges_);
    }

    return val;
}
bool ShowCommitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stats"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStats(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_code_changes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_code_changes"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowCodeChanges(refVal);
        }
    }
    return ok;
}


int32_t ShowCommitRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowCommitRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowCommitRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowCommitRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowCommitRequest::getSha() const
{
    return sha_;
}

void ShowCommitRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowCommitRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowCommitRequest::unsetsha()
{
    shaIsSet_ = false;
}

bool ShowCommitRequest::isStats() const
{
    return stats_;
}

void ShowCommitRequest::setStats(bool value)
{
    stats_ = value;
    statsIsSet_ = true;
}

bool ShowCommitRequest::statsIsSet() const
{
    return statsIsSet_;
}

void ShowCommitRequest::unsetstats()
{
    statsIsSet_ = false;
}

bool ShowCommitRequest::isShowCodeChanges() const
{
    return showCodeChanges_;
}

void ShowCommitRequest::setShowCodeChanges(bool value)
{
    showCodeChanges_ = value;
    showCodeChangesIsSet_ = true;
}

bool ShowCommitRequest::showCodeChangesIsSet() const
{
    return showCodeChangesIsSet_;
}

void ShowCommitRequest::unsetshowCodeChanges()
{
    showCodeChangesIsSet_ = false;
}

}
}
}
}
}


