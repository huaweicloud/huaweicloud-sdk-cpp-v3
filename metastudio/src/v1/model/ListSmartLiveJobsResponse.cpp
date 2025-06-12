

#include "huaweicloud/metastudio/v1/model/ListSmartLiveJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveJobsResponse::ListSmartLiveJobsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    smartLiveJobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSmartLiveJobsResponse::~ListSmartLiveJobsResponse() = default;

void ListSmartLiveJobsResponse::validate()
{
}

web::json::value ListSmartLiveJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(smartLiveJobsIsSet_) {
        val[utility::conversions::to_string_t("smart_live_jobs")] = ModelBase::toJson(smartLiveJobs_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSmartLiveJobsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("smart_live_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smart_live_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartLiveJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmartLiveJobs(refVal);
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


int32_t ListSmartLiveJobsResponse::getCount() const
{
    return count_;
}

void ListSmartLiveJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSmartLiveJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSmartLiveJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SmartLiveJob>& ListSmartLiveJobsResponse::getSmartLiveJobs()
{
    return smartLiveJobs_;
}

void ListSmartLiveJobsResponse::setSmartLiveJobs(const std::vector<SmartLiveJob>& value)
{
    smartLiveJobs_ = value;
    smartLiveJobsIsSet_ = true;
}

bool ListSmartLiveJobsResponse::smartLiveJobsIsSet() const
{
    return smartLiveJobsIsSet_;
}

void ListSmartLiveJobsResponse::unsetsmartLiveJobs()
{
    smartLiveJobsIsSet_ = false;
}

std::string ListSmartLiveJobsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSmartLiveJobsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSmartLiveJobsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSmartLiveJobsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


