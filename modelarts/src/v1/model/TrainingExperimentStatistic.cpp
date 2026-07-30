

#include "huaweicloud/modelarts/v1/model/TrainingExperimentStatistic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TrainingExperimentStatistic::TrainingExperimentStatistic()
{
    jobCount_ = 0;
    jobCountIsSet_ = false;
}

TrainingExperimentStatistic::~TrainingExperimentStatistic() = default;

void TrainingExperimentStatistic::validate()
{
}

web::json::value TrainingExperimentStatistic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobCountIsSet_) {
        val[utility::conversions::to_string_t("job_count")] = ModelBase::toJson(jobCount_);
    }

    return val;
}
bool TrainingExperimentStatistic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobCount(refVal);
        }
    }
    return ok;
}


int32_t TrainingExperimentStatistic::getJobCount() const
{
    return jobCount_;
}

void TrainingExperimentStatistic::setJobCount(int32_t value)
{
    jobCount_ = value;
    jobCountIsSet_ = true;
}

bool TrainingExperimentStatistic::jobCountIsSet() const
{
    return jobCountIsSet_;
}

void TrainingExperimentStatistic::unsetjobCount()
{
    jobCountIsSet_ = false;
}

}
}
}
}
}


