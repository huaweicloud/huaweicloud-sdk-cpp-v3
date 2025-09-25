

#include "huaweicloud/codehub/v3/model/RepositoryStatisticsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepositoryStatisticsVO::RepositoryStatisticsVO()
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
    archiveUrl_ = "";
    archiveUrlIsSet_ = false;
}

RepositoryStatisticsVO::~RepositoryStatisticsVO() = default;

void RepositoryStatisticsVO::validate()
{
}

web::json::value RepositoryStatisticsVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repoName")] = ModelBase::toJson(repoName_);
    }
    if(commitCountIsSet_) {
        val[utility::conversions::to_string_t("commitCount")] = ModelBase::toJson(commitCount_);
    }
    if(repoSizeIsSet_) {
        val[utility::conversions::to_string_t("repoSize")] = ModelBase::toJson(repoSize_);
    }
    if(lastCommitTimeIsSet_) {
        val[utility::conversions::to_string_t("lastCommitTime")] = ModelBase::toJson(lastCommitTime_);
    }
    if(codeLinesIsSet_) {
        val[utility::conversions::to_string_t("codeLines")] = ModelBase::toJson(codeLines_);
    }
    if(branchCountIsSet_) {
        val[utility::conversions::to_string_t("branchCount")] = ModelBase::toJson(branchCount_);
    }
    if(archiveUrlIsSet_) {
        val[utility::conversions::to_string_t("archiveUrl")] = ModelBase::toJson(archiveUrl_);
    }

    return val;
}
bool RepositoryStatisticsVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repoName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commitCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commitCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repoSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoSize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastCommitTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastCommitTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCommitTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codeLines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codeLines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branchCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branchCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archiveUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archiveUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchiveUrl(refVal);
        }
    }
    return ok;
}


std::string RepositoryStatisticsVO::getRepoName() const
{
    return repoName_;
}

void RepositoryStatisticsVO::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool RepositoryStatisticsVO::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void RepositoryStatisticsVO::unsetrepoName()
{
    repoNameIsSet_ = false;
}

int32_t RepositoryStatisticsVO::getCommitCount() const
{
    return commitCount_;
}

void RepositoryStatisticsVO::setCommitCount(int32_t value)
{
    commitCount_ = value;
    commitCountIsSet_ = true;
}

bool RepositoryStatisticsVO::commitCountIsSet() const
{
    return commitCountIsSet_;
}

void RepositoryStatisticsVO::unsetcommitCount()
{
    commitCountIsSet_ = false;
}

std::string RepositoryStatisticsVO::getRepoSize() const
{
    return repoSize_;
}

void RepositoryStatisticsVO::setRepoSize(const std::string& value)
{
    repoSize_ = value;
    repoSizeIsSet_ = true;
}

bool RepositoryStatisticsVO::repoSizeIsSet() const
{
    return repoSizeIsSet_;
}

void RepositoryStatisticsVO::unsetrepoSize()
{
    repoSizeIsSet_ = false;
}

std::string RepositoryStatisticsVO::getLastCommitTime() const
{
    return lastCommitTime_;
}

void RepositoryStatisticsVO::setLastCommitTime(const std::string& value)
{
    lastCommitTime_ = value;
    lastCommitTimeIsSet_ = true;
}

bool RepositoryStatisticsVO::lastCommitTimeIsSet() const
{
    return lastCommitTimeIsSet_;
}

void RepositoryStatisticsVO::unsetlastCommitTime()
{
    lastCommitTimeIsSet_ = false;
}

int32_t RepositoryStatisticsVO::getCodeLines() const
{
    return codeLines_;
}

void RepositoryStatisticsVO::setCodeLines(int32_t value)
{
    codeLines_ = value;
    codeLinesIsSet_ = true;
}

bool RepositoryStatisticsVO::codeLinesIsSet() const
{
    return codeLinesIsSet_;
}

void RepositoryStatisticsVO::unsetcodeLines()
{
    codeLinesIsSet_ = false;
}

int32_t RepositoryStatisticsVO::getBranchCount() const
{
    return branchCount_;
}

void RepositoryStatisticsVO::setBranchCount(int32_t value)
{
    branchCount_ = value;
    branchCountIsSet_ = true;
}

bool RepositoryStatisticsVO::branchCountIsSet() const
{
    return branchCountIsSet_;
}

void RepositoryStatisticsVO::unsetbranchCount()
{
    branchCountIsSet_ = false;
}

std::string RepositoryStatisticsVO::getArchiveUrl() const
{
    return archiveUrl_;
}

void RepositoryStatisticsVO::setArchiveUrl(const std::string& value)
{
    archiveUrl_ = value;
    archiveUrlIsSet_ = true;
}

bool RepositoryStatisticsVO::archiveUrlIsSet() const
{
    return archiveUrlIsSet_;
}

void RepositoryStatisticsVO::unsetarchiveUrl()
{
    archiveUrlIsSet_ = false;
}

}
}
}
}
}


