

#include "huaweicloud/modelarts/v1/model/CheckTrainingExperimentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CheckTrainingExperimentResponse::CheckTrainingExperimentResponse()
{
    isDuplicate_ = false;
    isDuplicateIsSet_ = false;
}

CheckTrainingExperimentResponse::~CheckTrainingExperimentResponse() = default;

void CheckTrainingExperimentResponse::validate()
{
}

web::json::value CheckTrainingExperimentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isDuplicateIsSet_) {
        val[utility::conversions::to_string_t("is_duplicate")] = ModelBase::toJson(isDuplicate_);
    }

    return val;
}
bool CheckTrainingExperimentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_duplicate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_duplicate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDuplicate(refVal);
        }
    }
    return ok;
}


bool CheckTrainingExperimentResponse::isIsDuplicate() const
{
    return isDuplicate_;
}

void CheckTrainingExperimentResponse::setIsDuplicate(bool value)
{
    isDuplicate_ = value;
    isDuplicateIsSet_ = true;
}

bool CheckTrainingExperimentResponse::isDuplicateIsSet() const
{
    return isDuplicateIsSet_;
}

void CheckTrainingExperimentResponse::unsetisDuplicate()
{
    isDuplicateIsSet_ = false;
}

}
}
}
}
}


