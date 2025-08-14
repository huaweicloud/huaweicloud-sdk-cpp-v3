

#include "huaweicloud/iotda/v5/model/UpdateFlowControlPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateFlowControlPolicy::UpdateFlowControlPolicy()
{
    policyName_ = "";
    policyNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

UpdateFlowControlPolicy::~UpdateFlowControlPolicy() = default;

void UpdateFlowControlPolicy::validate()
{
}

web::json::value UpdateFlowControlPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool UpdateFlowControlPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string UpdateFlowControlPolicy::getPolicyName() const
{
    return policyName_;
}

void UpdateFlowControlPolicy::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool UpdateFlowControlPolicy::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void UpdateFlowControlPolicy::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string UpdateFlowControlPolicy::getDescription() const
{
    return description_;
}

void UpdateFlowControlPolicy::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateFlowControlPolicy::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateFlowControlPolicy::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UpdateFlowControlPolicy::getLimit() const
{
    return limit_;
}

void UpdateFlowControlPolicy::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool UpdateFlowControlPolicy::limitIsSet() const
{
    return limitIsSet_;
}

void UpdateFlowControlPolicy::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


