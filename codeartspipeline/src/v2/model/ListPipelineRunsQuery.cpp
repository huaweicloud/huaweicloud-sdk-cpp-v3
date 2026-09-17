

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineRunsQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineRunsQuery::ListPipelineRunsQuery()
{
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    triggerTypeIsSet_ = false;
    executorIdsIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    showJobDetails_ = false;
    showJobDetailsIsSet_ = false;
    stageId_ = "";
    stageIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListPipelineRunsQuery::~ListPipelineRunsQuery() = default;

void ListPipelineRunsQuery::validate()
{
}

web::json::value ListPipelineRunsQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(executorIdsIsSet_) {
        val[utility::conversions::to_string_t("executor_ids")] = ModelBase::toJson(executorIds_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(showJobDetailsIsSet_) {
        val[utility::conversions::to_string_t("show_job_details")] = ModelBase::toJson(showJobDetails_);
    }
    if(stageIdIsSet_) {
        val[utility::conversions::to_string_t("stage_id")] = ModelBase::toJson(stageId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListPipelineRunsQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_job_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_job_details"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowJobDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListPipelineRunsQuery::getStatus()
{
    return status_;
}

void ListPipelineRunsQuery::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPipelineRunsQuery::statusIsSet() const
{
    return statusIsSet_;
}

void ListPipelineRunsQuery::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListPipelineRunsQuery::getStartTime() const
{
    return startTime_;
}

void ListPipelineRunsQuery::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListPipelineRunsQuery::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListPipelineRunsQuery::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListPipelineRunsQuery::getEndTime() const
{
    return endTime_;
}

void ListPipelineRunsQuery::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListPipelineRunsQuery::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListPipelineRunsQuery::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListPipelineRunsQuery::getUpdateTime() const
{
    return updateTime_;
}

void ListPipelineRunsQuery::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListPipelineRunsQuery::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListPipelineRunsQuery::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<std::string>& ListPipelineRunsQuery::getTriggerType()
{
    return triggerType_;
}

void ListPipelineRunsQuery::setTriggerType(const std::vector<std::string>& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool ListPipelineRunsQuery::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void ListPipelineRunsQuery::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

std::vector<std::string>& ListPipelineRunsQuery::getExecutorIds()
{
    return executorIds_;
}

void ListPipelineRunsQuery::setExecutorIds(const std::vector<std::string>& value)
{
    executorIds_ = value;
    executorIdsIsSet_ = true;
}

bool ListPipelineRunsQuery::executorIdsIsSet() const
{
    return executorIdsIsSet_;
}

void ListPipelineRunsQuery::unsetexecutorIds()
{
    executorIdsIsSet_ = false;
}

int64_t ListPipelineRunsQuery::getOffset() const
{
    return offset_;
}

void ListPipelineRunsQuery::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipelineRunsQuery::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipelineRunsQuery::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListPipelineRunsQuery::getLimit() const
{
    return limit_;
}

void ListPipelineRunsQuery::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipelineRunsQuery::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipelineRunsQuery::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPipelineRunsQuery::getSortKey() const
{
    return sortKey_;
}

void ListPipelineRunsQuery::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListPipelineRunsQuery::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListPipelineRunsQuery::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListPipelineRunsQuery::getSortDir() const
{
    return sortDir_;
}

void ListPipelineRunsQuery::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListPipelineRunsQuery::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListPipelineRunsQuery::unsetsortDir()
{
    sortDirIsSet_ = false;
}

bool ListPipelineRunsQuery::isShowJobDetails() const
{
    return showJobDetails_;
}

void ListPipelineRunsQuery::setShowJobDetails(bool value)
{
    showJobDetails_ = value;
    showJobDetailsIsSet_ = true;
}

bool ListPipelineRunsQuery::showJobDetailsIsSet() const
{
    return showJobDetailsIsSet_;
}

void ListPipelineRunsQuery::unsetshowJobDetails()
{
    showJobDetailsIsSet_ = false;
}

std::string ListPipelineRunsQuery::getStageId() const
{
    return stageId_;
}

void ListPipelineRunsQuery::setStageId(const std::string& value)
{
    stageId_ = value;
    stageIdIsSet_ = true;
}

bool ListPipelineRunsQuery::stageIdIsSet() const
{
    return stageIdIsSet_;
}

void ListPipelineRunsQuery::unsetstageId()
{
    stageIdIsSet_ = false;
}

std::string ListPipelineRunsQuery::getJobId() const
{
    return jobId_;
}

void ListPipelineRunsQuery::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListPipelineRunsQuery::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListPipelineRunsQuery::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


