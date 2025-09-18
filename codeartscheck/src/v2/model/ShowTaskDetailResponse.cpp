

#include "huaweicloud/codeartscheck/v2/model/ShowTaskDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskDetailResponse::ShowTaskDetailResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    gitBranch_ = "";
    gitBranchIsSet_ = false;
    lastCheckTime_ = "";
    lastCheckTimeIsSet_ = false;
    codeLineTotal_ = 0;
    codeLineTotalIsSet_ = false;
    codeLine_ = 0;
    codeLineIsSet_ = false;
    codeQuality_ = 0.0;
    codeQualityIsSet_ = false;
    issueCount_ = 0;
    issueCountIsSet_ = false;
    riskCoefficient_ = 0.0;
    riskCoefficientIsSet_ = false;
    duplicationRatio_ = "";
    duplicationRatioIsSet_ = false;
    complexityCount_ = 0;
    complexityCountIsSet_ = false;
    duplicatedLines_ = 0;
    duplicatedLinesIsSet_ = false;
    commentLines_ = 0;
    commentLinesIsSet_ = false;
    commentRatio_ = "";
    commentRatioIsSet_ = false;
    duplicatedBlocks_ = 0;
    duplicatedBlocksIsSet_ = false;
    lastExecTime_ = "";
    lastExecTimeIsSet_ = false;
    checkType_ = "";
    checkTypeIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    cyclomaticComplexityPerMethod_ = "";
    cyclomaticComplexityPerMethodIsSet_ = false;
    cyclomaticComplexityPerFile_ = "";
    cyclomaticComplexityPerFileIsSet_ = false;
    criticalCount_ = "";
    criticalCountIsSet_ = false;
    majorCount_ = "";
    majorCountIsSet_ = false;
    minorCount_ = "";
    minorCountIsSet_ = false;
    suggestionCount_ = "";
    suggestionCountIsSet_ = false;
    isAccess_ = "";
    isAccessIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    fileDuplicationRatio_ = "";
    fileDuplicationRatioIsSet_ = false;
}

ShowTaskDetailResponse::~ShowTaskDetailResponse() = default;

void ShowTaskDetailResponse::validate()
{
}

