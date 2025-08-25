

#include "huaweicloud/cce/v3/model/ShowUserChartsQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowUserChartsQuotasResponse::ShowUserChartsQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowUserChartsQuotasResponse::~ShowUserChartsQuotasResponse() = default;

void ShowUserChartsQuotasResponse::validate()
{
}

web::json::value ShowUserChartsQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowUserChartsQuotasResponse::fromJson(const web::json::value& val)
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


QuotaResp_quotas ShowUserChartsQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ShowUserChartsQuotasResponse::setQuotas(const QuotaResp_quotas& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowUserChartsQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowUserChartsQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


