

#include "huaweicloud/metastudio/v1/model/ListTransferAssetJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTransferAssetJobsResponse::ListTransferAssetJobsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    jobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTransferAssetJobsResponse::~ListTransferAssetJobsResponse() = default;

void ListTransferAssetJobsResponse::validate()
{
}

web::json::value ListTransferAssetJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTransferAssetJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<TransferAssetJobInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
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


int32_t ListTransferAssetJobsResponse::getCount() const
{
    return count_;
}

void ListTransferAssetJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListTransferAssetJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListTransferAssetJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<TransferAssetJobInfo>& ListTransferAssetJobsResponse::getJobs()
{
    return jobs_;
}

void ListTransferAssetJobsResponse::setJobs(const std::vector<TransferAssetJobInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListTransferAssetJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListTransferAssetJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

std::string ListTransferAssetJobsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTransferAssetJobsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTransferAssetJobsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTransferAssetJobsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