web::json::value ShowTaskDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(gitBranchIsSet_) {
        val[utility::conversions::to_string_t("git_branch")] = ModelBase::toJson(gitBranch_);
    }
    if(lastCheckTimeIsSet_) {
        val[utility::conversions::to_string_t("last_check_time")] = ModelBase::toJson(lastCheckTime_);
    }
    if(codeLineTotalIsSet_) {
        val[utility::conversions::to_string_t("code_line_total")] = ModelBase::toJson(codeLineTotal_);
    }
    if(codeLineIsSet_) {
        val[utility::conversions::to_string_t("code_line")] = ModelBase::toJson(codeLine_);
    }
    if(codeQualityIsSet_) {
        val[utility::conversions::to_string_t("code_quality")] = ModelBase::toJson(codeQuality_);
    }
    if(issueCountIsSet_) {
        val[utility::conversions::to_string_t("issue_count")] = ModelBase::toJson(issueCount_);
    }
    if(riskCoefficientIsSet_) {
        val[utility::conversions::to_string_t("risk_coefficient")] = ModelBase::toJson(riskCoefficient_);
    }
    if(duplicationRatioIsSet_) {
        val[utility::conversions::to_string_t("duplication_ratio")] = ModelBase::toJson(duplicationRatio_);
    }
    if(complexityCountIsSet_) {
        val[utility::conversions::to_string_t("complexity_count")] = ModelBase::toJson(complexityCount_);
    }
    if(duplicatedLinesIsSet_) {
        val[utility::conversions::to_string_t("duplicated_lines")] = ModelBase::toJson(duplicatedLines_);
    }
    if(commentLinesIsSet_) {
        val[utility::conversions::to_string_t("comment_lines")] = ModelBase::toJson(commentLines_);
    }
    if(commentRatioIsSet_) {
        val[utility::conversions::to_string_t("comment_ratio")] = ModelBase::toJson(commentRatio_);
    }
    if(duplicatedBlocksIsSet_) {
        val[utility::conversions::to_string_t("duplicated_blocks")] = ModelBase::toJson(duplicatedBlocks_);
    }
    if(lastExecTimeIsSet_) {
        val[utility::conversions::to_string_t("last_exec_time")] = ModelBase::toJson(lastExecTime_);
    }
    if(checkTypeIsSet_) {
        val[utility::conversions::to_string_t("check_type")] = ModelBase::toJson(checkType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(cyclomaticComplexityPerMethodIsSet_) {
        val[utility::conversions::to_string_t("cyclomatic_complexity_per_method")] = ModelBase::toJson(cyclomaticComplexityPerMethod_);
    }
    if(cyclomaticComplexityPerFileIsSet_) {
        val[utility::conversions::to_string_t("cyclomatic_complexity_per_file")] = ModelBase::toJson(cyclomaticComplexityPerFile_);
    }
    if(criticalCountIsSet_) {
        val[utility::conversions::to_string_t("critical_count")] = ModelBase::toJson(criticalCount_);
    }
    if(majorCountIsSet_) {
        val[utility::conversions::to_string_t("major_count")] = ModelBase::toJson(majorCount_);
    }
    if(minorCountIsSet_) {
        val[utility::conversions::to_string_t("minor_count")] = ModelBase::toJson(minorCount_);
    }
    if(suggestionCountIsSet_) {
        val[utility::conversions::to_string_t("suggestion_count")] = ModelBase::toJson(suggestionCount_);
    }
    if(isAccessIsSet_) {
        val[utility::conversions::to_string_t("is_access")] = ModelBase::toJson(isAccess_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(fileDuplicationRatioIsSet_) {
        val[utility::conversions::to_string_t("file_duplication_ratio")] = ModelBase::toJson(fileDuplicationRatio_);
    }

    return val;
}
bool ShowTaskDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_check_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_check_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCheckTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_line_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_line_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeLineTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_quality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_quality"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeQuality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_coefficient"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_coefficient"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskCoefficient(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duplication_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duplication_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuplicationRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("complexity_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("complexity_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComplexityCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duplicated_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duplicated_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuplicatedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duplicated_blocks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duplicated_blocks"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuplicatedBlocks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_exec_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_exec_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastExecTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cyclomatic_complexity_per_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cyclomatic_complexity_per_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCyclomaticComplexityPerMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cyclomatic_complexity_per_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cyclomatic_complexity_per_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCyclomaticComplexityPerFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("critical_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("critical_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCriticalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("major_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("major_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMajorCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minor_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minor_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinorCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggestion_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggestion_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_access"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_duplication_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_duplication_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileDuplicationRatio(refVal);
        }
    }
    return ok;
}


std::string ShowTaskDetailResponse::getTaskId() const
{
    return taskId_;
}

void ShowTaskDetailResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskDetailResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskDetailResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowTaskDetailResponse::getTaskName() const
{
    return taskName_;
}

void ShowTaskDetailResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ShowTaskDetailResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ShowTaskDetailResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowTaskDetailResponse::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowTaskDetailResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowTaskDetailResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ShowTaskDetailResponse::getGitUrl() const
{
    return gitUrl_;
}

void ShowTaskDetailResponse::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool ShowTaskDetailResponse::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void ShowTaskDetailResponse::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string ShowTaskDetailResponse::getGitBranch() const
{
    return gitBranch_;
}

void ShowTaskDetailResponse::setGitBranch(const std::string& value)
{
    gitBranch_ = value;
    gitBranchIsSet_ = true;
}

bool ShowTaskDetailResponse::gitBranchIsSet() const
{
    return gitBranchIsSet_;
}

void ShowTaskDetailResponse::unsetgitBranch()
{
    gitBranchIsSet_ = false;
}

std::string ShowTaskDetailResponse::getLastCheckTime() const
{
    return lastCheckTime_;
}

void ShowTaskDetailResponse::setLastCheckTime(const std::string& value)
{
    lastCheckTime_ = value;
    lastCheckTimeIsSet_ = true;
}

bool ShowTaskDetailResponse::lastCheckTimeIsSet() const
{
    return lastCheckTimeIsSet_;
}

void ShowTaskDetailResponse::unsetlastCheckTime()
{
    lastCheckTimeIsSet_ = false;
}

int32_t ShowTaskDetailResponse::getCodeLineTotal() const
{
    return codeLineTotal_;
}

void ShowTaskDetailResponse::setCodeLineTotal(int32_t value)
{
    codeLineTotal_ = value;
    codeLineTotalIsSet_ = true;
}

bool ShowTaskDetailResponse::codeLineTotalIsSet() const
{
    return codeLineTotalIsSet_;
}

void ShowTaskDetailResponse::unsetcodeLineTotal()
{
    codeLineTotalIsSet_ = false;
}

int32_t ShowTaskDetailResponse::getCodeLine() const
{
    return codeLine_;
}

void ShowTaskDetailResponse::setCodeLine(int32_t value)
{
    codeLine_ = value;
    codeLineIsSet_ = true;
}

bool ShowTaskDetailResponse::codeLineIsSet() const
{
    return codeLineIsSet_;
}

void ShowTaskDetailResponse::unsetcodeLine()
{
    codeLineIsSet_ = false;
}

double ShowTaskDetailResponse::getCodeQuality() const
{
    return codeQuality_;
}

void ShowTaskDetailResponse::setCodeQuality(double value)
{
    codeQuality_ = value;
    codeQualityIsSet_ = true;
}

bool ShowTaskDetailResponse::codeQualityIsSet() const
{
    return codeQualityIsSet_;
}

void ShowTaskDetailResponse::unsetcodeQuality()
{
    codeQualityIsSet_ = false;
}

int32_t ShowTaskDetailResponse::getIssueCount() const
{
    return issueCount_;
}

void ShowTaskDetailResponse::setIssueCount(int32_t value)
{
    issueCount_ = value;
    issueCountIsSet_ = true;
}

bool ShowTaskDetailResponse::issueCountIsSet() const
{
    return issueCountIsSet_;
}

void ShowTaskDetailResponse::unsetissueCount()
{
    issueCountIsSet_ = false;
}

double ShowTaskDetailResponse::getRiskCoefficient() const
{
    return riskCoefficient_;
}

void ShowTaskDetailResponse::setRiskCoefficient(double value)
{
    riskCoefficient_ = value;
    riskCoefficientIsSet_ = true;
}

bool ShowTaskDetailResponse::riskCoefficientIsSet() const
{
    return riskCoefficientIsSet_;
}

void ShowTaskDetailResponse::unsetriskCoefficient()
{
    riskCoefficientIsSet_ = false;
}

std::string ShowTaskDetailResponse::getDuplicationRatio() const
{
    return duplicationRatio_;
}

void ShowTaskDetailResponse::setDuplicationRatio(const std::string& value)
{
    duplicationRatio_ = value;
    duplicationRatioIsSet_ = true;
}

bool ShowTaskDetailResponse::duplicationRatioIsSet() const
{
    return duplicationRatioIsSet_;
}

void ShowTaskDetailResponse::unsetduplicationRatio()
{
    duplicationRatioIsSet_ = false;
}

int32_t ShowTaskDetailResponse::getComplexityCount() const
{
    return complexityCount_;
}

void ShowTaskDetailResponse::setComplexityCount(int32_t value)
{
    complexityCount_ = value;
    complexityCountIsSet_ = true;
}

bool ShowTaskDetailResponse::complexityCountIsSet() const
{
    return complexityCountIsSet_;
}

void ShowTaskDetailResponse::unsetcomplexityCount()
{
    complexityCountIsSet_ = false;
}

int32_t ShowTaskDetailResponse::getDuplicatedLines() const
{
    return duplicatedLines_;
}

void ShowTaskDetailResponse::setDuplicatedLines(int32_t value)
{
    duplicatedLines_ = value;
    duplicatedLinesIsSet_ = true;
}

bool ShowTaskDetailResponse::duplicatedLinesIsSet() const
{
    return duplicatedLinesIsSet_;
}

void ShowTaskDetailResponse::unsetduplicatedLines()
{
    duplicatedLinesIsSet_ = false;
}

int32_t ShowTaskDetailResponse::getCommentLines() const
{
    return commentLines_;
}

void ShowTaskDetailResponse::setCommentLines(int32_t value)
{
    commentLines_ = value;
    commentLinesIsSet_ = true;
}

bool ShowTaskDetailResponse::commentLinesIsSet() const
{
    return commentLinesIsSet_;
}

void ShowTaskDetailResponse::unsetcommentLines()
{
    commentLinesIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCommentRatio() const
{
    return commentRatio_;
}

void ShowTaskDetailResponse::setCommentRatio(const std::string& value)
{
    commentRatio_ = value;
    commentRatioIsSet_ = true;
}

bool ShowTaskDetailResponse::commentRatioIsSet() const
{
    return commentRatioIsSet_;
}

void ShowTaskDetailResponse::unsetcommentRatio()
{
    commentRatioIsSet_ = false;
}

int32_t ShowTaskDetailResponse::getDuplicatedBlocks() const
{
    return duplicatedBlocks_;
}

void ShowTaskDetailResponse::setDuplicatedBlocks(int32_t value)
{
    duplicatedBlocks_ = value;
    duplicatedBlocksIsSet_ = true;
}

bool ShowTaskDetailResponse::duplicatedBlocksIsSet() const
{
    return duplicatedBlocksIsSet_;
}

void ShowTaskDetailResponse::unsetduplicatedBlocks()
{
    duplicatedBlocksIsSet_ = false;
}

std::string ShowTaskDetailResponse::getLastExecTime() const
{
    return lastExecTime_;
}

void ShowTaskDetailResponse::setLastExecTime(const std::string& value)
{
    lastExecTime_ = value;
    lastExecTimeIsSet_ = true;
}

bool ShowTaskDetailResponse::lastExecTimeIsSet() const
{
    return lastExecTimeIsSet_;
}

void ShowTaskDetailResponse::unsetlastExecTime()
{
    lastExecTimeIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCheckType() const
{
    return checkType_;
}

void ShowTaskDetailResponse::setCheckType(const std::string& value)
{
    checkType_ = value;
    checkTypeIsSet_ = true;
}

bool ShowTaskDetailResponse::checkTypeIsSet() const
{
    return checkTypeIsSet_;
}

void ShowTaskDetailResponse::unsetcheckType()
{
    checkTypeIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowTaskDetailResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowTaskDetailResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowTaskDetailResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCyclomaticComplexityPerMethod() const
{
    return cyclomaticComplexityPerMethod_;
}

void ShowTaskDetailResponse::setCyclomaticComplexityPerMethod(const std::string& value)
{
    cyclomaticComplexityPerMethod_ = value;
    cyclomaticComplexityPerMethodIsSet_ = true;
}

bool ShowTaskDetailResponse::cyclomaticComplexityPerMethodIsSet() const
{
    return cyclomaticComplexityPerMethodIsSet_;
}

void ShowTaskDetailResponse::unsetcyclomaticComplexityPerMethod()
{
    cyclomaticComplexityPerMethodIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCyclomaticComplexityPerFile() const
{
    return cyclomaticComplexityPerFile_;
}

void ShowTaskDetailResponse::setCyclomaticComplexityPerFile(const std::string& value)
{
    cyclomaticComplexityPerFile_ = value;
    cyclomaticComplexityPerFileIsSet_ = true;
}

bool ShowTaskDetailResponse::cyclomaticComplexityPerFileIsSet() const
{
    return cyclomaticComplexityPerFileIsSet_;
}

void ShowTaskDetailResponse::unsetcyclomaticComplexityPerFile()
{
    cyclomaticComplexityPerFileIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCriticalCount() const
{
    return criticalCount_;
}

void ShowTaskDetailResponse::setCriticalCount(const std::string& value)
{
    criticalCount_ = value;
    criticalCountIsSet_ = true;
}

bool ShowTaskDetailResponse::criticalCountIsSet() const
{
    return criticalCountIsSet_;
}

void ShowTaskDetailResponse::unsetcriticalCount()
{
    criticalCountIsSet_ = false;
}

std::string ShowTaskDetailResponse::getMajorCount() const
{
    return majorCount_;
}

void ShowTaskDetailResponse::setMajorCount(const std::string& value)
{
    majorCount_ = value;
    majorCountIsSet_ = true;
}

bool ShowTaskDetailResponse::majorCountIsSet() const
{
    return majorCountIsSet_;
}

void ShowTaskDetailResponse::unsetmajorCount()
{
    majorCountIsSet_ = false;
}

std::string ShowTaskDetailResponse::getMinorCount() const
{
    return minorCount_;
}

void ShowTaskDetailResponse::setMinorCount(const std::string& value)
{
    minorCount_ = value;
    minorCountIsSet_ = true;
}

bool ShowTaskDetailResponse::minorCountIsSet() const
{
    return minorCountIsSet_;
}

void ShowTaskDetailResponse::unsetminorCount()
{
    minorCountIsSet_ = false;
}

std::string ShowTaskDetailResponse::getSuggestionCount() const
{
    return suggestionCount_;
}

void ShowTaskDetailResponse::setSuggestionCount(const std::string& value)
{
    suggestionCount_ = value;
    suggestionCountIsSet_ = true;
}

bool ShowTaskDetailResponse::suggestionCountIsSet() const
{
    return suggestionCountIsSet_;
}

void ShowTaskDetailResponse::unsetsuggestionCount()
{
    suggestionCountIsSet_ = false;
}

std::string ShowTaskDetailResponse::getIsAccess() const
{
    return isAccess_;
}

void ShowTaskDetailResponse::setIsAccess(const std::string& value)
{
    isAccess_ = value;
    isAccessIsSet_ = true;
}

bool ShowTaskDetailResponse::isAccessIsSet() const
{
    return isAccessIsSet_;
}

void ShowTaskDetailResponse::unsetisAccess()
{
    isAccessIsSet_ = false;
}

std::string ShowTaskDetailResponse::getTriggerType() const
{
    return triggerType_;
}

void ShowTaskDetailResponse::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool ShowTaskDetailResponse::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void ShowTaskDetailResponse::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

std::string ShowTaskDetailResponse::getFileDuplicationRatio() const
{
    return fileDuplicationRatio_;
}

void ShowTaskDetailResponse::setFileDuplicationRatio(const std::string& value)
{
    fileDuplicationRatio_ = value;
    fileDuplicationRatioIsSet_ = true;
}

bool ShowTaskDetailResponse::fileDuplicationRatioIsSet() const
{
    return fileDuplicationRatioIsSet_;
}

void ShowTaskDetailResponse::unsetfileDuplicationRatio()
{
    fileDuplicationRatioIsSet_ = false;
}

}
}
}
}
}


