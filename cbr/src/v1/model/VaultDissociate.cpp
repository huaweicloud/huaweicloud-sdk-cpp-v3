

#include "huaweicloud/cbr/v1/model/VaultDissociate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultDissociate::VaultDissociate()
{
    policyId_ = "";
    policyIdIsSet_ = false;
}

VaultDissociate::~VaultDissociate() = default;

void VaultDissociate::validate()
{
}

web::json::value VaultDissociate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}

bool VaultDissociate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    return ok;
}

std::string VaultDissociate::getPolicyId() const
{
    return policyId_;
}

void VaultDissociate::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool VaultDissociate::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void VaultDissociate::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


