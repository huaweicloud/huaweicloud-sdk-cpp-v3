

#include "huaweicloud/cdn/v1/model/ShowQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowQuotaResponse::ShowQuotaResponse()
{
    quotasIsSet_ = false;
}

ShowQuotaResponse::~ShowQuotaResponse() = default;

void ShowQuotaResponse::validate()
{
}

web::json::value ShowQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<Quotas> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


std::vector<Quotas>& ShowQuotaResponse::getQuotas()
{
    return quotas_;
}

void ShowQuotaResponse::setQuotas(const std::vector<Quotas>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowQuotaResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowQuotaResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


