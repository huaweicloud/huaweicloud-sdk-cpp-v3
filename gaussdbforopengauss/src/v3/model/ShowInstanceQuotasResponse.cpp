

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceQuotasResponse::ShowInstanceQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowInstanceQuotasResponse::~ShowInstanceQuotasResponse() = default;

void ShowInstanceQuotasResponse::validate()
{
}

web::json::value ShowInstanceQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowInstanceQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            InstanceQuotaResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


InstanceQuotaResult ShowInstanceQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ShowInstanceQuotasResponse::setQuotas(const InstanceQuotaResult& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowInstanceQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowInstanceQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


