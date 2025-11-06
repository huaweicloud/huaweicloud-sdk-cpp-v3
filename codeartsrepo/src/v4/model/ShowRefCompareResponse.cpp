

#include "huaweicloud/codeartsrepo/v4/model/ShowRefCompareResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRefCompareResponse::ShowRefCompareResponse()
{
    commitIsSet_ = false;
    commitsIsSet_ = false;
    diffsIsSet_ = false;
    diffsFilesIsSet_ = false;
    compareTimeout_ = false;
    compareTimeoutIsSet_ = false;
    compareSameRef_ = false;
    compareSameRefIsSet_ = false;
    conflictFilesIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
    commitsCount_ = 0;
    commitsCountIsSet_ = false;
    diffsCount_ = 0;
    diffsCountIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ShowRefCompareResponse::~ShowRefCompareResponse() = default;

void ShowRefCompareResponse::validate()
{
}

web::json::value ShowRefCompareResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(commitsIsSet_) {
        val[utility::conversions::to_string_t("commits")] = ModelBase::toJson(commits_);
    }
    if(diffsIsSet_) {
        val[utility::conversions::to_string_t("diffs")] = ModelBase::toJson(diffs_);
    }
    if(diffsFilesIsSet_) {
        val[utility::conversions::to_string_t("diffs_files")] = ModelBase::toJson(diffsFiles_);
    }
    if(compareTimeoutIsSet_) {
        val[utility::conversions::to_string_t("compare_timeout")] = ModelBase::toJson(compareTimeout_);
    }
    if(compareSameRefIsSet_) {
        val[utility::conversions::to_string_t("compare_same_ref")] = ModelBase::toJson(compareSameRef_);
    }
    if(conflictFilesIsSet_) {
        val[utility::conversions::to_string_t("conflict_files")] = ModelBase::toJson(conflictFiles_);
    }
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }
    if(commitsCountIsSet_) {
        val[utility::conversions::to_string_t("commits_count")] = ModelBase::toJson(commitsCount_);
    }
    if(diffsCountIsSet_) {
        val[utility::conversions::to_string_t("diffs_count")] = ModelBase::toJson(diffsCount_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ShowRefCompareResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            CommitDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diffs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diffs"));
        if(!fieldValue.is_null())
        {
            std::vector<DiffDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diffs_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diffs_files"));
        if(!fieldValue.is_null())
        {
            std::vector<DiffDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffsFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_timeout"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_same_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_same_ref"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareSameRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conflict_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conflict_files"));
        if(!fieldValue.is_null())
        {
            std::vector<ConflictFileDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConflictFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("added_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("removed_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removed_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemovedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commits_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diffs_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diffs_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


CommitDto ShowRefCompareResponse::getCommit() const
{
    return commit_;
}

void ShowRefCompareResponse::setCommit(const CommitDto& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool ShowRefCompareResponse::commitIsSet() const
{
    return commitIsSet_;
}

void ShowRefCompareResponse::unsetcommit()
{
    commitIsSet_ = false;
}

std::vector<CommitDto>& ShowRefCompareResponse::getCommits()
{
    return commits_;
}

void ShowRefCompareResponse::setCommits(const std::vector<CommitDto>& value)
{
    commits_ = value;
    commitsIsSet_ = true;
}

bool ShowRefCompareResponse::commitsIsSet() const
{
    return commitsIsSet_;
}

void ShowRefCompareResponse::unsetcommits()
{
    commitsIsSet_ = false;
}

std::vector<DiffDto>& ShowRefCompareResponse::getDiffs()
{
    return diffs_;
}

void ShowRefCompareResponse::setDiffs(const std::vector<DiffDto>& value)
{
    diffs_ = value;
    diffsIsSet_ = true;
}

bool ShowRefCompareResponse::diffsIsSet() const
{
    return diffsIsSet_;
}

void ShowRefCompareResponse::unsetdiffs()
{
    diffsIsSet_ = false;
}

std::vector<DiffDto>& ShowRefCompareResponse::getDiffsFiles()
{
    return diffsFiles_;
}

void ShowRefCompareResponse::setDiffsFiles(const std::vector<DiffDto>& value)
{
    diffsFiles_ = value;
    diffsFilesIsSet_ = true;
}

bool ShowRefCompareResponse::diffsFilesIsSet() const
{
    return diffsFilesIsSet_;
}

void ShowRefCompareResponse::unsetdiffsFiles()
{
    diffsFilesIsSet_ = false;
}

bool ShowRefCompareResponse::isCompareTimeout() const
{
    return compareTimeout_;
}

void ShowRefCompareResponse::setCompareTimeout(bool value)
{
    compareTimeout_ = value;
    compareTimeoutIsSet_ = true;
}

bool ShowRefCompareResponse::compareTimeoutIsSet() const
{
    return compareTimeoutIsSet_;
}

void ShowRefCompareResponse::unsetcompareTimeout()
{
    compareTimeoutIsSet_ = false;
}

bool ShowRefCompareResponse::isCompareSameRef() const
{
    return compareSameRef_;
}

void ShowRefCompareResponse::setCompareSameRef(bool value)
{
    compareSameRef_ = value;
    compareSameRefIsSet_ = true;
}

bool ShowRefCompareResponse::compareSameRefIsSet() const
{
    return compareSameRefIsSet_;
}

void ShowRefCompareResponse::unsetcompareSameRef()
{
    compareSameRefIsSet_ = false;
}

std::vector<ConflictFileDto>& ShowRefCompareResponse::getConflictFiles()
{
    return conflictFiles_;
}

void ShowRefCompareResponse::setConflictFiles(const std::vector<ConflictFileDto>& value)
{
    conflictFiles_ = value;
    conflictFilesIsSet_ = true;
}

bool ShowRefCompareResponse::conflictFilesIsSet() const
{
    return conflictFilesIsSet_;
}

void ShowRefCompareResponse::unsetconflictFiles()
{
    conflictFilesIsSet_ = false;
}

int32_t ShowRefCompareResponse::getAddedLines() const
{
    return addedLines_;
}

void ShowRefCompareResponse::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool ShowRefCompareResponse::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void ShowRefCompareResponse::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t ShowRefCompareResponse::getRemovedLines() const
{
    return removedLines_;
}

void ShowRefCompareResponse::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool ShowRefCompareResponse::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void ShowRefCompareResponse::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

int32_t ShowRefCompareResponse::getCommitsCount() const
{
    return commitsCount_;
}

void ShowRefCompareResponse::setCommitsCount(int32_t value)
{
    commitsCount_ = value;
    commitsCountIsSet_ = true;
}

bool ShowRefCompareResponse::commitsCountIsSet() const
{
    return commitsCountIsSet_;
}

void ShowRefCompareResponse::unsetcommitsCount()
{
    commitsCountIsSet_ = false;
}

int32_t ShowRefCompareResponse::getDiffsCount() const
{
    return diffsCount_;
}

void ShowRefCompareResponse::setDiffsCount(int32_t value)
{
    diffsCount_ = value;
    diffsCountIsSet_ = true;
}

bool ShowRefCompareResponse::diffsCountIsSet() const
{
    return diffsCountIsSet_;
}

void ShowRefCompareResponse::unsetdiffsCount()
{
    diffsCountIsSet_ = false;
}

std::string ShowRefCompareResponse::getXTotal() const
{
    return xTotal_;
}

void ShowRefCompareResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ShowRefCompareResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ShowRefCompareResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


