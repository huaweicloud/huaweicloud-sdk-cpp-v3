

#include "huaweicloud/modelarts/v1/model/WorkflowDagPoliciesResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowDagPoliciesResp::WorkflowDagPoliciesResp()
{
    useCache_ = false;
    useCacheIsSet_ = false;
}

WorkflowDagPoliciesResp::~WorkflowDagPoliciesResp() = default;

void WorkflowDagPoliciesResp::validate()
{
}

web::json::value WorkflowDagPoliciesResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(useCacheIsSet_) {
        val[utility::conversions::to_string_t("use_cache")] = ModelBase::toJson(useCache_);
    }

    return val;
}
bool WorkflowDagPoliciesResp::fromJson(const web::json::value& val)
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


bool WorkflowDagPoliciesResp::isUseCache() const
{
    return useCache_;
}

void WorkflowDagPoliciesResp::setUseCache(bool value)
{
    useCache_ = value;
    useCacheIsSet_ = true;
}

bool WorkflowDagPoliciesResp::useCacheIsSet() const
{
    return useCacheIsSet_;
}

void WorkflowDagPoliciesResp::unsetuseCache()
{
    useCacheIsSet_ = false;
}

}
}
}
}
}


