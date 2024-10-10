

#include "huaweicloud/drs/v5/model/ListJobDdlsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJobDdlsRequest::ListJobDdlsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startSeqNo_ = 0L;
    startSeqNoIsSet_ = false;
    endSeqNo_ = 0L;
    endSeqNoIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListJobDdlsRequest::~ListJobDdlsRequest() = default;

void ListJobDdlsRequest::validate()
{
}

web::json::value ListJobDdlsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(startSeqNoIsSet_) {
        val[utility::conversions::to_string_t("start_seq_no")] = ModelBase::toJson(startSeqNo_);
    }
    if(endSeqNoIsSet_) {
        val[utility::conversions::to_string_t("end_seq_no")] = ModelBase::toJson(endSeqNo_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListJobDdlsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_seq_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_seq_no"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartSeqNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_seq_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_seq_no"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndSeqNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ListJobDdlsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListJobDdlsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListJobDdlsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListJobDdlsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListJobDdlsRequest::getOffset() const
{
    return offset_;
}

void ListJobDdlsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJobDdlsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJobDdlsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListJobDdlsRequest::getLimit() const
{
    return limit_;
}

void ListJobDdlsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJobDdlsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJobDdlsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int64_t ListJobDdlsRequest::getStartSeqNo() const
{
    return startSeqNo_;
}

void ListJobDdlsRequest::setStartSeqNo(int64_t value)
{
    startSeqNo_ = value;
    startSeqNoIsSet_ = true;
}

bool ListJobDdlsRequest::startSeqNoIsSet() const
{
    return startSeqNoIsSet_;
}

void ListJobDdlsRequest::unsetstartSeqNo()
{
    startSeqNoIsSet_ = false;
}

int64_t ListJobDdlsRequest::getEndSeqNo() const
{
    return endSeqNo_;
}

void ListJobDdlsRequest::setEndSeqNo(int64_t value)
{
    endSeqNo_ = value;
    endSeqNoIsSet_ = true;
}

bool ListJobDdlsRequest::endSeqNoIsSet() const
{
    return endSeqNoIsSet_;
}

void ListJobDdlsRequest::unsetendSeqNo()
{
    endSeqNoIsSet_ = false;
}

int32_t ListJobDdlsRequest::getStatus() const
{
    return status_;
}

void ListJobDdlsRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListJobDdlsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListJobDdlsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListJobDdlsRequest::getJobId() const
{
    return jobId_;
}

void ListJobDdlsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListJobDdlsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListJobDdlsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


