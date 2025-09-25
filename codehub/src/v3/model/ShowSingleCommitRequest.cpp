

#include "huaweicloud/codehub/v3/model/ShowSingleCommitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowSingleCommitRequest::ShowSingleCommitRequest()
{
    repoId_ = 0;
    repoIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    stats_ = false;
    statsIsSet_ = false;
}

ShowSingleCommitRequest::~ShowSingleCommitRequest() = default;

void ShowSingleCommitRequest::validate()
{
}

web::json::value ShowSingleCommitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(statsIsSet_) {
        val[utility::conversions::to_string_t("stats")] = ModelBase::toJson(stats_);
    }

    return val;
}
bool ShowSingleCommitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
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
    return ok;
}


int32_t ShowSingleCommitRequest::getRepoId() const
{
    return repoId_;
}

void ShowSingleCommitRequest::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ShowSingleCommitRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ShowSingleCommitRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ShowSingleCommitRequest::getSha() const
{
    return sha_;
}

void ShowSingleCommitRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowSingleCommitRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowSingleCommitRequest::unsetsha()
{
    shaIsSet_ = false;
}

bool ShowSingleCommitRequest::isStats() const
{
    return stats_;
}

void ShowSingleCommitRequest::setStats(bool value)
{
    stats_ = value;
    statsIsSet_ = true;
}

bool ShowSingleCommitRequest::statsIsSet() const
{
    return statsIsSet_;
}

void ShowSingleCommitRequest::unsetstats()
{
    statsIsSet_ = false;
}

}
}
}
}
}


