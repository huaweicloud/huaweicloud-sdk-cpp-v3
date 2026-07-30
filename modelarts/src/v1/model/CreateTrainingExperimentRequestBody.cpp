

#include "huaweicloud/modelarts/v1/model/CreateTrainingExperimentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTrainingExperimentRequestBody::CreateTrainingExperimentRequestBody()
{
    metadataIsSet_ = false;
}

CreateTrainingExperimentRequestBody::~CreateTrainingExperimentRequestBody() = default;

void CreateTrainingExperimentRequestBody::validate()
{
}

web::json::value CreateTrainingExperimentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool CreateTrainingExperimentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            TrainingExperimentRequestMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


TrainingExperimentRequestMetadata CreateTrainingExperimentRequestBody::getMetadata() const
{
    return metadata_;
}

void CreateTrainingExperimentRequestBody::setMetadata(const TrainingExperimentRequestMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateTrainingExperimentRequestBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateTrainingExperimentRequestBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


