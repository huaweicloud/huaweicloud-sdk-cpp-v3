

#include "huaweicloud/iotda/v5/model/UnbindDevicePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UnbindDevicePolicyResponse::UnbindDevicePolicyResponse()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    successTargetsIsSet_ = false;
    failureTargetsIsSet_ = false;
}

UnbindDevicePolicyResponse::~UnbindDevicePolicyResponse() = default;

void UnbindDevicePolicyResponse::validate()
{
}

web::json::value UnbindDevicePolicyResponse::toJson() const
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
bool UnbindDevicePolicyResponse::fromJson(const web::json::value& val)
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


std::string UnbindDevicePolicyResponse::getPolicyId() const
{
    return policyId_;
}

void UnbindDevicePolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UnbindDevicePolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UnbindDevicePolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string UnbindDevicePolicyResponse::getTargetType() const
{
    return targetType_;
}

void UnbindDevicePolicyResponse::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool UnbindDevicePolicyResponse::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void UnbindDevicePolicyResponse::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::vector<std::string>& UnbindDevicePolicyResponse::getSuccessTargets()
{
    return successTargets_;
}

void UnbindDevicePolicyResponse::setSuccessTargets(const std::vector<std::string>& value)
{
    successTargets_ = value;
    successTargetsIsSet_ = true;
}

bool UnbindDevicePolicyResponse::successTargetsIsSet() const
{
    return successTargetsIsSet_;
}

void UnbindDevicePolicyResponse::unsetsuccessTargets()
{
    successTargetsIsSet_ = false;
}

std::vector<DevicePolicyBindOrUnbindFailureDetail>& UnbindDevicePolicyResponse::getFailureTargets()
{
    return failureTargets_;
}

void UnbindDevicePolicyResponse::setFailureTargets(const std::vector<DevicePolicyBindOrUnbindFailureDetail>& value)
{
    failureTargets_ = value;
    failureTargetsIsSet_ = true;
}

bool UnbindDevicePolicyResponse::failureTargetsIsSet() const
{
    return failureTargetsIsSet_;
}

void UnbindDevicePolicyResponse::unsetfailureTargets()
{
    failureTargetsIsSet_ = false;
}

}
}
}
}
}


