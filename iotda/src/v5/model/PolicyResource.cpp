

#include "huaweicloud/iotda/v5/model/PolicyResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




PolicyResource::PolicyResource()
{
    policyIdsIsSet_ = false;
}

PolicyResource::~PolicyResource() = default;

void PolicyResource::validate()
{
}

web::json::value PolicyResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdsIsSet_) {
        val[utility::conversions::to_string_t("policy_ids")] = ModelBase::toJson(policyIds_);
    }

    return val;
}
bool PolicyResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& PolicyResource::getPolicyIds()
{
    return policyIds_;
}

void PolicyResource::setPolicyIds(const std::vector<std::string>& value)
{
    policyIds_ = value;
    policyIdsIsSet_ = true;
}

bool PolicyResource::policyIdsIsSet() const
{
    return policyIdsIsSet_;
}

void PolicyResource::unsetpolicyIds()
{
    policyIdsIsSet_ = false;
}

}
}
}
}
}


