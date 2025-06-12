

#include "huaweicloud/metastudio/v1/model/ListSmartLiveResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveResponse::ListSmartLiveResponse()
{
    count_ = 0;
    countIsSet_ = false;
    smartLiveJobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSmartLiveResponse::~ListSmartLiveResponse() = default;

void ListSmartLiveResponse::validate()
{
}

web::json::value ListSmartLiveResponse::toJson() const
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
bool ListSmartLiveResponse::fromJson(const web::json::value& val)
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


int32_t ListSmartLiveResponse::getCount() const
{
    return count_;
}

void ListSmartLiveResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSmartLiveResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSmartLiveResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SmartLiveJob>& ListSmartLiveResponse::getSmartLiveJobs()
{
    return smartLiveJobs_;
}

void ListSmartLiveResponse::setSmartLiveJobs(const std::vector<SmartLiveJob>& value)
{
    smartLiveJobs_ = value;
    smartLiveJobsIsSet_ = true;
}

bool ListSmartLiveResponse::smartLiveJobsIsSet() const
{
    return smartLiveJobsIsSet_;
}

void ListSmartLiveResponse::unsetsmartLiveJobs()
{
    smartLiveJobsIsSet_ = false;
}

std::string ListSmartLiveResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSmartLiveResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSmartLiveResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSmartLiveResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


