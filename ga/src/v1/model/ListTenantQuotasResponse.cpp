

#include "huaweicloud/ga/v1/model/ListTenantQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListTenantQuotasResponse::ListTenantQuotasResponse()
{
    quotasIsSet_ = false;
}

ListTenantQuotasResponse::~ListTenantQuotasResponse() = default;

void ListTenantQuotasResponse::validate()
{
}

web::json::value ListTenantQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ListTenantQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            ListTenantQuotasResponseBody_quotas refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


ListTenantQuotasResponseBody_quotas ListTenantQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ListTenantQuotasResponse::setQuotas(const ListTenantQuotasResponseBody_quotas& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ListTenantQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ListTenantQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


