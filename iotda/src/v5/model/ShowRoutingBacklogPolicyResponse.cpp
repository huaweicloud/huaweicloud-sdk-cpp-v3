

#include "huaweicloud/iotda/v5/model/ShowRoutingBacklogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRoutingBacklogPolicyResponse::ShowRoutingBacklogPolicyResponse()
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

ShowRoutingBacklogPolicyResponse::~ShowRoutingBacklogPolicyResponse() = default;

void ShowRoutingBacklogPolicyResponse::validate()
{
}

web::json::value ShowRoutingBacklogPolicyResponse::toJson() const
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
bool ShowRoutingBacklogPolicyResponse::fromJson(const web::json::value& val)
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


std::string ShowRoutingBacklogPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void ShowRoutingBacklogPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowRoutingBacklogPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowRoutingBacklogPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ShowRoutingBacklogPolicyResponse::getPolicyName() const
{
    return policyName_;
}

void ShowRoutingBacklogPolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ShowRoutingBacklogPolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ShowRoutingBacklogPolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string ShowRoutingBacklogPolicyResponse::getDescription() const
{
    return description_;
}

void ShowRoutingBacklogPolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowRoutingBacklogPolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowRoutingBacklogPolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ShowRoutingBacklogPolicyResponse::getBacklogSize() const
{
    return backlogSize_;
}

void ShowRoutingBacklogPolicyResponse::setBacklogSize(int32_t value)
{
    backlogSize_ = value;
    backlogSizeIsSet_ = true;
}

bool ShowRoutingBacklogPolicyResponse::backlogSizeIsSet() const
{
    return backlogSizeIsSet_;
}

void ShowRoutingBacklogPolicyResponse::unsetbacklogSize()
{
    backlogSizeIsSet_ = false;
}

int32_t ShowRoutingBacklogPolicyResponse::getBacklogTime() const
{
    return backlogTime_;
}

void ShowRoutingBacklogPolicyResponse::setBacklogTime(int32_t value)
{
    backlogTime_ = value;
    backlogTimeIsSet_ = true;
}

bool ShowRoutingBacklogPolicyResponse::backlogTimeIsSet() const
{
    return backlogTimeIsSet_;
}

void ShowRoutingBacklogPolicyResponse::unsetbacklogTime()
{
    backlogTimeIsSet_ = false;
}

}
}
}
}
}


