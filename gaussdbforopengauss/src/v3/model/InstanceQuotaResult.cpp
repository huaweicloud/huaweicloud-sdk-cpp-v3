

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceQuotaResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceQuotaResult::InstanceQuotaResult()
{
    resourcesIsSet_ = false;
}

InstanceQuotaResult::~InstanceQuotaResult() = default;

void InstanceQuotaResult::validate()
{
}

web::json::value InstanceQuotaResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool InstanceQuotaResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceResourceQuotaResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<InstanceResourceQuotaResult>& InstanceQuotaResult::getResources()
{
    return resources_;
}

void InstanceQuotaResult::setResources(const std::vector<InstanceResourceQuotaResult>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool InstanceQuotaResult::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void InstanceQuotaResult::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


