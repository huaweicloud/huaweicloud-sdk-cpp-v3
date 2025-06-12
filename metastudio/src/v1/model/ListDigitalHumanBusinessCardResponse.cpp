

#include "huaweicloud/metastudio/v1/model/ListDigitalHumanBusinessCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListDigitalHumanBusinessCardResponse::ListDigitalHumanBusinessCardResponse()
{
    count_ = 0;
    countIsSet_ = false;
    jobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListDigitalHumanBusinessCardResponse::~ListDigitalHumanBusinessCardResponse() = default;

void ListDigitalHumanBusinessCardResponse::validate()
{
}

web::json::value ListDigitalHumanBusinessCardResponse::toJson() const
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
bool ListDigitalHumanBusinessCardResponse::fromJson(const web::json::value& val)
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
            std::vector<DigitalHumanBusinessCardJobInfo> refVal;
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


int32_t ListDigitalHumanBusinessCardResponse::getCount() const
{
    return count_;
}

void ListDigitalHumanBusinessCardResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListDigitalHumanBusinessCardResponse::countIsSet() const
{
    return countIsSet_;
}

void ListDigitalHumanBusinessCardResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DigitalHumanBusinessCardJobInfo>& ListDigitalHumanBusinessCardResponse::getJobs()
{
    return jobs_;
}

void ListDigitalHumanBusinessCardResponse::setJobs(const std::vector<DigitalHumanBusinessCardJobInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListDigitalHumanBusinessCardResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListDigitalHumanBusinessCardResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListDigitalHumanBusinessCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListDigitalHumanBusinessCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListDigitalHumanBusinessCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


