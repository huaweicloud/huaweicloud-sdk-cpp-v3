

#include "huaweicloud/modelarts/v1/model/ListTrainingJobStagesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobStagesRequest::ListTrainingJobStagesRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

ListTrainingJobStagesRequest::~ListTrainingJobStagesRequest() = default;

void ListTrainingJobStagesRequest::validate()
{
}

web::json::value ListTrainingJobStagesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool ListTrainingJobStagesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("training_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingJobId(refVal);
        }
    }
    return ok;
}


std::string ListTrainingJobStagesRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ListTrainingJobStagesRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ListTrainingJobStagesRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ListTrainingJobStagesRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


