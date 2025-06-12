

#include "huaweicloud/metastudio/v1/model/List2dModelTrainingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




List2dModelTrainingJobResponse::List2dModelTrainingJobResponse()
{
    count_ = 0;
    countIsSet_ = false;
    jobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

List2dModelTrainingJobResponse::~List2dModelTrainingJobResponse() = default;

void List2dModelTrainingJobResponse::validate()
{
}

web::json::value List2dModelTrainingJobResponse::toJson() const
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
bool List2dModelTrainingJobResponse::fromJson(const web::json::value& val)
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
            std::vector<TrainingJobBasicInfo> refVal;
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


int32_t List2dModelTrainingJobResponse::getCount() const
{
    return count_;
}

void List2dModelTrainingJobResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool List2dModelTrainingJobResponse::countIsSet() const
{
    return countIsSet_;
}

void List2dModelTrainingJobResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<TrainingJobBasicInfo>& List2dModelTrainingJobResponse::getJobs()
{
    return jobs_;
}

void List2dModelTrainingJobResponse::setJobs(const std::vector<TrainingJobBasicInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool List2dModelTrainingJobResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void List2dModelTrainingJobResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

std::string List2dModelTrainingJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void List2dModelTrainingJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool List2dModelTrainingJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void List2dModelTrainingJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


