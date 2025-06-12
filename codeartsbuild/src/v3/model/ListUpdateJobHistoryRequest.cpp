

#include "huaweicloud/codeartsbuild/v3/model/ListUpdateJobHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListUpdateJobHistoryRequest::ListUpdateJobHistoryRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListUpdateJobHistoryRequest::~ListUpdateJobHistoryRequest() = default;

void ListUpdateJobHistoryRequest::validate()
{
}

web::json::value ListUpdateJobHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListUpdateJobHistoryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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


std::string ListUpdateJobHistoryRequest::getJobId() const
{
    return jobId_;
}

void ListUpdateJobHistoryRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListUpdateJobHistoryRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListUpdateJobHistoryRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ListUpdateJobHistoryRequest::getPageNo() const
{
    return pageNo_;
}

void ListUpdateJobHistoryRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListUpdateJobHistoryRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListUpdateJobHistoryRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListUpdateJobHistoryRequest::getPageSize() const
{
    return pageSize_;
}

void ListUpdateJobHistoryRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListUpdateJobHistoryRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListUpdateJobHistoryRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


