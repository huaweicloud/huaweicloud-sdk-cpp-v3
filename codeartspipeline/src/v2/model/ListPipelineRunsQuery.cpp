

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
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
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

}
}
}
}
}


