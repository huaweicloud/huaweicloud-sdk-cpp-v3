

#include "huaweicloud/ga/v1/model/ListTenantQuotasResponseBody_quotas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListTenantQuotasResponseBody_quotas::ListTenantQuotasResponseBody_quotas()
{
    resourcesIsSet_ = false;
}

ListTenantQuotasResponseBody_quotas::~ListTenantQuotasResponseBody_quotas() = default;

void ListTenantQuotasResponseBody_quotas::validate()
{
}

web::json::value ListTenantQuotasResponseBody_quotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ListTenantQuotasResponseBody_quotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<QuotaOuterResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<QuotaOuterResource>& ListTenantQuotasResponseBody_quotas::getResources()
{
    return resources_;
}

void ListTenantQuotasResponseBody_quotas::setResources(const std::vector<QuotaOuterResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListTenantQuotasResponseBody_quotas::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListTenantQuotasResponseBody_quotas::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


