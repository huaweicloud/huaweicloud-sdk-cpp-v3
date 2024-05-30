

#include "huaweicloud/organizations/v1/model/ShowEffectivePoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowEffectivePoliciesResponse::ShowEffectivePoliciesResponse()
{
    lastUpdatedAt_ = utility::datetime();
    lastUpdatedAtIsSet_ = false;
    policyContent_ = "";
    policyContentIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
    entityId_ = "";
    entityIdIsSet_ = false;
}

ShowEffectivePoliciesResponse::~ShowEffectivePoliciesResponse() = default;

void ShowEffectivePoliciesResponse::validate()
{
}

web::json::value ShowEffectivePoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lastUpdatedAtIsSet_) {
        val[utility::conversions::to_string_t("last_updated_at")] = ModelBase::toJson(lastUpdatedAt_);
    }
    if(policyContentIsSet_) {
        val[utility::conversions::to_string_t("policy_content")] = ModelBase::toJson(policyContent_);
    }
    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policy_type")] = ModelBase::toJson(policyType_);
    }
    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }

    return val;
}
bool ShowEffectivePoliciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("last_updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyContent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    return ok;
}


utility::datetime ShowEffectivePoliciesResponse::getLastUpdatedAt() const
{
    return lastUpdatedAt_;
}

void ShowEffectivePoliciesResponse::setLastUpdatedAt(const utility::datetime& value)
{
    lastUpdatedAt_ = value;
    lastUpdatedAtIsSet_ = true;
}

bool ShowEffectivePoliciesResponse::lastUpdatedAtIsSet() const
{
    return lastUpdatedAtIsSet_;
}

void ShowEffectivePoliciesResponse::unsetlastUpdatedAt()
{
    lastUpdatedAtIsSet_ = false;
}

std::string ShowEffectivePoliciesResponse::getPolicyContent() const
{
    return policyContent_;
}

void ShowEffectivePoliciesResponse::setPolicyContent(const std::string& value)
{
    policyContent_ = value;
    policyContentIsSet_ = true;
}

bool ShowEffectivePoliciesResponse::policyContentIsSet() const
{
    return policyContentIsSet_;
}

void ShowEffectivePoliciesResponse::unsetpolicyContent()
{
    policyContentIsSet_ = false;
}

std::string ShowEffectivePoliciesResponse::getPolicyType() const
{
    return policyType_;
}

void ShowEffectivePoliciesResponse::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool ShowEffectivePoliciesResponse::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void ShowEffectivePoliciesResponse::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

std::string ShowEffectivePoliciesResponse::getEntityId() const
{
    return entityId_;
}

void ShowEffectivePoliciesResponse::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool ShowEffectivePoliciesResponse::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void ShowEffectivePoliciesResponse::unsetentityId()
{
    entityIdIsSet_ = false;
}

}
}
}
}
}


