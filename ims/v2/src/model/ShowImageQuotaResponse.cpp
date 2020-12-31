

#include "huaweicloud/ims/model/ShowImageQuotaResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ShowImageQuotaResponse::ShowImageQuotaResponse()
{
    quotasIsSet_ = false;
}

ShowImageQuotaResponse::~ShowImageQuotaResponse() = default;

void ShowImageQuotaResponse::validate()
{
}

web::json::value ShowImageQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}

bool ShowImageQuotaResponse::fromJson(const web::json::value& val)
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


Quota ShowImageQuotaResponse::getQuotas() const
{
    return quotas_;
}

void ShowImageQuotaResponse::setQuotas(const Quota& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowImageQuotaResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowImageQuotaResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


