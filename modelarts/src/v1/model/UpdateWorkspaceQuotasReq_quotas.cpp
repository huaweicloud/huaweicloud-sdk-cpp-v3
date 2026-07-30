

#include "huaweicloud/modelarts/v1/model/UpdateWorkspaceQuotasReq_quotas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkspaceQuotasReq_quotas::UpdateWorkspaceQuotasReq_quotas()
{
    resource_ = "";
    resourceIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
}

UpdateWorkspaceQuotasReq_quotas::~UpdateWorkspaceQuotasReq_quotas() = default;

void UpdateWorkspaceQuotasReq_quotas::validate()
{
}

web::json::value UpdateWorkspaceQuotasReq_quotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }

    return val;
}
bool UpdateWorkspaceQuotasReq_quotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    return ok;
}


std::string UpdateWorkspaceQuotasReq_quotas::getResource() const
{
    return resource_;
}

void UpdateWorkspaceQuotasReq_quotas::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool UpdateWorkspaceQuotasReq_quotas::resourceIsSet() const
{
    return resourceIsSet_;
}

void UpdateWorkspaceQuotasReq_quotas::unsetresource()
{
    resourceIsSet_ = false;
}

int32_t UpdateWorkspaceQuotasReq_quotas::getQuota() const
{
    return quota_;
}

void UpdateWorkspaceQuotasReq_quotas::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool UpdateWorkspaceQuotasReq_quotas::quotaIsSet() const
{
    return quotaIsSet_;
}

void UpdateWorkspaceQuotasReq_quotas::unsetquota()
{
    quotaIsSet_ = false;
}

}
}
}
}
}


