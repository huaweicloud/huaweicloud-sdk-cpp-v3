

#include "huaweicloud/modelarts/v1/model/TrainingExperimentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TrainingExperimentResponse::TrainingExperimentResponse()
{
    metadataIsSet_ = false;
    statisticIsSet_ = false;
}

TrainingExperimentResponse::~TrainingExperimentResponse() = default;

void TrainingExperimentResponse::validate()
{
}

web::json::value TrainingExperimentResponse::toJson() const
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
bool TrainingExperimentResponse::fromJson(const web::json::value& val)
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


TrainingExperimentResponseMetadata TrainingExperimentResponse::getMetadata() const
{
    return metadata_;
}

void TrainingExperimentResponse::setMetadata(const TrainingExperimentResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool TrainingExperimentResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void TrainingExperimentResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

TrainingExperimentStatistic TrainingExperimentResponse::getStatistic() const
{
    return statistic_;
}

void TrainingExperimentResponse::setStatistic(const TrainingExperimentStatistic& value)
{
    statistic_ = value;
    statisticIsSet_ = true;
}

bool TrainingExperimentResponse::statisticIsSet() const
{
    return statisticIsSet_;
}

void TrainingExperimentResponse::unsetstatistic()
{
    statisticIsSet_ = false;
}

}
}
}
}
}


