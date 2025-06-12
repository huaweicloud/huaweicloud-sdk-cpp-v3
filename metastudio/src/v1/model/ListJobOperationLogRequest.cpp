

#include "huaweicloud/metastudio/v1/model/ListJobOperationLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListJobOperationLogRequest::ListJobOperationLogRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListJobOperationLogRequest::~ListJobOperationLogRequest() = default;

void ListJobOperationLogRequest::validate()
{
}

web::json::value ListJobOperationLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListJobOperationLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t ListJobOperationLogRequest::getOffset() const
{
    return offset_;
}

void ListJobOperationLogRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJobOperationLogRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJobOperationLogRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListJobOperationLogRequest::getLimit() const
{
    return limit_;
}

void ListJobOperationLogRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJobOperationLogRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJobOperationLogRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListJobOperationLogRequest::getJobId() const
{
    return jobId_;
}

void ListJobOperationLogRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListJobOperationLogRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListJobOperationLogRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


