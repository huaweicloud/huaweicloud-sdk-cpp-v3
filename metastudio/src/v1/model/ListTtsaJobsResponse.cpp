

#include "huaweicloud/metastudio/v1/model/ListTtsaJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTtsaJobsResponse::ListTtsaJobsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    ttsaJobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTtsaJobsResponse::~ListTtsaJobsResponse() = default;

void ListTtsaJobsResponse::validate()
{
}

web::json::value ListTtsaJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(ttsaJobsIsSet_) {
        val[utility::conversions::to_string_t("ttsa_jobs")] = ModelBase::toJson(ttsaJobs_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTtsaJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttsa_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttsa_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<TTSAJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtsaJobs(refVal);
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


int32_t ListTtsaJobsResponse::getTotal() const
{
    return total_;
}

void ListTtsaJobsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTtsaJobsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTtsaJobsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<TTSAJob>& ListTtsaJobsResponse::getTtsaJobs()
{
    return ttsaJobs_;
}

void ListTtsaJobsResponse::setTtsaJobs(const std::vector<TTSAJob>& value)
{
    ttsaJobs_ = value;
    ttsaJobsIsSet_ = true;
}

bool ListTtsaJobsResponse::ttsaJobsIsSet() const
{
    return ttsaJobsIsSet_;
}

void ListTtsaJobsResponse::unsetttsaJobs()
{
    ttsaJobsIsSet_ = false;
}

std::string ListTtsaJobsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTtsaJobsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTtsaJobsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTtsaJobsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


