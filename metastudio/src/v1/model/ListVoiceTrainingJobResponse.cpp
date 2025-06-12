

#include "huaweicloud/metastudio/v1/model/ListVoiceTrainingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListVoiceTrainingJobResponse::ListVoiceTrainingJobResponse()
{
    count_ = 0;
    countIsSet_ = false;
    jobsIsSet_ = false;
}

ListVoiceTrainingJobResponse::~ListVoiceTrainingJobResponse() = default;

void ListVoiceTrainingJobResponse::validate()
{
}

web::json::value ListVoiceTrainingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool ListVoiceTrainingJobResponse::fromJson(const web::json::value& val)
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
            std::vector<TrainingJobInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


int32_t ListVoiceTrainingJobResponse::getCount() const
{
    return count_;
}

void ListVoiceTrainingJobResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListVoiceTrainingJobResponse::countIsSet() const
{
    return countIsSet_;
}

void ListVoiceTrainingJobResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<TrainingJobInfo>& ListVoiceTrainingJobResponse::getJobs()
{
    return jobs_;
}

void ListVoiceTrainingJobResponse::setJobs(const std::vector<TrainingJobInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListVoiceTrainingJobResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListVoiceTrainingJobResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


