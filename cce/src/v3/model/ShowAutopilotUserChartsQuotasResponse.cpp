

#include "huaweicloud/cce/v3/model/ShowAutopilotUserChartsQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotUserChartsQuotasResponse::ShowAutopilotUserChartsQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowAutopilotUserChartsQuotasResponse::~ShowAutopilotUserChartsQuotasResponse() = default;

void ShowAutopilotUserChartsQuotasResponse::validate()
{
}

web::json::value ShowAutopilotUserChartsQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowAutopilotUserChartsQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            QuotaResp_quotas refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


QuotaResp_quotas ShowAutopilotUserChartsQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ShowAutopilotUserChartsQuotasResponse::setQuotas(const QuotaResp_quotas& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowAutopilotUserChartsQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowAutopilotUserChartsQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


