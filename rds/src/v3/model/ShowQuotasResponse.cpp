

#include "huaweicloud/rds/v3/model/ShowQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowQuotasResponse::ShowQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowQuotasResponse::~ShowQuotasResponse() = default;

void ShowQuotasResponse::validate()
{
}

web::json::value ShowQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            Quotas refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


Quotas ShowQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ShowQuotasResponse::setQuotas(const Quotas& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


