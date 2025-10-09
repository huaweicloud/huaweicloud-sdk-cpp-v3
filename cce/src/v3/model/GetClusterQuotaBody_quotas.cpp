

#include "huaweicloud/cce/v3/model/GetClusterQuotaBody_quotas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetClusterQuotaBody_quotas::GetClusterQuotaBody_quotas()
{
    resourcesIsSet_ = false;
}

GetClusterQuotaBody_quotas::~GetClusterQuotaBody_quotas() = default;

void GetClusterQuotaBody_quotas::validate()
{
}

web::json::value GetClusterQuotaBody_quotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool GetClusterQuotaBody_quotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ClusterQuotaResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<ClusterQuotaResource>& GetClusterQuotaBody_quotas::getResources()
{
    return resources_;
}

void GetClusterQuotaBody_quotas::setResources(const std::vector<ClusterQuotaResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool GetClusterQuotaBody_quotas::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void GetClusterQuotaBody_quotas::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


