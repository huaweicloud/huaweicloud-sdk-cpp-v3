

#include "huaweicloud/modelarts/v1/model/ShowOsQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowOsQuotaResponse::ShowOsQuotaResponse()
{
    quotasIsSet_ = false;
}

ShowOsQuotaResponse::~ShowOsQuotaResponse() = default;

void ShowOsQuotaResponse::validate()
{
}

web::json::value ShowOsQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowOsQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            Quota refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


Quota ShowOsQuotaResponse::getQuotas() const
{
    return quotas_;
}

void ShowOsQuotaResponse::setQuotas(const Quota& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowOsQuotaResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowOsQuotaResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


