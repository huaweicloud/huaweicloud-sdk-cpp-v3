

#include "huaweicloud/modelarts/v1/model/ShowTrainingQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingQuotasResponse::ShowTrainingQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowTrainingQuotasResponse::~ShowTrainingQuotasResponse() = default;

void ShowTrainingQuotasResponse::validate()
{
}

web::json::value ShowTrainingQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowTrainingQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<TrainingQuotaResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


std::vector<TrainingQuotaResponse>& ShowTrainingQuotasResponse::getQuotas()
{
    return quotas_;
}

void ShowTrainingQuotasResponse::setQuotas(const std::vector<TrainingQuotaResponse>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowTrainingQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowTrainingQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


