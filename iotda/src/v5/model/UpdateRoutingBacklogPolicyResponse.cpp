

#include "huaweicloud/iotda/v5/model/UpdateRoutingBacklogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRoutingBacklogPolicyResponse::UpdateRoutingBacklogPolicyResponse()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    backlogSize_ = 0;
    backlogSizeIsSet_ = false;
    backlogTime_ = 0;
    backlogTimeIsSet_ = false;
}

UpdateRoutingBacklogPolicyResponse::~UpdateRoutingBacklogPolicyResponse() = default;

void UpdateRoutingBacklogPolicyResponse::validate()
{
}

web::json::value UpdateRoutingBacklogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(backlogSizeIsSet_) {
        val[utility::conversions::to_string_t("backlog_size")] = ModelBase::toJson(backlogSize_);
    }
    if(backlogTimeIsSet_) {
        val[utility::conversions::to_string_t("backlog_time")] = ModelBase::toJson(backlogTime_);
    }

    return val;
}
bool UpdateRoutingBacklogPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("backlog_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backlog_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBacklogSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backlog_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backlog_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBacklogTime(refVal);
        }
    }
    return ok;
}


std::string UpdateRoutingBacklogPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void UpdateRoutingBacklogPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateRoutingBacklogPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateRoutingBacklogPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string UpdateRoutingBacklogPolicyResponse::getPolicyName() const
{
    return policyName_;
}

void UpdateRoutingBacklogPolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool UpdateRoutingBacklogPolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void UpdateRoutingBacklogPolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string UpdateRoutingBacklogPolicyResponse::getDescription() const
{
    return description_;
}

void UpdateRoutingBacklogPolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateRoutingBacklogPolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateRoutingBacklogPolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UpdateRoutingBacklogPolicyResponse::getBacklogSize() const
{
    return backlogSize_;
}

void UpdateRoutingBacklogPolicyResponse::setBacklogSize(int32_t value)
{
    backlogSize_ = value;
    backlogSizeIsSet_ = true;
}

bool UpdateRoutingBacklogPolicyResponse::backlogSizeIsSet() const
{
    return backlogSizeIsSet_;
}

void UpdateRoutingBacklogPolicyResponse::unsetbacklogSize()
{
    backlogSizeIsSet_ = false;
}

int32_t UpdateRoutingBacklogPolicyResponse::getBacklogTime() const
{
    return backlogTime_;
}

void UpdateRoutingBacklogPolicyResponse::setBacklogTime(int32_t value)
{
    backlogTime_ = value;
    backlogTimeIsSet_ = true;
}

bool UpdateRoutingBacklogPolicyResponse::backlogTimeIsSet() const
{
    return backlogTimeIsSet_;
}

void UpdateRoutingBacklogPolicyResponse::unsetbacklogTime()
{
    backlogTimeIsSet_ = false;
}

}
}
}
}
}


