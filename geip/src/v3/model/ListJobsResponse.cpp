

#include "huaweicloud/geip/v3/model/ListJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListJobsResponse::ListJobsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    jobsIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListJobsResponse::~ListJobsResponse() = default;

void ListJobsResponse::validate()
{
}

web::json::value ListJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<ListJobs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ListGlobalEipsResponseBody_page_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ListJobsResponse::getRequestId() const
{
    return requestId_;
}

void ListJobsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListJobsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListJobsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListJobs>& ListJobsResponse::getJobs()
{
    return jobs_;
}

void ListJobsResponse::setJobs(const std::vector<ListJobs>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info ListJobsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListJobsResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListJobsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListJobsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListJobsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListJobsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListJobsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListJobsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


