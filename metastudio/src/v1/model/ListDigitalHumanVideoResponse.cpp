

#include "huaweicloud/metastudio/v1/model/ListDigitalHumanVideoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListDigitalHumanVideoResponse::ListDigitalHumanVideoResponse()
{
    count_ = 0;
    countIsSet_ = false;
    jobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListDigitalHumanVideoResponse::~ListDigitalHumanVideoResponse() = default;

void ListDigitalHumanVideoResponse::validate()
{
}

web::json::value ListDigitalHumanVideoResponse::toJson() const
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
bool ListDigitalHumanVideoResponse::fromJson(const web::json::value& val)
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
            std::vector<DigitalHumanVideo> refVal;
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


int32_t ListDigitalHumanVideoResponse::getCount() const
{
    return count_;
}

void ListDigitalHumanVideoResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListDigitalHumanVideoResponse::countIsSet() const
{
    return countIsSet_;
}

void ListDigitalHumanVideoResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DigitalHumanVideo>& ListDigitalHumanVideoResponse::getJobs()
{
    return jobs_;
}

void ListDigitalHumanVideoResponse::setJobs(const std::vector<DigitalHumanVideo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListDigitalHumanVideoResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListDigitalHumanVideoResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

std::string ListDigitalHumanVideoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListDigitalHumanVideoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListDigitalHumanVideoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListDigitalHumanVideoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


