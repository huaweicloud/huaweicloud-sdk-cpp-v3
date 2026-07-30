

#include "huaweicloud/modelarts/v1/model/WorkflowDagPolicies.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowDagPolicies::WorkflowDagPolicies()
{
    useCache_ = false;
    useCacheIsSet_ = false;
}

WorkflowDagPolicies::~WorkflowDagPolicies() = default;

void WorkflowDagPolicies::validate()
{
}

web::json::value WorkflowDagPolicies::toJson() const
{
    web::json::value val = web::json::value::object();

    if(useCacheIsSet_) {
        val[utility::conversions::to_string_t("use_cache")] = ModelBase::toJson(useCache_);
    }

    return val;
}
bool WorkflowDagPolicies::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("use_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_cache"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseCache(refVal);
        }
    }
    return ok;
}


bool WorkflowDagPolicies::isUseCache() const
{
    return useCache_;
}

void WorkflowDagPolicies::setUseCache(bool value)
{
    useCache_ = value;
    useCacheIsSet_ = true;
}

bool WorkflowDagPolicies::useCacheIsSet() const
{
    return useCacheIsSet_;
}

void WorkflowDagPolicies::unsetuseCache()
{
    useCacheIsSet_ = false;
}

}
}
}
}
}


