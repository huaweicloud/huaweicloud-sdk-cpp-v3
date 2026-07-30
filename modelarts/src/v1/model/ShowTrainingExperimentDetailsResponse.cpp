

#include "huaweicloud/modelarts/v1/model/ShowTrainingExperimentDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingExperimentDetailsResponse::ShowTrainingExperimentDetailsResponse()
{
    metadataIsSet_ = false;
    statisticIsSet_ = false;
}

ShowTrainingExperimentDetailsResponse::~ShowTrainingExperimentDetailsResponse() = default;

void ShowTrainingExperimentDetailsResponse::validate()
{
}

web::json::value ShowTrainingExperimentDetailsResponse::toJson() const
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
bool ShowTrainingExperimentDetailsResponse::fromJson(const web::json::value& val)
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


TrainingExperimentResponseMetadata ShowTrainingExperimentDetailsResponse::getMetadata() const
{
    return metadata_;
}

void ShowTrainingExperimentDetailsResponse::setMetadata(const TrainingExperimentResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowTrainingExperimentDetailsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowTrainingExperimentDetailsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

TrainingExperimentStatistic ShowTrainingExperimentDetailsResponse::getStatistic() const
{
    return statistic_;
}

void ShowTrainingExperimentDetailsResponse::setStatistic(const TrainingExperimentStatistic& value)
{
    statistic_ = value;
    statisticIsSet_ = true;
}

bool ShowTrainingExperimentDetailsResponse::statisticIsSet() const
{
    return statisticIsSet_;
}

void ShowTrainingExperimentDetailsResponse::unsetstatistic()
{
    statisticIsSet_ = false;
}

}
}
}
}
}


