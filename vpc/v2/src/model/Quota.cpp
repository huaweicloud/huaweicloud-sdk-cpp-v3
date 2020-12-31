

#include "huaweicloud/vpc/model/Quota.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




Quota::Quota()
{
    resourcesIsSet_ = false;
}

Quota::~Quota() = default;

void Quota::validate()
{
}

web::json::value Quota::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool Quota::fromJson(const web::json::value& val)
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


std::vector<ResourceResult>& Quota::getResources()
{
    return resources_;
}

void Quota::setResources(const std::vector<ResourceResult>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool Quota::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void Quota::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


