

#include "huaweicloud/tms/v1/model/ShowTagQuotaResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ShowTagQuotaResponse::ShowTagQuotaResponse()
{
    quotasIsSet_ = false;
}

ShowTagQuotaResponse::~ShowTagQuotaResponse() = default;

void ShowTagQuotaResponse::validate()
{
}

web::json::value ShowTagQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}

bool ShowTagQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<TagQuota> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}

std::vector<TagQuota>& ShowTagQuotaResponse::getQuotas()
{
    return quotas_;
}

void ShowTagQuotaResponse::setQuotas(const std::vector<TagQuota>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowTagQuotaResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowTagQuotaResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


