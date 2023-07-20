

#include "huaweicloud/gaussdbforopengauss/v3/model/ProjectQuotasResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ProjectQuotasResult::ProjectQuotasResult()
{
    resourcesIsSet_ = false;
}

ProjectQuotasResult::~ProjectQuotasResult() = default;

void ProjectQuotasResult::validate()
{
}

web::json::value ProjectQuotasResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool ProjectQuotasResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}

std::vector<ResourceResult>& ProjectQuotasResult::getResources()
{
    return resources_;
}

void ProjectQuotasResult::setResources(const std::vector<ResourceResult>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ProjectQuotasResult::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ProjectQuotasResult::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


