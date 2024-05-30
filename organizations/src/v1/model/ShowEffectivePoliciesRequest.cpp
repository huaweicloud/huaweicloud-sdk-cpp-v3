

#include "huaweicloud/organizations/v1/model/ShowEffectivePoliciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowEffectivePoliciesRequest::ShowEffectivePoliciesRequest()
{
    entityId_ = "";
    entityIdIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
}

ShowEffectivePoliciesRequest::~ShowEffectivePoliciesRequest() = default;

void ShowEffectivePoliciesRequest::validate()
{
}

web::json::value ShowEffectivePoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }
    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policy_type")] = ModelBase::toJson(policyType_);
    }

    return val;
}
bool ShowEffectivePoliciesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyType(refVal);
        }
    }
    return ok;
}


std::string ShowEffectivePoliciesRequest::getEntityId() const
{
    return entityId_;
}

void ShowEffectivePoliciesRequest::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool ShowEffectivePoliciesRequest::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void ShowEffectivePoliciesRequest::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string ShowEffectivePoliciesRequest::getPolicyType() const
{
    return policyType_;
}

void ShowEffectivePoliciesRequest::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool ShowEffectivePoliciesRequest::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void ShowEffectivePoliciesRequest::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

}
}
}
}
}


