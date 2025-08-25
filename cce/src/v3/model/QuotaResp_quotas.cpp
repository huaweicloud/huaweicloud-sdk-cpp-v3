

#include "huaweicloud/cce/v3/model/QuotaResp_quotas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




QuotaResp_quotas::QuotaResp_quotas()
{
    resourcesIsSet_ = false;
}

QuotaResp_quotas::~QuotaResp_quotas() = default;

void QuotaResp_quotas::validate()
{
}

web::json::value QuotaResp_quotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool QuotaResp_quotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<QuotaResp_quotas_resources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<QuotaResp_quotas_resources>& QuotaResp_quotas::getResources()
{
    return resources_;
}

void QuotaResp_quotas::setResources(const std::vector<QuotaResp_quotas_resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool QuotaResp_quotas::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void QuotaResp_quotas::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


