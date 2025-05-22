

#include "huaweicloud/codeartsbuild/v3/model/ListBuildInfoRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListBuildInfoRecordRequest::ListBuildInfoRecordRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListBuildInfoRecordRequest::~ListBuildInfoRecordRequest() = default;

void ListBuildInfoRecordRequest::validate()
{
}

web::json::value ListBuildInfoRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListBuildInfoRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


std::string ListBuildInfoRecordRequest::getJobId() const
{
    return jobId_;
}

void ListBuildInfoRecordRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListBuildInfoRecordRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListBuildInfoRecordRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListBuildInfoRecordRequest::getStartTime() const
{
    return startTime_;
}

void ListBuildInfoRecordRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListBuildInfoRecordRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListBuildInfoRecordRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListBuildInfoRecordRequest::getEndTime() const
{
    return endTime_;
}

void ListBuildInfoRecordRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBuildInfoRecordRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBuildInfoRecordRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListBuildInfoRecordRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListBuildInfoRecordRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListBuildInfoRecordRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListBuildInfoRecordRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListBuildInfoRecordRequest::getPageSize() const
{
    return pageSize_;
}

void ListBuildInfoRecordRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListBuildInfoRecordRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListBuildInfoRecordRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


