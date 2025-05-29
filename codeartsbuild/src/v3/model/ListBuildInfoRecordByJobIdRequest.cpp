

#include "huaweicloud/codeartsbuild/v3/model/ListBuildInfoRecordByJobIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListBuildInfoRecordByJobIdRequest::ListBuildInfoRecordByJobIdRequest()
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

ListBuildInfoRecordByJobIdRequest::~ListBuildInfoRecordByJobIdRequest() = default;

void ListBuildInfoRecordByJobIdRequest::validate()
{
}

web::json::value ListBuildInfoRecordByJobIdRequest::toJson() const
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
bool ListBuildInfoRecordByJobIdRequest::fromJson(const web::json::value& val)
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


std::string ListBuildInfoRecordByJobIdRequest::getJobId() const
{
    return jobId_;
}

void ListBuildInfoRecordByJobIdRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListBuildInfoRecordByJobIdRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListBuildInfoRecordByJobIdRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListBuildInfoRecordByJobIdRequest::getStartTime() const
{
    return startTime_;
}

void ListBuildInfoRecordByJobIdRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListBuildInfoRecordByJobIdRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListBuildInfoRecordByJobIdRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListBuildInfoRecordByJobIdRequest::getEndTime() const
{
    return endTime_;
}

void ListBuildInfoRecordByJobIdRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBuildInfoRecordByJobIdRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBuildInfoRecordByJobIdRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListBuildInfoRecordByJobIdRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListBuildInfoRecordByJobIdRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListBuildInfoRecordByJobIdRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListBuildInfoRecordByJobIdRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListBuildInfoRecordByJobIdRequest::getPageSize() const
{
    return pageSize_;
}

void ListBuildInfoRecordByJobIdRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListBuildInfoRecordByJobIdRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListBuildInfoRecordByJobIdRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


