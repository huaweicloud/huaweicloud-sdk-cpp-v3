

#include "huaweicloud/modelarts/v1/model/GetScaleEvaluationsDevServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetScaleEvaluationsDevServerResponse::GetScaleEvaluationsDevServerResponse()
{
    evaluationsIsSet_ = false;
}

GetScaleEvaluationsDevServerResponse::~GetScaleEvaluationsDevServerResponse() = default;

void GetScaleEvaluationsDevServerResponse::validate()
{
}

web::json::value GetScaleEvaluationsDevServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(evaluationsIsSet_) {
        val[utility::conversions::to_string_t("evaluations")] = ModelBase::toJson(evaluations_);
    }

    return val;
}
bool GetScaleEvaluationsDevServerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("evaluations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluations"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerScaleEvaluation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluations(refVal);
        }
    }
    return ok;
}


std::vector<ServerScaleEvaluation>& GetScaleEvaluationsDevServerResponse::getEvaluations()
{
    return evaluations_;
}

void GetScaleEvaluationsDevServerResponse::setEvaluations(const std::vector<ServerScaleEvaluation>& value)
{
    evaluations_ = value;
    evaluationsIsSet_ = true;
}

bool GetScaleEvaluationsDevServerResponse::evaluationsIsSet() const
{
    return evaluationsIsSet_;
}

void GetScaleEvaluationsDevServerResponse::unsetevaluations()
{
    evaluationsIsSet_ = false;
}

}
}
}
}
}


