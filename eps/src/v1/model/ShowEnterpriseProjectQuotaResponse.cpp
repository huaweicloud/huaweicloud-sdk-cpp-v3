

#include "huaweicloud/eps/v1/model/ShowEnterpriseProjectQuotaResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowEnterpriseProjectQuotaResponse::ShowEnterpriseProjectQuotaResponse()
{
    quotasIsSet_ = false;
}

ShowEnterpriseProjectQuotaResponse::~ShowEnterpriseProjectQuotaResponse() = default;

void ShowEnterpriseProjectQuotaResponse::validate()
{
}

web::json::value ShowEnterpriseProjectQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}

bool ShowEnterpriseProjectQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            QuotasDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}

QuotasDetail ShowEnterpriseProjectQuotaResponse::getQuotas() const
{
    return quotas_;
}

void ShowEnterpriseProjectQuotaResponse::setQuotas(const QuotasDetail& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowEnterpriseProjectQuotaResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowEnterpriseProjectQuotaResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


