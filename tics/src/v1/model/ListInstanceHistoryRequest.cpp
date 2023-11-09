

#include "huaweicloud/tics/v1/model/ListInstanceHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListInstanceHistoryRequest::ListInstanceHistoryRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListInstanceHistoryRequest::~ListInstanceHistoryRequest() = default;

void ListInstanceHistoryRequest::validate()
{
}

web::json::value ListInstanceHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListInstanceHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


std::string ListInstanceHistoryRequest::getLeagueId() const
{
    return leagueId_;
}

void ListInstanceHistoryRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ListInstanceHistoryRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ListInstanceHistoryRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

int32_t ListInstanceHistoryRequest::getLimit() const
{
    return limit_;
}

void ListInstanceHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInstanceHistoryRequest::getOffset() const
{
    return offset_;
}

void ListInstanceHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInstanceHistoryRequest::getJobId() const
{
    return jobId_;
}

void ListInstanceHistoryRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListInstanceHistoryRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListInstanceHistoryRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


