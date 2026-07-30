

#include "huaweicloud/modelarts/v1/model/CreateTrainingExperimentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTrainingExperimentResponse::CreateTrainingExperimentResponse()
{
    metadataIsSet_ = false;
    statisticIsSet_ = false;
}

CreateTrainingExperimentResponse::~CreateTrainingExperimentResponse() = default;

void CreateTrainingExperimentResponse::validate()
{
}

web::json::value CreateTrainingExperimentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(statisticIsSet_) {
        val[utility::conversions::to_string_t("statistic")] = ModelBase::toJson(statistic_);
    }

    return val;
}
bool CreateTrainingExperimentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            TrainingExperimentResponseMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistic"));
        if(!fieldValue.is_null())
        {
            TrainingExperimentStatistic refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistic(refVal);
        }
    }
    return ok;
}


TrainingExperimentResponseMetadata CreateTrainingExperimentResponse::getMetadata() const
{
    return metadata_;
}

void CreateTrainingExperimentResponse::setMetadata(const TrainingExperimentResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateTrainingExperimentResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateTrainingExperimentResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

TrainingExperimentStatistic CreateTrainingExperimentResponse::getStatistic() const
{
    return statistic_;
}

void CreateTrainingExperimentResponse::setStatistic(const TrainingExperimentStatistic& value)
{
    statistic_ = value;
    statisticIsSet_ = true;
}

bool CreateTrainingExperimentResponse::statisticIsSet() const
{
    return statisticIsSet_;
}

void CreateTrainingExperimentResponse::unsetstatistic()
{
    statisticIsSet_ = false;
}

}
}
}
}
}


