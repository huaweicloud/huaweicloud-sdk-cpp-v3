

#include "huaweicloud/kms/v2/model/ShowUserQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowUserQuotasResponse::ShowUserQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowUserQuotasResponse::~ShowUserQuotasResponse() = default;

void ShowUserQuotasResponse::validate()
{
}

web::json::value ShowUserQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowUserQuotasResponse::fromJson(const web::json::value& val)
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


Quotas ShowUserQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ShowUserQuotasResponse::setQuotas(const Quotas& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowUserQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowUserQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


