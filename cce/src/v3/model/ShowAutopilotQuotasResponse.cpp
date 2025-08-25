

#include "huaweicloud/cce/v3/model/ShowAutopilotQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotQuotasResponse::ShowAutopilotQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowAutopilotQuotasResponse::~ShowAutopilotQuotasResponse() = default;

void ShowAutopilotQuotasResponse::validate()
{
}

web::json::value ShowAutopilotQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowAutopilotQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<QuotaResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


std::vector<QuotaResource>& ShowAutopilotQuotasResponse::getQuotas()
{
    return quotas_;
}

void ShowAutopilotQuotasResponse::setQuotas(const std::vector<QuotaResource>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowAutopilotQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowAutopilotQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


