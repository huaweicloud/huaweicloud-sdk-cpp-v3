

#include "huaweicloud/codeartsrepo/v4/model/ShowRepoStatisticsSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepoStatisticsSummaryResponse::ShowRepoStatisticsSummaryResponse()
{
    repoName_ = "";
    repoNameIsSet_ = false;
    commitCount_ = 0;
    commitCountIsSet_ = false;
    repoSize_ = "";
    repoSizeIsSet_ = false;
    lastCommitTime_ = "";
    lastCommitTimeIsSet_ = false;
    codeLines_ = 0;
    codeLinesIsSet_ = false;
    branchCount_ = 0;
    branchCountIsSet_ = false;
}

ShowRepoStatisticsSummaryResponse::~ShowRepoStatisticsSummaryResponse() = default;

void ShowRepoStatisticsSummaryResponse::validate()
{
}

web::json::value ShowRepoStatisticsSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(commitCountIsSet_) {
        val[utility::conversions::to_string_t("commit_count")] = ModelBase::toJson(commitCount_);
    }
    if(repoSizeIsSet_) {
        val[utility::conversions::to_string_t("repo_size")] = ModelBase::toJson(repoSize_);
    }
    if(lastCommitTimeIsSet_) {
        val[utility::conversions::to_string_t("last_commit_time")] = ModelBase::toJson(lastCommitTime_);
    }
    if(codeLinesIsSet_) {
        val[utility::conversions::to_string_t("code_lines")] = ModelBase::toJson(codeLines_);
    }
    if(branchCountIsSet_) {
        val[utility::conversions::to_string_t("branch_count")] = ModelBase::toJson(branchCount_);
    }

    return val;
}
bool ShowRepoStatisticsSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_commit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_commit_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCommitTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchCount(refVal);
        }
    }
    return ok;
}


std::string ShowRepoStatisticsSummaryResponse::getRepoName() const
{
    return repoName_;
}

void ShowRepoStatisticsSummaryResponse::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool ShowRepoStatisticsSummaryResponse::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void ShowRepoStatisticsSummaryResponse::unsetrepoName()
{
    repoNameIsSet_ = false;
}

int32_t ShowRepoStatisticsSummaryResponse::getCommitCount() const
{
    return commitCount_;
}

void ShowRepoStatisticsSummaryResponse::setCommitCount(int32_t value)
{
    commitCount_ = value;
    commitCountIsSet_ = true;
}

bool ShowRepoStatisticsSummaryResponse::commitCountIsSet() const
{
    return commitCountIsSet_;
}

void ShowRepoStatisticsSummaryResponse::unsetcommitCount()
{
    commitCountIsSet_ = false;
}

std::string ShowRepoStatisticsSummaryResponse::getRepoSize() const
{
    return repoSize_;
}

void ShowRepoStatisticsSummaryResponse::setRepoSize(const std::string& value)
{
    repoSize_ = value;
    repoSizeIsSet_ = true;
}

bool ShowRepoStatisticsSummaryResponse::repoSizeIsSet() const
{
    return repoSizeIsSet_;
}

void ShowRepoStatisticsSummaryResponse::unsetrepoSize()
{
    repoSizeIsSet_ = false;
}

std::string ShowRepoStatisticsSummaryResponse::getLastCommitTime() const
{
    return lastCommitTime_;
}

void ShowRepoStatisticsSummaryResponse::setLastCommitTime(const std::string& value)
{
    lastCommitTime_ = value;
    lastCommitTimeIsSet_ = true;
}

bool ShowRepoStatisticsSummaryResponse::lastCommitTimeIsSet() const
{
    return lastCommitTimeIsSet_;
}

void ShowRepoStatisticsSummaryResponse::unsetlastCommitTime()
{
    lastCommitTimeIsSet_ = false;
}

int32_t ShowRepoStatisticsSummaryResponse::getCodeLines() const
{
    return codeLines_;
}

void ShowRepoStatisticsSummaryResponse::setCodeLines(int32_t value)
{
    codeLines_ = value;
    codeLinesIsSet_ = true;
}

bool ShowRepoStatisticsSummaryResponse::codeLinesIsSet() const
{
    return codeLinesIsSet_;
}

void ShowRepoStatisticsSummaryResponse::unsetcodeLines()
{
    codeLinesIsSet_ = false;
}

int32_t ShowRepoStatisticsSummaryResponse::getBranchCount() const
{
    return branchCount_;
}

void ShowRepoStatisticsSummaryResponse::setBranchCount(int32_t value)
{
    branchCount_ = value;
    branchCountIsSet_ = true;
}

bool ShowRepoStatisticsSummaryResponse::branchCountIsSet() const
{
    return branchCountIsSet_;
}

void ShowRepoStatisticsSummaryResponse::unsetbranchCount()
{
    branchCountIsSet_ = false;
}

}
}
}
}
}


