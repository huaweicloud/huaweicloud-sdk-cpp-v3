

#include "huaweicloud/iotda/v5/model/BindDevicePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BindDevicePolicyResponse::BindDevicePolicyResponse()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    successTargetsIsSet_ = false;
    failureTargetsIsSet_ = false;
}

BindDevicePolicyResponse::~BindDevicePolicyResponse() = default;

void BindDevicePolicyResponse::validate()
{
}

web::json::value BindDevicePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(successTargetsIsSet_) {
        val[utility::conversions::to_string_t("success_targets")] = ModelBase::toJson(successTargets_);
    }
    if(failureTargetsIsSet_) {
        val[utility::conversions::to_string_t("failure_targets")] = ModelBase::toJson(failureTargets_);
    }

    return val;
}
bool BindDevicePolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_targets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessTargets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_targets"));
        if(!fieldValue.is_null())
        {
            std::vector<DevicePolicyBindOrUnbindFailureDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureTargets(refVal);
        }
    }
    return ok;
}


std::string BindDevicePolicyResponse::getPolicyId() const
{
    return policyId_;
}

void BindDevicePolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool BindDevicePolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void BindDevicePolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string BindDevicePolicyResponse::getTargetType() const
{
    return targetType_;
}

void BindDevicePolicyResponse::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool BindDevicePolicyResponse::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void BindDevicePolicyResponse::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::vector<std::string>& BindDevicePolicyResponse::getSuccessTargets()
{
    return successTargets_;
}

void BindDevicePolicyResponse::setSuccessTargets(const std::vector<std::string>& value)
{
    successTargets_ = value;
    successTargetsIsSet_ = true;
}

bool BindDevicePolicyResponse::successTargetsIsSet() const
{
    return successTargetsIsSet_;
}

void BindDevicePolicyResponse::unsetsuccessTargets()
{
    successTargetsIsSet_ = false;
}

std::vector<DevicePolicyBindOrUnbindFailureDetail>& BindDevicePolicyResponse::getFailureTargets()
{
    return failureTargets_;
}

void BindDevicePolicyResponse::setFailureTargets(const std::vector<DevicePolicyBindOrUnbindFailureDetail>& value)
{
    failureTargets_ = value;
    failureTargetsIsSet_ = true;
}

bool BindDevicePolicyResponse::failureTargetsIsSet() const
{
    return failureTargetsIsSet_;
}

void BindDevicePolicyResponse::unsetfailureTargets()
{
    failureTargetsIsSet_ = false;
}

}
}
}
}
}


